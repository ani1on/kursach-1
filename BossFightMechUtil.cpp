#include "BossFightMech.h"
using namespace std;
void clearscreen() {
    SetCursorPosition(0, 0);
    cout << R"(
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       

)";
}
int fightmenu( int& hb, string& healthboss, int& agro, player& metik) {
	SetCursorPosition(2, 40);
	cout << "===================";
	SetCursorPosition(2, 42);
	cout << "===================";
	int meaning = 0;
	for (int x = 2;;) {
		if ((GetAsyncKeyState('A') & 0x8000) && (x > 5)) {
			SetCursorPosition(x, 40);
			cout << "                   ";
			SetCursorPosition(x, 42);
			cout << "                   ";

			x -= 23;
			SetCursorPosition(x, 40);
			cout << "===================";
			SetCursorPosition(x, 42);
			cout << "===================";
			Sleep(200);
			meaning--;

		}
		if ((GetAsyncKeyState('D') & 0x8000) && (x < 70)) {
			SetCursorPosition(x, 40);
			cout << "                   ";
			SetCursorPosition(x, 42);
			cout << "                   ";

			x += 23;
			SetCursorPosition(x, 40);
			cout << "===================";
			SetCursorPosition(x, 42);
			cout << "===================";
			Sleep(200);
			meaning++;

		}
		if (GetAsyncKeyState('E') & 0x8000) {
			SetCursorPosition(x, 40);
			cout << "                   ";
			SetCursorPosition(x, 42);
			cout << "                   ";
			break;

		}
	}

	switch (meaning) {
	case 0:
		SetCursorPosition(2, 36);
		cout << "Ты ударил его, он разозлился...                                            ";
		hb--;
		healthboss[hb] = ' ';
		SetCursorPosition(8, 34);
		cout << healthboss;
		agro++;
		skip('R', 'r');
		break;
	case 1:
		SetCursorPosition(0, 0);
		cout << R"(
                                                                                               
   +----------------------------------------------------------------------------------------------+
   |                                                                                              |
   |  +-------------------------+                                    +-------------------------+  |
   |  |                         |   +---+                     +---+  |                         |  |
   |  |        Обозвать         |   |   |                     |   |  |       Посмеяться        |  |
   |  |                         |   +---+                     +---+  |                         |  |
   |  +-------------------------+                                    +-------------------------+  |
   |                                                                                              |
   |  +-------------------------+                                    +-------------------------+  |
   |  |                         |   +---+                     +---+  |                         |  |
   |  |    Позвать на помощь    |   |   |                     |   |  |         Убедить         |  |
   |  |                         |   +---+                     +---+  |                         |  |
   |  +-------------------------+                                    +-------------------------+  |
   |                                                                                              |
   |  +-------------------------+                                    +-------------------------+  |
   |  |                         |   +---+                     +---+  |                         |  |
   |  |        Заплакать        |   |   |                     |   |  |        Погавкать        |  |
   |  |                         |   +---+                     +---+  |                         |  |
   |  +-------------------------+                                    +-------------------------+  |
   |                                                                                              |
   |  +-------+  +---+                                                                            |
   |  | Назад |  |   |                                                  Подтвердить ответ |S|     |
   |  +-------+  +---+                                                                            |
   +----------------------------------------------------------------------------------------------+
)";
		SetCursorPosition(38, 6);
		cout << "#"; char key;
		int sol;
		for (int x = 1, x2 = 0;;) {

			key = _getch();
			if (key == 'D' || key == 'd') {
				x2 = x;
				++x;
				if (x > 7) {
					x = 1;
				}




			}
			if (key == 'A' || key == 'a') {
				x2 = x;
				x--;
				if (x < 1) {
					x = 7;
				}


			}
			if (key == 'S' || key == 's') {
				break;
			}
			if (x2 < 4 && x2 >= 1) {
				int j = x2 * 6;
				SetCursorPosition(38, j);
				cout << " ";
			}
			if (x2 >= 4 && x2 < 7) {
				int j = (x2 - 3) * 6;
				SetCursorPosition(64, j);
				cout << " ";
			}
			if (x2 == 7) {
				SetCursorPosition(19, 23);
				cout << " ";
			}

			if (x < 4 && x >= 1) {
				int j = x * 6;
				SetCursorPosition(38, j);
				cout << "#";
			}
			if (x >= 4 && x < 7) {
				int j = (x - 3) * 6;
				SetCursorPosition(64, j);
				cout << "#";
			}
			if (x == 7) {
				SetCursorPosition(19, 23);
				cout << "#";
			}
			SetCursorPosition(0, 0);
			sol = x;
		}
		clearscreen();

		switch (sol) {
		case 1:
			SetCursorPosition(2, 4);
			cout << "Ты говоришь мужику, что он очень плохой.";
			skip('R', 'r');
			SetCursorPosition(2, 6);
			cout << "Он стал злее.";
			agro += 3;
			skip('R', 'r');
			clearscreen();
			break;
		case 2:
			SetCursorPosition(2, 4);
			cout << "Ты пытаешься позвать кого-то на помощь...";
			skip('R', 'r');
			SetCursorPosition(2, 6);
			cout << "...";
			skip('R', 'r');
			SetCursorPosition(2, 8);
			cout << "...";
			skip('R', 'r');
			SetCursorPosition(2, 10);
			cout << "...";
			SetCursorPosition(2, 12);
			cout << "Но никто не пришел...";
			skip('R', 'r');
			clearscreen();
			break;
		case 3:
			SetCursorPosition(2, 4);
			cout << "Ты сделал грустное лицо.";
			skip('R', 'r');
			SetCursorPosition(2, 6);
			cout << "Мужик внемательно смотрит на тебя.";
			skip('R', 'r');
			SetCursorPosition(2, 8);
			cout << "Ты начинаешь плакать, слезы падают на асфальт.";
			skip('R', 'r');
			SetCursorPosition(2, 10);
			cout << "Мужик усмехнулся, но задумался.";
			SetCursorPosition(2, 12);
			cout << "Его взгляд стал менее тупым, видимо в нем еще осталось немного человечности.";
			skip('R', 'r');
			agro--;
			clearscreen();
			break;
		case 4:
			SetCursorPosition(2, 4);
			cout << "Ты начал смеяться.";
			skip('R', 'r');
			SetCursorPosition(2, 6);
			cout << "Мужик с недопонианием уставился на тебя.";
			skip('R', 'r');
			SetCursorPosition(2, 8);
			cout << "ОН спросил, с чего ты смеешься.";
			skip('R', 'r');
			SetCursorPosition(2, 10);
			cout << "Ты промолчал...";
			SetCursorPosition(2, 12);
			cout << "Ему это не понравилось...";
			skip('R', 'r');
			agro++;
			clearscreen();
			break;
		case 5:
			SetCursorPosition(2, 4);
			cout << "Ты начинаешь ему говорить, что этот конфликт пустой.";
			skip('R', 'r');
			SetCursorPosition(2, 6);
			cout << "Мужик слишком овощ, чтоб понимать тебя с твоими умными фразами.";
			skip('R', 'r');
			SetCursorPosition(2, 8);
			cout << "Ты говоришь, что рамс без повода.";
			skip('R', 'r');
			SetCursorPosition(2, 10);
			cout << "Он тебя понял...";
			SetCursorPosition(2, 12);
			cout << "По его лицу было понятно, что он сделал какие-то выводы...";
			skip('R', 'r');
			agro -= 3;
			clearscreen();
			break;
		case 6:
			SetCursorPosition(2, 4);
			cout << "Ты начинаешь гавкать...";
			skip('R', 'r');
			SetCursorPosition(2, 6);
			cout << "Мужик тоже гавкает...";
			skip('R', 'r');
			SetCursorPosition(2, 8);
			cout << "Вы вместе гавкаете какую-то песню, гав-гав гав-гав...";
			skip('R', 'r');
			SetCursorPosition(2, 10);
			cout << "Все собаки на раене загавкали с вами...";
			SetCursorPosition(2, 12);
			cout << "Все гавкают, ура!";
			skip('R', 'r');
			clearscreen();
			break;
		case 7:
			SetCursorPosition(2, 4);
			cout << "Времени нет...";
			break;
		}
		break;

	case 2:
		SetCursorPosition(2, 36);
		cout << "Ты в спешке шаришься по карманам...                                                           ";
		skip('R', 'r');
		if ((4 > rand() % 10) && (metik.ivent[0])) {
			SetCursorPosition(2, 37);
			cout << "Ты достал телефон. Мужик тебя толкнул, телефон выпал и разбился.                                 ";
			metik.ivent[0] = 1;
			skip('R', 'r');
		}
		else {
			if ((4 > rand() % 10) && (metik.ivent[4])) {
				SetCursorPosition(2, 37);
				cout << "Ты достал рубль и кинул его. Мужик немного успокоился.                                 ";
				metik.ivent[4] = 1;
				agro--;

			}
			else {
				SetCursorPosition(2, 37);
				cout << "Ты не успел что-либо достьть...                                                        ";
			}
			skip('R', 'r');
		}
		break;
	case 3:
		SetCursorPosition(2, 36);
		cout << "Вы ничего не делаете.                                                             ";
		skip('R', 'r');
		break;
	}
	SetCursorPosition(2, 37);
	cout << "                                                                                                    ";
	SetCursorPosition(2, 36);
	cout << "                                                                                                    ";
	return 0;
}
int pianogame(piano a1, int numattac) {
	int score1 = 0;
	bool egor1 = true;
	for (int i = 1, j = 1, k = 0; k <= numattac; i++) {
		for (int p = 116; p < 154; p++) {
			SetCursorPosition(p, 28);
			cout << "-";
			SetCursorPosition(p, 29);
			cout << "-";
		}

		a1.y = i;
		a1.move();
		pianoplayer(a1.key, a1.y, score1, egor1);
		if (i >= 40) {
			a1.key = rand() % 4;
			i = 1;
			k++;
		}
		//Sleep(3);
	}
	return score1 > numattac;
}
int pianoplayer(int key,  int y, int& meaning, bool& egor) {
	if (egor) {
		bool keyPressedA = (GetAsyncKeyState('A') & 0x8000);
		bool keyPressedD = (GetAsyncKeyState('D') & 0x8000);
		bool keyPressedJ = (GetAsyncKeyState('J') & 0x8000);
		bool keyPressedL = (GetAsyncKeyState('L') & 0x8000);

		if (keyPressedA || keyPressedD || keyPressedJ || keyPressedL) {
			if ((keyPressedA && key == 0) || (keyPressedD && key == 1) ||
				(keyPressedJ && key == 2) || (keyPressedL && key == 3)) {
				meaning++;
				egor = false;
			}
			else {
			
					meaning--;
				
			}
			return 0;
		}

	}

	if (y == 30) {
		if (egor) {
			meaning--;
		}
		egor = true;
	}
	return 0;
}