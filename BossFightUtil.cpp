#include "BossFight.h"
using namespace std;
void fight(player& metik) {
	PlayMusic(L"misc/bossfightthem.mp3");
	string healthboss = "|####################|", healthplayer = "|#####|";
	int hb = 21, hp = 6;
	SetCursorPosition(2, 36);
	cout << "Мужик нападает, увернитесь от его ударов.";
	SetCursorPosition(114, 36);
	cout << "Управление |A| |D| |J| |L|";
	SetCursorPosition(2, 34);
	cout << "Босс: " << healthboss;
	SetCursorPosition(2, 35);
	cout << "Ты:   " << healthplayer;
	SetCursorPosition(0, 38);
	cout << R"(
 +-------------------+  +-------------------+  +-------------------+  +-------------------+ 
 |                   |  |                   |  |                   |  |                   | 
 |      Ударить      |  |     Действие      |  |     Предметы      |  |    Пропустить     | 
 |                   |  |                   |  |                   |  |                   | 
 +-------------------+  +-------------------+  +-------------------+  +-------------------+ 
)";
	for (int i = 114; i <= 155; i++) {
		for (int j = 0; j < 34; j++) {
			SetCursorPosition(i, j);
			if (i < 116) {
				cout << "#";
			}
			if (i > 153) {
				cout << "#";
			}
			if ((j == 0) && (i < 155)) {
				cout << "#";
			}
			if ((j == 33) && (i < 155)) {
				cout << "#";
			}
		}
	}
	piano a1;
	int result, agro = 20;
	for (; agro > 0 && hp > 1 && hb > 1;) {
		const int numattac = 5;
		result = pianogame(a1, numattac);
		if (!result) {
			SetCursorPosition(2, 36);
			cout << "Мужик попал по тебе, что бедете делать?              ";
			hp--;

			healthplayer[hp] = ' ';

			SetCursorPosition(8, 35);
			cout << healthplayer;
		}
		else {

			SetCursorPosition(2, 36);
			cout << "Ты успешно увернулись от его ударов, что будете делать?                ";
		}
		fightmenu( hb, healthboss,  agro, metik);
		SetCursorPosition(2, 33);

	}
	skip('R', 'r');

	if (hp < 2) {
		metik.boss = 1; // Игрок проиграл
	}
	else if (hb < 2) {
		metik.boss = 2; // Босс побежден
	}
	else if (agro < 1) {
		metik.boss = 3; // Агрессия снижена
	}
	StopMusic();
}