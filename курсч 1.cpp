//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <conio.h>
//#include <stdio.h>
//#pragma comment(lib, "Winmm.lib")
//#include <iomanip>
//using namespace std;
//using namespace std;
//
////готово
////общее
//void SetCursorPosition(int x, int y);//ставит курсор в нужное мето
//void skip(char A, char a);//ожидание отклика игрока
//
////ready
////механники дом
//void moveStep(int& x, int& y, char direction);
//void clearchar(int x, int y);//очистка следов за игроком
//void moveplayer(int& x, int& y);//передвижение игрока
//void Corridor();
//
////ready345
////меню и этапы
//void Menu(int& out);//меню
//void Step1();//переход 1
//void Step2(player& metik);//переход 2
//void Step3(player& metik);
//
////ready
////музыка
//void PlayMusic(const wchar_t* filename);
//void StopMusic();
//
////ready
////этапы с домом
//void Home(player& metik);//мини игра дом, собираем в универ
//void Dream(player& metik);
//void Room1(player& metik);
//void Room2(player& metik);
//void Room3(player& metik);
////ready
////механники босса
//void clearscreen();//очистка экрана используется в битве с босом
//int fightmenu(int& hp, int& hb, string& healthboss, string& healthplayer, int& agro, player& metik);
//int pianogame(piano a1, piano a2, int numattac, int agro);//механника "пианино"
//int pianoplayer(int key, int key1, int y, int& meaning, bool& egor);//нажатие клавиш игроком
//
//
////ready
////боссфайт
//void fight(player& metik);//миниигра, битва с боссом
////reaady
////английский
//void EnglishLesson(player& metik);
//void examwords(int& solution, string str, int num);
//
////концовки
//void endpart(player metik);
//
////ivent 0 - телефон, 1 - тетрадь по оаипу, 2 - одежда, 3 - портфель, 4 - рубль, 5 - ключ
//struct player {
//	int ivent[10]{ 1,1,1,1,1,1,1,1,1,1 };
//	int dreamkey[8]{ 0,0,0,0,0,0,0,0 };
//	int lose = 0;
//	int carma;
//	int boss;
//	int egorend = 0;
//	int eng;
//};
////структура в модуль fight
//struct piano {
//	int key = 0;
//	int y = 1;
//	void move() {
//		for (int i = 117 + key * 9; i < 125 + key * 9; i++) {
//			if (y > 1 && y < 34) {
//				SetCursorPosition(i, y - 1);
//				cout << " ";
//			}
//			for (int j = y; j < y + 8; j++) {
//				if (j != 0 && j < 33) {
//
//					SetCursorPosition(i, j);
//					cout << "+";
//
//				}
//			}
//		}
//	}
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////int main() {
////	setlocale(LC_ALL, "ru_RU.UTF-8");
////	srand(time(0));
////	player metik;
////	int out = 1;
////	for (;;) {
////		Menu(out);
////		if (out == 0) {
////			return 0;
////		}
////		Step1();
////
////		Home(metik);  // Здесь metik.lose может стать 1
////		skip('R', 'r');
////		if (metik.lose == 1) {  // Проверяем проигрыш ТОЛЬКО после Home()
////			endpart(metik);
////			continue;
////		}
////		Step2(metik);
////		fight(metik);   // Внутри fight() metik.lose может измениться
////		Step3(metik);
////
////			if (metik.lose == 1) {  // Проверяем проигрыш после боя
////			endpart(metik);
////			continue;
////		}
////
////		EnglishLesson(metik);  // Эти этапы выполняются 
////		Dream(metik);          // только если нет проигрыша
////
////		endpart(metik);  // Финальная концовка
////	}
////	return 0;
////}
//void Menu(int& out) {//меню игры
//	int x = 74, y = 20;
//	bool b = 1;
//	int a;
//	for (; b;) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/menuthem.mp3");
//		system("cls");
//		SetCursorPosition(0, 0);
//		cout << R"(
//
//      .-.                          .--------'             .-.                                     
//        /|/|         /  .-.   /   (_)   /    /           (_) )-.                                  
//       /   |  .-.---/---`-'  /-.       /    /-.   .-.       /   \  )  ( .  .-..  .-.   .-.  ).--.
//      /    |./.-'_ /   /    /   )     /    /   |./.-'_     /     )(    ) )/   ))/   )./.-'_/       
// .-' /     |(__.' / _.(__._/    \  .-/.__.'    |(__.'   .-/  `--'  `--':'/   ('/   ( (__.'/       
//(__.'      `.                     (_/  `-              (_/     `-._)          `-    `-            
//
//)";
//		SetCursorPosition(75, 20);
//		cout << "1-Начать";
//		SetCursorPosition(75, 21);
//		cout << "2-Правила";
//		SetCursorPosition(75, 22);
//		cout << "3-Авторы";
//		SetCursorPosition(75, 23);
//		cout << "4-Выход";
//		SetCursorPosition(95, 20);
//		cout << "Управление - w a s d";
//		SetCursorPosition(95, 21);
//		cout << "Взаимодействие - e";
//		SetCursorPosition(95, 22);
//		cout << "Пропуск фразы - r";
//		SetCursorPosition(75, 24);
//		cin >> a;
//		switch (a) {
//		case 1:
//			b = 0; break;
//		case 2:
//			system("cls");
//			SetCursorPosition(0, 10);
//			cout << R"(
//                                   +------------------------------------------------------------------------------------+
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   +------------------------------------------------------------------------------------+
//)";
//			SetCursorPosition(37, 12);
//			cout << "Управление указано в главном меню.";
//			SetCursorPosition(37, 14);
//			cout << "В этапе Дом используйте возможность для взаимодействия с окружением.";
//			SetCursorPosition(37, 16);
//			cout << "Совет: Изучайте все более детально.";
//			SetCursorPosition(37, 18);
//			cout << "В битве с так называемым босом вам нужно вовремя нажимать клавиши в тот момент,";
//			SetCursorPosition(37, 20);
//			cout << "когда обьект попадает на полосу.";
//			SetCursorPosition(37, 22);
//			cout << "На паре английского вам нужно написать перевод слов на английском.";
//			SetCursorPosition(37, 24);
//			cout << "На паре оаипа вам нужно показать конспект, которого может у вас не быть ( .";
//			SetCursorPosition(37, 26);
//			cout << "\033[96mВ страшном месте есть кусочек магии.\033[0m";
//			SetCursorPosition(37, 28);
//			cout << "В игре есть несколько концовок. Какая вам попадется, зависит от ваших решений.";
//			SetCursorPosition(37, 30);
//			cout << "Повеселитесь!)))";
//			SetCursorPosition(37, 32);
//			cout << "Выход >> |R|";
//			skip('R', 'r');
//			break;
//		case 3:
//			system("cls");
//			SetCursorPosition(0, 10);
//			cout << R"(
//                                   +------------------------------------------------------------------------------------+
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   |                                                                                    |
//                                   +------------------------------------------------------------------------------------+
//)";
//			SetCursorPosition(37, 12);
//			cout << "Автор игры: Дубовик Иван ПО - 14";
//			SetCursorPosition(37, 14);
//			cout << "Благодарности:";
//			SetCursorPosition(37, 16);
//			cout << "Белый - главный мативатор и советник.";
//			SetCursorPosition(37, 18);
//			cout << "Метик - вдохновил на создание сюжета.";
//			SetCursorPosition(37, 20);
//			cout << "Джинглик - давал бесполезные советы.";
//			SetCursorPosition(37, 22);
//			cout << "Поршень - делал чай.";
//			SetCursorPosition(37, 24);
//			cout << "Касперский - все ради Ангелинки...";
//			SetCursorPosition(37, 26);
//			cout << "===================================================================================";
//
//			SetCursorPosition(37, 28);
//			cout << "Начало реализации проекта: 26.03";
//			SetCursorPosition(37, 30);
//			cout << "Конец:";
//			SetCursorPosition(37, 32);
//			cout << "Выход >> |R|";
//			skip('R', 'r');
//			break;
//		case 4:
//
//			out = 0;
//			b = 0;
//			break;
//
//		}
//	}
//	system("cls");
//	StopMusic();
//}
//void SetCursorPosition(int x, int y) {//перемещение курсора
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
//	SetConsoleCursorPosition(hConsole, pos);
//}
//void moveplayer(int& x, int& y) {
//
//	if ((GetAsyncKeyState('D') & 0x8000)) {
//
//		x++;
//	}
//	if ((GetAsyncKeyState('S') & 0x8000)) {
//		y++;
//	}
//	if ((GetAsyncKeyState('A') & 0x8000) && (x > 1)) {
//		x--;
//	}
//	if ((GetAsyncKeyState('W') & 0x8000) && (y > 1)) {
//		y--;
//	}
//}
//int pianogame(piano a1, piano a2, int numattac, int agro) {
//	int score1 = 0, score2 = 0;
//	bool egor1 = true, egor2 = true, egor3 = true;
//	for (int i = 1, j = 1, global = 0, k = 0; k <= numattac; i++, global++) {
//		for (int p = 116; p < 154; p++) {
//			SetCursorPosition(p, 28);
//			cout << "-";
//			SetCursorPosition(p, 29);
//			cout << "-";
//		}
//
//		//
//		if (global > 20) {
//			j++;
//
//			a2.y = j;
//			a2.move();
//
//			pianoplayer(a2.key, a1.key, a2.y, score2, egor2);
//			if (j >= 40 && k < numattac) {
//				a2.key = rand() % 4;
//				j = 1;
//				k++;
//			}
//
//		}
//		//
//
//		a1.y = i;
//		a1.move();
//		pianoplayer(a1.key, a2.key, a1.y, score1, egor1);
//		if (i >= 40) {
//			a1.key = rand() % 4;
//			i = 1;
//			k++;
//		}
//		//
//		//Sleep(3);
//	}
//	return score1 + score2 > numattac;
//}
//int pianoplayer(int key, int key1, int y, int& meaning, bool& egor) {
//	if (egor) {
//		bool keyPressedA = (GetAsyncKeyState('A') & 0x8000);
//		bool keyPressedD = (GetAsyncKeyState('D') & 0x8000);
//		bool keyPressedJ = (GetAsyncKeyState('J') & 0x8000);
//		bool keyPressedL = (GetAsyncKeyState('L') & 0x8000);
//
//		if (keyPressedA || keyPressedD || keyPressedJ || keyPressedL) {
//			if ((keyPressedA && key == 0) || (keyPressedD && key == 1) ||
//				(keyPressedJ && key == 2) || (keyPressedL && key == 3)) {
//				meaning++;
//				egor = false;
//			}
//			else {
//				if ((keyPressedA && key1 == 0) || (keyPressedD && key1 == 1) ||
//					(keyPressedJ && key1 == 2) || (keyPressedL && key1 == 3)) {
//					meaning++;
//					egor = false;
//
//
//
//				}
//				else {
//					meaning--;
//				}
//			}
//			return 0;
//		}
//
//	}
//
//	if (y == 30) {
//		if (egor) {
//			meaning--;
//		}
//		egor = true;
//	}
//	return 0;
//}
//void clearchar(int x, int y) {//���������� �������
//	SetCursorPosition(x, y);
//	cout << ' ';
//}
//void skip(char A, char a) {
//	char key;
//	do {
//		key = _getch();
//	} while (key != A && key != a);
//
//}
//void moveStep(int& x, int& y, char direction) {
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	char ch;
//	DWORD charsRead;
//	COORD position;
//
//	// Скрываем курсор
//	CONSOLE_CURSOR_INFO cursorInfo;
//	GetConsoleCursorInfo(hConsole, &cursorInfo);
//	cursorInfo.bVisible = false;
//	SetConsoleCursorInfo(hConsole, &cursorInfo);
//
//	// Проверяем направление движения и наличие пробела
//	switch (direction) {
//	case 'W': // Вверх
//		position = { static_cast<SHORT>(x), static_cast<SHORT>(y - 1) };
//		if (y > 0 && ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
//			y--;
//		}
//		break;
//
//	case 'S': // Вниз
//		position = { static_cast<SHORT>(x), static_cast<SHORT>(y + 1) };
//		if (ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
//			y++;
//		}
//		break;
//
//	case 'A': // Влево
//		position = { static_cast<SHORT>(x - 1), static_cast<SHORT>(y) };
//		if (x > 0 && ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
//			x--;
//		}
//		break;
//
//	case 'D': // Вправо
//		position = { static_cast<SHORT>(x + 1), static_cast<SHORT>(y) };
//		if (ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
//			x++;
//		}
//		break;
//	}
//
//	// Отображаем персонажа на новой позиции
//	SetConsoleCursorPosition(hConsole, { static_cast<SHORT>(x), static_cast<SHORT>(y) });
//	cout << '@';
//}
//void Step1() {//первый ивент
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/home.mp3");
//	cout << R"(
//     :::::::::::: mm      m        aaaaaaaa  :         WW  :::
//  ::::aaaaaaaammmm mmmmmmmmmmmmm aa :::   aa :         WWW :::
//  :: aa :::.. mmmmmmmm   mm  mm  ::::: ..  aa ::       WWW  ::
//  :  a ::... mmmmm mmmmmmmmm##### ::: ...   aa::::     WWW WWW
// ::  a::..mmmmmmmmmm  m ::  # #### ::.....   aa:::     WWWWWWW
// :: a :.. m   mmmmm nnn::   # :: # ::... ..   a ::    WWWWWWWW
// :  aa :... mmmmm nnnn:::.   ::: ## :: ....  aa ::    WWWWWWWW
// ::  aaa:: aam  # :::::: .. ::   # :::::: aaaa:::     W W WWW:
// ::::::aaaaaaaaa## ::::: ..     ##a aaaaaaa ::::      W WWWW :
//    :::::::::  ## ::#::.. ...   # aa :::::::: :       W W W ::
//  .......  :::  #####::.. ..  ###   ::                W WWW ::
//     ........     ## :: .   #######  : ###########    WW WW: :
//   ##### .......   ############   ######        ##:   WW WW:::
// ###   ####### ..  #### :::::::::::   xxxxxxx   # :   WW WW ::
// ##  x::::::: ######  ::::::  xxxxxxxxxxxx  :   :::  WWWWWW ::
//  # xxxxxxx ::::::::::: : xxxxx xxxxx::::::::   #::: WWWWW  : 
//  #   xxxxxxxxxxxxxxxxxxxxx xxxxx :::::::    o  # ::: WWWW :: 
//  # :::::::::xxxxx     xxxxx   ::::::::  ooooo  #  :::  WW :::
//  #  oo::::::::: xxxxxxx  :::::      oooo ooo    # :::: WW : :
// # :  ooooooooooooo   :::::   ooooooo  oooo ::   ## : ::WW  : 
// # ::ooooooooo    ooooooooooooo     oo:::::::     #  :::WW  : 
//##  ::::      ooooo    ooooooooooooo:: :::   yy    # :: WW :::
//# yyyy  ::::::::::oooooo:::::::  ::: ::  yyyyy     ##   W W:::
//# ::  yyyyyy  :::::::::: :::::::::::::yyyy :::      ##  WWW:::
//# ::::::yy yyyyyyy     :::::::::::yyyyy :::::   zz   #  WWW:: 
//# zz  ::::yyyyy   yyyyyy    yyyyyyyyy ::::   zzzz   ##   WW:: 
//# zzzzzz  :::::::yyyyyyyyyyyyyyyy ::::     zzzz ::: # :: WW:::
//# zzzzzzzzzz    ::::::::::::::::::    zzzzzz  :::::::::: WW:::
//#::::::zzzzzzzz     ::     ::::    zzzzzz::::::    ::::  WW:::
//# ::: :::: zzzzzzzzzzzzzzzzzzzzzzzzz  ::::  ::     ::: . WW:: 
//# ::::   :::::  zzzzzzzzzzzzzzz    ::::    ::     ##: .. :::::
//# :::::    :::::     :::::::::   ::       ::     ## :..  :::::
//#  ::  ::   :::::::::::      :::         :     ::# ::.  :::  :
//#:      ::::::::   ::::::       ::      :      ::  :    :W:   
//#:::: ::   :   :::..::  :::::::  ::  ::::::::  :::      ::::  
// . ::..:::::::   ::....::::::::::  ::::::. :::::::  ::::::::  
// .    ....: ::::::  . .. :::  :::::::::::. ..  ::::::::::..:  
// .....  . ...:   .....      :::: ..   :::.....  : : :  :::.:  
// ..   ....   ......   .       :: ...... ..... ...::  . : :..
//  .   .......  ..             .......................... : .
//  .                                           .......... : .
//                                                    ...:.. .
//)";
//	SetCursorPosition(80, 10);
//	cout << "Кто-то > Проснись Мечислав!!!";
//	skip('R', 'r');
//	SetCursorPosition(80, 11);
//	cout << "Кто-то > Это всего лишь сон...";
//	SetCursorPosition(80, 12);
//	cout << "На пары пора, первым ОаИП!";
//	skip('R', 'r');
//	system("cls");
//	cout << R"(
//       #########
//##########################################
//##                                      ##
//##   @@@@@@@ @@@@@@@   @@@@@@@ @@@@@@@  ##
//##   @     @ @     @ @ @     @ @     @  ##
//##   @     @ @@@@@@@   @     @ @     @  ##
//##   @     @ @     @ @ @     @ @     @  ##
//##   @@@@@@@ @@@@@@@   @@@@@@@ @@@@@@@  ##
//##                                      ##
//##########################################
//
//)";
//	SetCursorPosition(1, 20);
//	cout << R"(
//
//)";
//	SetCursorPosition(80, 10);
//	cout << "> 8:00, я опаздываю, надо быстро собираться и бежать.";
//	skip('R', 'r');
//	system("cls");
//
//}
//void Home(player& metik) {//мини игра дом
//
//	int x = 30, y = 7;
//	cout << R"(
//################################_______________##################################
//###############################/_______/______/######=================###########
//# /  *   \ | {________} |\                         /   &           MM   \      ##
//# |  W   | |============|\                         |          +    UU   |      ##
//# \______/ |            |                          |  EE          -     |      ##
//#          |            |                          |  EE                |      ##
//#          |            |                          \____________________/      ##
//#          |            |\                           \\              \\        ##
//#          |____________|\                                                     ##
//#                                                                            /|##
//#                                                                           | |##
//#                                                                           | |##
//#                                                                           | |##
//#                                                                           |/ ##
//#                                                                              ##
//#                                                                              ##
//#                                                                              ##
//#                                                                              ##
//#                                    __________________________________________##
//#                                   /+      /+            /+          /+       ##
//#                                  |===========================================##
//#                   _________.     |:::::::::::::::::::::::::::::::::::::::::::##
//#                  /        /      |:::::::::::::::::::::::::::::::::::::::::::##
//##################/+       /#####################################################
//#################/________/######################################################
//
//
//)";
//	cout << R"(
//
//)";
//	SetCursorPosition(90, 14);
//	cout << "Задание:";
//	SetCursorPosition(90, 15);
//	cout << "Соберите Метика в универ!";
//	SetCursorPosition(90, 16);
//	cout << "Для эт ого взаимодействуйте с окружением.";
//	int px = x, py = y;
//	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
//
//		if ((GetAsyncKeyState('W') & 0x8000)) {
//			moveStep(x, y, 'W');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('A') & 0x8000)) {
//			moveStep(x, y, 'A');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('D') & 0x8000)) {
//			moveStep(x, y, 'D');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//
//		if ((GetAsyncKeyState('S') & 0x8000)) {
//			moveStep(x, y, 'S');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('E') & 0x8000)) {
//			if ((y < 12)) {//тумбочка, кровать, окно, стол
//				if ((x < 10)) {
//					if (trig[0]) {
//						SetCursorPosition(1, 30);
//						cout << R"(Это твоя тумбочка, на ней стоит искуственный цветочек красного цвета...)";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << R"(Ты взял с тумбочки телефон и 10 рублей, возможно этих денег как раз хватит перекусить в универе.)";
//						skip('R', 'r');
//						metik.carma++;
//						trig[0] = 0;
//						metik.ivent[0] = 0;
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << R"(Вы уже достаточно осмотрели тумбочку, кроме цветочка на ней ничего нет.)";
//						SetCursorPosition(1, 31);
//						cout << R"(Она выглядит пусто, похоже, улицы города в 4 утра более наполнены.)";
//						skip('R', 'r');
//					}
//					SetCursorPosition(1, 30);
//					cout << R"(                                                                                     
//                                                                                                                            )";
//				}
//				if ((x > 9) && (x < 28) && trig[1]) {
//					SetCursorPosition(1, 30);
//					cout << R"(Это маленькая кроватка для БОЛЬШОГО мужчины, которым ты и являешься.)";
//					skip('R', 'r');
//					SetCursorPosition(1, 31);
//					cout << R"(Такая мягкая. Приятный приглушенный свет, пытающийся пробиться через шторы говорит тебе лечь на кровать и не идти на пары...)";
//					skip('R', 'r');
//					SetCursorPosition(1, 30);
//					cout << R"(                                                                                                                                
//                                                                                                                            )";
//
//					SetCursorPosition(1, 30);
//					cout << R"(У тебя начали закрадваться сомнения, стоит ли. Что ты выберешь?)";
//					SetCursorPosition(1, 31);
//					cout << "Лечь - 1";
//					SetCursorPosition(1, 32);
//					cout << "Не ложиться - 2";
//					SetCursorPosition(1, 33);
//					int a;
//					cin >> a;
//					if (a == 1) {
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                 
//                                                             )";
//						SetCursorPosition(1, 30);
//						cout << "Вы легли спать и почти сразу уснули, видимо, это было не плохое решение...";
//						metik.lose = 1;
//						key = 0;
//						skip('R', 'r');
//						system("color 07");
//						StopMusic();
//						return;
//
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                 
//                                                             )";
//						SetCursorPosition(1, 30);
//						cout << "Все таки лучше стоит сходить на пары, потом проблем много будет.";
//						SetCursorPosition(1, 31);
//						if (metik.ivent[4] == 0) {
//							cout << "Вы поправили кровать, что б выглядела более ровной.";
//						}
//						else {
//							metik.carma++;
//							cout << "Вы внимательно просмотрели кровать и нашли 1 рубль, который скорее всего выпал вчера вечером из брюк.";
//						}
//						skip('R', 'r');
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                  
//                                                                   )";
//					}
//
//					metik.ivent[4] = 0;
//				}
//				if ((x > 27) && (x < 37)) {
//					if (trig[2]) {
//						SetCursorPosition(1, 30);
//						cout << "Окно...";
//						skip('R', 'r');
//						cout << "Погода достаточно хороша, возможно это знак.";
//						skip('R', 'r');
//						cout << "Ветра нет, светит солнце.";
//						SetCursorPosition(1, 31);
//						cout << "Единственное, что портит красоту этого вида - серые дома.";
//						skip('R', 'r');
//						cout << "Птички прыгают по дереву.";
//						skip('R', 'r');
//						cout << "Все же хватит смотреть в окно, надо идти.";
//						SetCursorPosition(1, 32);
//						cout << "На подоконнике стоял кактус, рядом с ним лежала тетрадь, вы решили ее взять.";
//						metik.carma++;
//						skip('R', 'r');
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << "И снова окно...";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "Что вы еще хотите там увидить?";
//						skip('R', 'r');
//						SetCursorPosition(1, 32);
//						cout << "Вам больше не интересно смотреть на соседний дом";
//
//						skip('R', 'r');
//					}
//					SetCursorPosition(1, 30);
//					cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                
//                                                                                                                                       )";
//					trig[2] = 0;
//					metik.ivent[1] = 0;
//				}
//				if ((x > 45)) {
//					if (trig[7]) {
//						SetCursorPosition(1, 30);
//						cout << "Ты решил просмотреть стол еще раз.";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "Ты нашел ключ, который запал за шуфлядку!";
//						metik.carma++;
//						metik.ivent[5] = 0;
//						trig[7] = 0;
//					}
//					else {
//						if (trig[3]) {
//							SetCursorPosition(1, 30);
//							cout << "Это твой стол, на нем как всегда порядок, все лежит на местах.";
//							skip('R', 'r');
//							cout << "На столе лежат тетрадки, но все нужные на сегодня у тебя в портфеле.";
//							SetCursorPosition(1, 31);
//							cout << "Вот кстати и он!";
//							skip('R', 'r');
//							cout << "Ты наклоняешься под стол достать свой портфель.";
//							skip('R', 'r');
//							cout << "Он выглядит каким-то не полным, ну и ладно.";
//							metik.carma++;
//							trig[3] = 0;
//						}
//						else {
//							SetCursorPosition(1, 30);
//							cout << "Это стол.";
//							skip('R', 'r');
//						}
//					}
//					SetCursorPosition(1, 30);
//					skip('R', 'r');
//					cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                
//                                                                                                                                       )";
//					metik.ivent[3] = 0;
//
//				}
//			}
//			if ((y > 13)) {//угол, дверь, шкаф
//				if ((x < 2) && trig[4]) {
//					SetCursorPosition(1, 30);
//					cout << R"(Это угол...)";
//					skip('R', 'r');
//					cout << R"(Просто угол, который навивает вам въетнамские флшбэки о вашем детстве.)";
//					skip('R', 'r');
//					SetCursorPosition(1, 31);
//					cout << R"(Тут вы стояли и за сломаную дверь, и за плохое поведение, и за первую сигарету.)";
//					skip('R', 'r');
//					cout << R"(С кем не бывает?)";
//					skip('R', 'r');
//					SetCursorPosition(1, 30);
//					trig[4] = 0;
//					metik.carma++;
//					cout << R"(                                                                                     
//                                                                                                                            )";
//				}
//				if ((x > 15) && (x < 30)) {
//					SetCursorPosition(1, 30);
//					cout << R"(Дверь.)";
//					skip('R', 'r');
//					cout << R"(За ней скрывается злой и жестокий внешний мир.)";
//					skip('R', 'r');
//					if (metik.ivent[2]) {
//						cout << "Но все же ты чувствуешь себя не очень, ведь в одних трусах идти не круто.";
//						skip('R', 'r');
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                 )";
//					}
//					else {
//						cout << "Так не хочется уходить, надо подумать, стоит ли?";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "На двери весит металический дорожный знак, почему именно на двери? Догадок нет но он тут.";
//						SetCursorPosition(1, 30);
//						skip('R', 'r');
//						cout << R"(                                                                                                                                
//                                                                                                                            )";
//
//						SetCursorPosition(1, 30);
//						cout << R"(Ну все, не думаем о знаках, думаем о том, что более важно. Что ты выберешь?)";
//						SetCursorPosition(1, 31);
//						cout << "Выйти - 1";
//						SetCursorPosition(1, 32);
//						cout << "Остаться - 2";
//						SetCursorPosition(1, 33);
//						int a;
//						cin >> a;
//						if (a == 1) {
//							SetCursorPosition(1, 30);
//							cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                 
//                                                             )";
//							SetCursorPosition(1, 30);
//							cout << "Дверь открылась, назад пути нет.";
//							skip('R', 'r');
//							metik.lose = 0;
//							key = 0;
//						}
//						else {
//							trig[7] = 1;
//							SetCursorPosition(1, 30);
//							cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                 
//                                                             )";
//							SetCursorPosition(1, 30);
//							cout << "Что-то забыл, посмотри еще.";
//							SetCursorPosition(1, 31);
//							cout << "Ты решил более тчательно осмотреться.";
//							skip('R', 'r');
//							SetCursorPosition(1, 30);
//							cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                  
//                                                                   )";
//						}
//
//					}
//				}
//				if ((x > 29)) {
//					if (trig[5]) {
//						SetCursorPosition(1, 30);
//						cout << "Огромный советсий шкаф, в котором лежит куча разной всячины помимо одежды.";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "Ты берешь свой любимый худи, стилевые джинсы и куртку.";
//						skip('R', 'r');
//						cout << " Выглядишь шикарно, как и всегда.";
//						SetCursorPosition(1, 32);
//						cout << "На полке лежало 5 рублей...";
//						skip('R', 'r');
//						cout << "Неплохой бонус ваших поисков.";
//						skip('R', 'r');
//						cout << "Вроде все.";
//						SetCursorPosition(1, 33);
//						cout << "Ты закрывешь шкаф, не желая рыться в нем.";
//						metik.carma++;
//						metik.ivent[2] = 0;
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << "Вновь этот старый шкаф.";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "Вы осматриваете его тчательнее";
//						skip('R', 'r');
//						SetCursorPosition(1, 32);
//						cout << "Как неожиданно, вы ничего не нашли";
//					}
//					SetCursorPosition(1, 30);
//					skip('R', 'r');
//					cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                    
//                                                                                                                                       
//                                                                                                                             )";
//					trig[5] = 0;
//
//				}
//			}
//			//зеркало
//			if ((y > 8) && (y < 13) && (x > 55)) {
//				if (trig[6]) {
//					SetCursorPosition(1, 30);
//					cout << "Зекало, в нем ТЫ.";
//					skip('R', 'r');
//					SetCursorPosition(1, 31);
//					cout << "Волосы растрепаны, но сейчас это называется стильной прической.";
//					metik.carma++;
//				}
//				else {
//					SetCursorPosition(1, 30);
//					cout << "Зеркало, в нем вы.";
//				}
//				SetCursorPosition(1, 30);
//				skip('R', 'r');
//				cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                    
//                                                                                                                                       
//                                                                                                                             )";
//				trig[6] = 0;
//			}
//		}
//
//
//		Sleep(50);
//
//	}
//	system("color 0F");
//	system("cls");
//}
//void Step2(player& metik) {
//	cout << R"(
// ------                .  .                                                                             ***    *******                 
//      -`       -.,_   _   '           - .,_                                               __,... -.__  **  ******     *****            
//                   `'--   `                ``'/--..,_                           .----''```_          `'-    *****         ***  *       
//                          -     - ..,__              `''-- .,_                  .          ```''' ---  ******  ****          ****      
//                          -            ``/'--- ..,_           ``'/--..,_        `  .--------------.-   *   ***  *  **          ****    
//-.,_                      _        .--__            ``''-- ..,\_      ,.`''-- .,`  .              .    **   *** *  **           ****   
//    `'-.                          _   --                        ``'/\-- ..,__   _``-._            .    ***    ***    ***        *  *   
//       .      . -.,_              ` --      ........,,,,,,______    ---     -``''--   `'-._ ' -   . ******************* ***     *  *** 
//       `      .    .`'-.         -                                 `````````'''''/''     - `'-._  . *** *  *****   * *'  `****  *   ***
//       -      .    .   .   _     .   --      ..........,,,,,,______         .  _                `''   .***   **** ** **   **  ***   * *
//              .    .   .   _     .                                    `````````_'' -, -, -_        -  `  **  *   **  **   _***  *   *  
//              ------   .   -     .        --      .........,,,,,,______     .  -     `-.'-_-_             ****   * * **   *   **    *  
//      _       .    .   .   -     .                -----._--              `````````'''    '-'.-_   -  _      ******  ***  **    *****  
//      -       .    .   .   `     .         \/     .------'-.         \\     .  '-._         ``--_           ** **   ******       *   
//      `       '    '_,.'-  .     .      ,-\\    .`         '          --,   .-._   '-._     -  -`-          *********,*              
//      '       --''`        .     '  \.-`'     .'                        ''. . `''-._   '-._-    _    `       *       '            
//    ,.-                   \'-    _-''       ,'`            ._             ``'_    `''-._   '-._ -   _                ` .           
//-/\`                  \ /\    \-\\        _-'              . _               --,      `-'-._   '-._ -         __,... - `           
//                 _.-,'     .-``          --                ---                 '',        '-'-._   ''---'''``                       
//            \.-'`      _.'\            -``                                       `'.          '-'-._                _   _          
//        \ /\        \-\\             .`'                    .-_                     `-_          `'-'-._            -   ,          
//   _.-,'         \-\`              .'-                      .  _                      '-_            `' '-._        '     '          
//-'`           .-`\               _'.`                       .  '                        ''.              `-.'-._              
//          _-'`                  -_'                         .   _                         `'-                '-.'-._            
//        -\                    -`-                           '----                            `-                  '- '-       
//
//)";
//	skip('R', 'r');
//	SetCursorPosition(50, 30);
//	cout << "А погода и вправду не плоха...";
//	skip('R', 'r');
//	StopMusic();
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/boss.mp3");
//	SetCursorPosition(50, 30);
//	cout << "? >Эй!                                  ";
//	skip('R', 'r');
//	system("cls");
//	cout << R"(
//             :::      #############        :::::::::                                             
//           :::  #######  #### ################  ::::::                                           
//        ::::   #####  ################## #### :::::::                                            
//       ::::    #    ii    ###     ###      ##  :::::::                                           
//     :::::    ##iiiii                       ##    :::::                                          
//     :::: ##### iii      #             #      ###### :::                                         
//      ::  #   # iii### ###       #######      #    # : ::                                        
//      ::  ##  # i i  ####          #####      #ii  # :  :                                        
//      :::  #  #ii i   ##             ##        #ii # :  :                                        
//       ::  #  #ii ii         #       ##        #ii # : ::                                        
//       ::: ## #iii i       ###                 #   # : ::::                                      
//       : :: #:##iiiii       ###                # ##  :  : :: ::                                  
//    :: :  : :: # iiii                         ##     :   : :::::::                               
//   ::  : ::::  ##   ii  ############         ##   :::::   : :mmm:::                              
//   :   :::::    ####    #           #      #####   : ::   :mm   mm:::                            
//  :: :::::::::  ## ###### iiiii        #########    :::::::mmm   mm :::                          
//  :::: :     ###ii ii   ###   i    #######  i ###     :    : mmm  mm ::::                        
// ::: :: #####iii    iiiiiii##  ####       iiiiiiiii## :::   :: mm   m::::::::::                  
// :::::##  iii           iiiiii###########    iiiii   ####::  :: mm   mmmmmmm  ::                 
//::   ##  iiiii             iiiiiii########## iiiiiiiii  ## ::::: m         mm  :::::             
//:: ##  iiiiiii                iiiiiii  ###   iiii iiiiii  #   :::mmm        mmm  ::::            
//:: # iii  i i                          ##  iiiiiiiii  iii ## ::::: mm   ### xxmm   :::           
//:: # ii  iii                           ##  ii      iiiii i ##    m  mm### ###### m  :::          
//:: # i  iii                            ##  ii          iiii ##   mmm##         ##xmm  :::        
//:: ##iiiii                             ##  i               i ##  ###            #xxmm  ::::      
//:: # iii i                             # # i               ii ####              ##xxmm  :::      
//:::# ii ii         #i                  ### i                   #                 #xxxmm  ::::    
//:  # ii i          #ii                 ## i                   ii                ##xxxxmm  :: ::  
// : #iii i          # i                 ###ii     ##          iii              ### xxxx m    :::::
//   #i iii          #ii                 ### ii     ##        iiii             ## xxxx    mm   ::::
// ##ii ii           #ii                  ### i       #iiii ii  iii          ## m x         mmm:: :
//#iiiiiii          ##i i                  ## ii       #  iiiiiii iii      ###  mm           m::  :
//#iiiiii           ##iii                  ##  i        ##   ii  iiiii    ##      mm  mmmmmm:::::::
// #ii              ##ii                   ### i          ##  iiii     ### ::::::  mmmm   ::: :::  
// # i              #  i        #          # # ii          ###      #### :::    ::   mmmmm:::::    
// ##               #  i       ##          # #  i            #  #####   ::      :::::::   :: :     
//  ##             ## ii      ##           #ii iii           ####   :::::          ::::::::        
//   ##            # ii      #            ##iiii iii         #     :::               :::           
//::  #           ##ii      #             ### iii iiiii     ## :::::                               
//: : :##      ###         #              ##  iiiiii  ii    #:::::                                 
//:: :: ########  #                       ## iii  iiii  iii#::::                                   
// : :::#          ##                     ##   iiiiiiiiii i::::                                    
// : : :            ##    ########         #           ii  # :                                     
// :  ::              ####        ########## ###############  :                                    
//
//)";
//
//	SetCursorPosition(120, 30);
//	cout << "? >Подойди сюда.";
//	skip('R', 'r');
//	SetCursorPosition(120, 31);
//	cout << "Ты >Мужик, я опаздываю!";
//	skip('R', 'r');
//	SetCursorPosition(120, 32);
//	cout << "? >Давай давай.";
//	skip('R', 'r');
//	system("cls");
//	cout << R"(
//::::: mmmm mmmmmmmmmmmmmmmmmmmmmmmmmm        ::  ::::: ::       :::::::::::::::                                                         
//::::::mmmmmmmmmmm  m   mmmm mm    mmmmmmmm    :::   ::  :    ::::        ::::  ::::::::                                                 
//  ::mmmmm mmm mmmmmmmmmm mmmmmmm    mmmmmm     :::  ::  :  ::: ::::::::::: :::::::::::::::::                                            
// : :mmmmmm mmmmmmmm m  mm  mmmm m   m   mmm     ::: :: ::::    :      :::::       :::  :::          :::::                               
// ::mm mmmmmmmm    mmm       m    mmmm     mm    : :: ::::::    :   ::::       :::::   :      :::::::::::::::::                          
//::  mmmm###                        mm      #    :   :::: ::   :   ::        ::::::   :   ::::::::::::::::::::::::                       
//:  mm ##                                   ##   :  : ::::::   :  :::      ::::::    :   ::               ::: ::  ::                     
//:  mm #             #####            ###    #   :  : :: ::    :  :      ::::::     :             ####      :::::  ::                    
//   mmm#             #   ##ii       ### #    #   : :  :: :::   :         :::::::   :  #######     #  ### #  # ::::   ::                  
//::   mm#            ## # # ii      # # #    #   : : ::::: :   ::     ::: :::: :  :: #####   ######    # ####::  :::  :  :               
// :  mmm###  ##       ##  #  i      ##  #    #   ::: :: : ::    :: :::   :::   :  :   ######  #     ### ###### ::::::: :::               
// ::: mmm ####  i      ####iii   # i ####    #    : ::::   :    :::    ::::   :: : ######## ######### ##### ##  :  : :  ::               
// : ::: mmm   #  i         i     # i         #   :  :::    ::   : ::  ::::    ::::     ####  ########### # ##### ::  :  ::               
//  : ::: mmmm # i ii             ##ii       ##   :  : : ::  :  :    :  ::::   ::: ## ###      ## ##   # #####  ###::::  ::               
//   :  ::m mm # iiiii           ##iii      ##    :::  : :   :::    : :::: :  ::   ####  ##########            #  # ::  : :               
//    :  :::   # iiiii           iiiiii    ##    ::    : :   :    :::  ::  : :::  #### i                      ##  #    :  :               
//     : : ::  ## iiiiii        ####  ii   #    ::     ::: ::    : :  ::   :  :   # # ii## ##    ####         #  ##   :  ::               
//   :::::::::  ###   iiii  #####  ### i  ##    :      :::::    : :  :   ::   :     #ii  ###      ###  i      # ##  :::                   
// :::  :::::::: #####                   ###      :::           ::: ::   :    :    # ii ###      #### ii      ### :::::                   
//: :::::   :  ::### ###########      # ## #       :::::       : : ::  :: :  :: :  #iii              ii      # # ::::                     
// ::       : #### #####  ############     ####      ::::      : ::  ::  ::  : ::  #iiii    ##      iiii     #  : : :                     
//:    ####### ii      #######  ##            ###      ::::    ::  ::   ::  ::::   ##iiii              i    ## :  ::                      
// #####iiiiiiiii      i  ########  i iiiiiii   ###       :::  ::::    ::  ::::     ## iii ####           ###  :: ::                      
//##   ii iiiii         ii  ######  iii  ii       ##        :: ::    :::   ::::      #   ii#      #########    ::::::                     
//  iiiiiiiiii           ii  ####  i iiiiiii       ###       ::::   : :     :   ##### ### i   ##### # #######   :::: ::                   
//iiii  ii                ii  #### iiii iiii        # ###     ::: ::  :  :: :   ###     #######   iiii#########   :::::::                 
//iii  ii                 iiii  ##iiii iiii             #      :::   :   :  :  ### #######   ##  ii  i #  ######    :::::::               
//i  ii                   i  iii# iii ii i              ##      : :::   :      #####   ## ##i   iiiiiii  ####  ###     :::::              
//iiii                    ii   ii #iiii i                #       : ::::::       ## iiii  #  ii  ii ii ###     i  ####    ::::             
//       #                 i    iii ii  i                ##      ::: :::     ### iiiiii  ###  iii ii##        iiiiii####   ::             
//      i #                iii   ii  iiii                  #      :   ::    ##  i iii i    ###ii ii##ii        iiiiii  ##    :::          
//      ii# i               ii   i#  iii      #            ##        :     ##  iii         ##ii#ii# # i         iii ii   #    ::          
//     iii##i             i  ii iii# iiii     ###ii         #    ::  :    ##  iiii          # ii    #  i        i ii i  i##   :::         
//     ii # i            iii  iiiii## ii        ##iii       #    ::  :     # iiii           #  ii   #  i        iiiii   i ##  ::          
//     ii## ii        iiii    iiii  #  i          # iii     #    : : : ::  #  iii           #   i   #  ii         iiii ii  # :::          
//     ii#   i        i i      iiii ## i           #  iii   #    : ::: ::  #   ii            #  i   #   ii          ii ii # :: ::         
//     ii# iiii       ii       iiii ###ii         ## iiiiii #   :::  :  : #  iii             #   i  ##   i             ii # :  : :        
//    iii##  iiii     i         iii ### i        ## ii  ii  #   :::  :  : #  iiii     #      ##  ii ##  ii     #       ii # :  : :        
//   iii###   iiii    i         iii #   ii     ###iii    i  #   :::: :: ::##i  iii    ##     ##  ii  #         #       ii # :  :: :       
//    iii###   iii   ii         iii # iiii     # ii      ii  #  :: : ::  : #i ii  ii   #                       #       ii #  : :: :       
//    iii ###   ii   ii           i #ii  i    #  i    iiii ii#  :: ::::: : #iii   iii  #                       #       ii #  : : : :      
//     iii ##   iii  ii           i #iiii ii  #  ii  iiii  ii#  :: ::: : ::#iii    i   ##     ii       i      ##ii     i ##  : : ::::::   
//##   i ii ##   ii     ii        i## i iiiii #    ii    i i#   :: ::: ::: #i i    i    #     ii       i      #  ii    i ##  : : :: :     
// ####iiii ##    iii   iiii     ii#   i   iii#iiiiiiiiiii###   :::::   :: #iii         #     ii      i       #   i   ii  #  : :  ::      
//     # ii##    iiiii  i   i   ii #   iiii ii##         ## #   ::::::     # iii       ##     i       i      ##   ii iii  #   :::::       
//
//)";
//
//	skip('R', 'r');
//	system("cls");
//	cout << R"(
//             ::    ##############################     :                                                                                             
//         ::::  ###    ## ### ##  ####  #############  :                                                        ::::::::::::::::::::::              
//       ::: #########  ####  ## ########       #  #     ::                                                    :::::::::::::::::  ##  :: ::::        
//     :::  ##############  ### # ########    ### #   :::::                                                 ::::::  ::   #    ::   #####  :::        
//   :::    ########    ########### ####  ##########   :                                                  ::::  ##   :   ############  ### :::       
//  :::    ## #####     ##              #####      ##  ::                                                :::: ### ######    ##         #  ##:::      
//  ::  ##### ###  ######                           #  ::::                                              :::  #  ###############  #### ##### ::::    
//  : : #   #  iii                                  #   ::::                                           ::: :#####  ##    #### #######  ##    :::::   
//  : :##   # iiii  ##########     ########         ##   :::                                         :::: :  #######                       #  :::::  
//    :##   #   i        #         i ### i         ## ##  :                                          :  ::: ##      #####      ######      ##  ::::: 
//::::: ##  # ii i     ####        ii###ii        ##   # ::                                          :  :::####   ###               ##    #  ##::  : 
// :: :: #  ##ii ii     ###         iiiiii        #   ##::                                           :::::##  #  i    #          #        #     ##:::
//  :: ::::# # i  ii         ##      iiii        ## ### ::                                            :::: ## ##ii  ####         ###      ##  ### : :
//   :: :::: # ii  ii         ###               # ###  ::                                             ::::::## #ii  ###           ##       # ##  :   
//     :: :: ## ii  i                         ## #    ::                                                 :::  ##ii                         # # ::: ::
//    ::::   ##  iiii   # ###########       ###     :::                                                  :::  ##ii         ###              ##::: :::
//     :::::  ####ii     ##         #       #     ::                                                     ::: #  iii                          #:::::::
//        :::    ###ii                     #    :::                                                      ::: #   iii                       ###  ::   
//           ::      i##                  ##  :::                                                      ::::: ##   iii  #######           ###:::::    
//             ::::     ###           ####   :                                                         ::: :: ####  ii  ii            #### ::::      
//             :::::::::: #############    :::                                                            ::::   #####   iiiiiiii   ###   ::::::     
//                      :::::::        :::::                                                                 ::::::   ####      #####  ::::::::      
//                    ::::::: ::::::::::::                                                                      :::::::::########   :::::            
//                        :::::::::::::::                                                                             ::::::::::: ::::               
//
//)";
//	SetCursorPosition(50, 30);
//	cout << R"(? >Парень, помоги рублем, мне на тралик надо.)";
//	skip('R', 'r');
//	SetCursorPosition(50, 30);
//	cout << R"(У тебя как раз он есть, ровно рубль. Стоит ли его давать?
//)";
//
//	if (metik.ivent[4] == 0) {
//
//		SetCursorPosition(50, 31);
//		cout << R"( Да(1)/Нет(2) )";
//		char a;
//		cin >> a;
//		SetCursorPosition(50, 30);
//		cout << R"(                                                              )";
//		SetCursorPosition(50, 31);
//		cout << R"(                                                              )";
//		if (a == '1') {
//			metik.ivent[4] = 1;
//			SetCursorPosition(50, 30);
//			cout << R"(Ты отдал рубль. Он выпал из рук мужика, ты замеялся.)";
//			skip('R', 'r');
//			SetCursorPosition(50, 31);
//			cout << R"(Ему это явно не понравилось, он движется в твою сторону...)";
//		}
//		else {
//			SetCursorPosition(40, 30);
//			cout << R"(Ты сказал ему, что у тебя самого нет денег, он уверенно двигаетя в твою сторону.)";
//			metik.carma++;
//		}
//	}
//	else {
//		SetCursorPosition(50, 30);
//		cout << R"(После просмотра карманов рубля у вас не нашлось.)";
//		skip('R', 'r');
//		SetCursorPosition(50, 31);
//		cout << R"(Больше аать вы не хотите, вы ему отказали, он приблежается к вам...)";
//	}
//	skip('R', 'r');
//	system("cls");
//	StopMusic();
//}
//void clearscreen() {
//	SetCursorPosition(0, 0);
//	cout << R"(
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//                                                                                                       
//
//)";
//
//}
//int fightmenu(int& hp, int& hb, string& healthboss, string& healthplayer, int& agro, player& metik) {
//	SetCursorPosition(2, 40);
//	cout << "===================";
//	SetCursorPosition(2, 42);
//	cout << "===================";
//	int meaning = 0;
//	for (int x = 2;;) {
//		if ((GetAsyncKeyState('A') & 0x8000) && (x > 5)) {
//			SetCursorPosition(x, 40);
//			cout << "                   ";
//			SetCursorPosition(x, 42);
//			cout << "                   ";
//
//			x -= 23;
//			SetCursorPosition(x, 40);
//			cout << "===================";
//			SetCursorPosition(x, 42);
//			cout << "===================";
//			Sleep(200);
//			meaning--;
//
//		}
//		if ((GetAsyncKeyState('D') & 0x8000) && (x < 70)) {
//			SetCursorPosition(x, 40);
//			cout << "                   ";
//			SetCursorPosition(x, 42);
//			cout << "                   ";
//
//			x += 23;
//			SetCursorPosition(x, 40);
//			cout << "===================";
//			SetCursorPosition(x, 42);
//			cout << "===================";
//			Sleep(200);
//			meaning++;
//
//		}
//		if (GetAsyncKeyState('E') & 0x8000) {
//			SetCursorPosition(x, 40);
//			cout << "                   ";
//			SetCursorPosition(x, 42);
//			cout << "                   ";
//			break;
//
//		}
//	}
//
//	switch (meaning) {
//	case 0:
//		SetCursorPosition(2, 36);
//		cout << "Ты ударил его, он разозлился...                                            ";
//		hb--;
//		healthboss[hb] = ' ';
//		SetCursorPosition(8, 34);
//		cout << healthboss;
//		agro++;
//		skip('R', 'r');
//		break;
//	case 1:
//		SetCursorPosition(0, 0);
//		cout << R"(
//                                                                                               
//   +----------------------------------------------------------------------------------------------+
//   |                                                                                              |
//   |  +-------------------------+                                    +-------------------------+  |
//   |  |                         |   +---+                     +---+  |                         |  |
//   |  |        Обозвать         |   |   |                     |   |  |       Посмеяться        |  |
//   |  |                         |   +---+                     +---+  |                         |  |
//   |  +-------------------------+                                    +-------------------------+  |
//   |                                                                                              |
//   |  +-------------------------+                                    +-------------------------+  |
//   |  |                         |   +---+                     +---+  |                         |  |
//   |  |    Позвать на помощь    |   |   |                     |   |  |         Убедить         |  |
//   |  |                         |   +---+                     +---+  |                         |  |
//   |  +-------------------------+                                    +-------------------------+  |
//   |                                                                                              |
//   |  +-------------------------+                                    +-------------------------+  |
//   |  |                         |   +---+                     +---+  |                         |  |
//   |  |        Заплакать        |   |   |                     |   |  |        Погавкать        |  |
//   |  |                         |   +---+                     +---+  |                         |  |
//   |  +-------------------------+                                    +-------------------------+  |
//   |                                                                                              |
//   |  +-------+  +---+                                                                            |
//   |  | Назад |  |   |                                                  Подтвердить ответ |S|     |
//   |  +-------+  +---+                                                                            |
//   +----------------------------------------------------------------------------------------------+
//)";
//		SetCursorPosition(38, 6);
//		cout << "#"; char key;
//		int sol;
//		for (int x = 1, x2 = 0;;) {
//
//			key = _getch();
//			if (key == 'D' || key == 'd') {
//				x2 = x;
//				++x;
//				if (x > 7) {
//					x = 1;
//				}
//
//
//
//
//			}
//			if (key == 'A' || key == 'a') {
//				x2 = x;
//				x--;
//				if (x < 1) {
//					x = 7;
//				}
//
//
//			}
//			if (key == 'S' || key == 's') {
//				break;
//			}
//			if (x2 < 4 && x2 >= 1) {
//				int j = x2 * 6;
//				SetCursorPosition(38, j);
//				cout << " ";
//			}
//			if (x2 >= 4 && x2 < 7) {
//				int j = (x2 - 3) * 6;
//				SetCursorPosition(64, j);
//				cout << " ";
//			}
//			if (x2 == 7) {
//				SetCursorPosition(19, 23);
//				cout << " ";
//			}
//
//			if (x < 4 && x >= 1) {
//				int j = x * 6;
//				SetCursorPosition(38, j);
//				cout << "#";
//			}
//			if (x >= 4 && x < 7) {
//				int j = (x - 3) * 6;
//				SetCursorPosition(64, j);
//				cout << "#";
//			}
//			if (x == 7) {
//				SetCursorPosition(19, 23);
//				cout << "#";
//			}
//			SetCursorPosition(0, 0);
//			sol = x;
//		}
//		clearscreen();
//
//		switch (sol) {
//		case 1:
//			SetCursorPosition(2, 4);
//			cout << "Ты говоришь мужику, что он очень плохой.";
//			skip('R', 'r');
//			SetCursorPosition(2, 6);
//			cout << "Он стал злее.";
//			agro += 3;
//			skip('R', 'r');
//			clearscreen();
//			break;
//		case 2:
//			SetCursorPosition(2, 4);
//			cout << "Ты пытаешься позвать кого-то на помощь...";
//			skip('R', 'r');
//			SetCursorPosition(2, 6);
//			cout << "...";
//			skip('R', 'r');
//			SetCursorPosition(2, 8);
//			cout << "...";
//			skip('R', 'r');
//			SetCursorPosition(2, 10);
//			cout << "...";
//			SetCursorPosition(2, 12);
//			cout << "Но никто не пришел...";
//			skip('R', 'r');
//			clearscreen();
//			break;
//		case 3:
//			SetCursorPosition(2, 4);
//			cout << "Ты сделал грустное лицо.";
//			skip('R', 'r');
//			SetCursorPosition(2, 6);
//			cout << "Мужик внемательно смотрит на тебя.";
//			skip('R', 'r');
//			SetCursorPosition(2, 8);
//			cout << "Ты начинаешь плакать, слезы падают на асфальт.";
//			skip('R', 'r');
//			SetCursorPosition(2, 10);
//			cout << "Мужик усмехнулся, но задумался.";
//			SetCursorPosition(2, 12);
//			cout << "Его взгляд стал менее тупым, видимо в нем еще осталось немного человечности.";
//			skip('R', 'r');
//			agro--;
//			clearscreen();
//			break;
//		case 4:
//			SetCursorPosition(2, 4);
//			cout << "Ты начал смеяться.";
//			skip('R', 'r');
//			SetCursorPosition(2, 6);
//			cout << "Мужик с недопонианием уставился на тебя.";
//			skip('R', 'r');
//			SetCursorPosition(2, 8);
//			cout << "ОН спросил, с чего ты смеешься.";
//			skip('R', 'r');
//			SetCursorPosition(2, 10);
//			cout << "Ты промолчал...";
//			SetCursorPosition(2, 12);
//			cout << "Ему это не понравилось...";
//			skip('R', 'r');
//			agro++;
//			clearscreen();
//			break;
//		case 5:
//			SetCursorPosition(2, 4);
//			cout << "Ты начинаешь ему говорить, что этот конфликт пустой.";
//			skip('R', 'r');
//			SetCursorPosition(2, 6);
//			cout << "Мужик слишком овощ, чтоб понимать тебя с твоими умными фразами.";
//			skip('R', 'r');
//			SetCursorPosition(2, 8);
//			cout << "Ты говоришь, что рамс без повода.";
//			skip('R', 'r');
//			SetCursorPosition(2, 10);
//			cout << "Он тебя понял...";
//			SetCursorPosition(2, 12);
//			cout << "По его лицу было понятно, что он сделал какие-то выводы...";
//			skip('R', 'r');
//			agro -= 3;
//			clearscreen();
//			break;
//		case 6:
//			SetCursorPosition(2, 4);
//			cout << "Ты начинаешь гавкать...";
//			skip('R', 'r');
//			SetCursorPosition(2, 6);
//			cout << "Мужик тоже гавкает...";
//			skip('R', 'r');
//			SetCursorPosition(2, 8);
//			cout << "Вы вместе гавкаете какую-то песню, гав-гав гав-гав...";
//			skip('R', 'r');
//			SetCursorPosition(2, 10);
//			cout << "Все собаки на раене загавкали с вами...";
//			SetCursorPosition(2, 12);
//			cout << "Все гавкают, ура!";
//			skip('R', 'r');
//			clearscreen();
//			break;
//		case 7:
//			SetCursorPosition(2, 4);
//			cout << "Времени нет...";
//			break;
//		}
//		break;
//
//	case 2:
//		SetCursorPosition(2, 36);
//		cout << "Ты в спешке шаришься по карманам...                                                           ";
//		skip('R', 'r');
//		if ((4 > rand() % 10) && (metik.ivent[0])) {
//			SetCursorPosition(2, 37);
//			cout << "Ты достал телефон. Мужик тебя толкнул, телефон выпал и разбился.                                 ";
//			metik.ivent[0] = 1;
//			skip('R', 'r');
//		}
//		else {
//			if ((4 > rand() % 10) && (metik.ivent[4])) {
//				SetCursorPosition(2, 37);
//				cout << "Ты достал рубль и кинул его. Мужик немного успокоился.                                 ";
//				metik.ivent[4] = 1;
//				agro--;
//
//			}
//			else {
//				SetCursorPosition(2, 37);
//				cout << "Ты не успел что-либо достьть...                                                        ";
//			}
//			skip('R', 'r');
//		}
//		break;
//	case 3:
//		SetCursorPosition(2, 36);
//		cout << "Вы ничего не делаете.                                                             ";
//		skip('R', 'r');
//		break;
//	}
//	SetCursorPosition(2, 37);
//	cout << "                                                                                                    ";
//	SetCursorPosition(2, 36);
//	cout << "                                                                                                    ";
//	return 0;
//}
//void fight(player& metik) {
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/bossfightthem.mp3");
//	string healthboss = "|####################|", healthplayer = "|#####|";
//	int hb = 21, hp = 6;
//	SetCursorPosition(2, 36);
//	cout << "Мужик нападает, увернитесь от его ударов.";
//	SetCursorPosition(114, 36);
//	cout << "Управление |A| |D| |J| |L|";
//	SetCursorPosition(2, 34);
//	cout << "Босс: " << healthboss;
//	SetCursorPosition(2, 35);
//	cout << "Ты:   " << healthplayer;
//	SetCursorPosition(0, 38);
//	cout << R"(
// +-------------------+  +-------------------+  +-------------------+  +-------------------+ 
// |                   |  |                   |  |                   |  |                   | 
// |      Ударить      |  |     Действие      |  |     Предметы      |  |    Пропустить     | 
// |                   |  |                   |  |                   |  |                   | 
// +-------------------+  +-------------------+  +-------------------+  +-------------------+ 
//)";
//	for (int i = 114; i <= 155; i++) {
//		for (int j = 0; j < 34; j++) {
//			SetCursorPosition(i, j);
//			if (i < 116) {
//				cout << "#";
//			}
//			if (i > 153) {
//				cout << "#";
//			}
//			if ((j == 0) && (i < 155)) {
//				cout << "#";
//			}
//			if ((j == 33) && (i < 155)) {
//				cout << "#";
//			}
//		}
//	}
//	piano a1, a2, a3;
//	int result, agro = 20;
//	for (; agro > 0 && hp > 1 && hb > 1;) {
//
//		result = pianogame(a1, a2, 5, agro);
//		if (!result) {
//			SetCursorPosition(2, 36);
//			cout << "Мужик попал по тебе, что бедете делать?              ";
//			hp--;
//
//			healthplayer[hp] = ' ';
//
//			SetCursorPosition(8, 35);
//			cout << healthplayer;
//		}
//		else {
//
//			SetCursorPosition(2, 36);
//			cout << "Ты успешно увернулись от его ударов, что будете делать?                ";
//		}
//		fightmenu(hp, hb, healthboss, healthplayer, agro, metik);
//		SetCursorPosition(2, 33);
//		cout << "Агрессия: " << agro << "     ";
//
//	}
//	skip('R', 'r');
//
//	if (hb < 2) {
//		metik.boss = 2;
//	}
//	if (hp < 2) {
//		metik.boss = 1;
//	}
//	if (agro < 1) {
//		metik.boss = 3;
//	}
//	StopMusic();
//}
//void Step3(player& metik) {
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/home.mp3");
//	switch (metik.boss) {
//	case 1:
//		SetCursorPosition(2, 36);
//		cout << "Tы были избиты мужиком, лицо в крови. Мужик испугался и убежал...              ";
//		skip('R', 'r');
//		system("cls");
//		metik.lose = 1;
//		return;
//	case 2:
//		SetCursorPosition(2, 36);
//		cout << "Мужик встелен твоими мускулистыми руками, он что-то бормочет под нос, но ты не можешь разобрать его слов...";
//		skip('R', 'r');
//		metik.carma++;
//		system("cls");
//		break;
//	case 3:
//		SetCursorPosition(2, 36);
//		cout << "Мужик пожал тебе руку, извинился и ушел в закат...              ";
//		skip('R', 'r');
//		system("cls");
//		break;
//	}
//	cout << R"(
//                .-----------------------------                                                                                     ..                      
//                ..----.----------------------. .                                                                           .............                   
//                .. .  .           .... ' : . . .                                                                      ......   ........ ...                
//                .`..  .   xxxxxx   ... ''::. . `                                                                .  ..... ....................              
//                ....  .   x         .. '' :' . -                                               m              .............   ..................           
//                .. . .    xxxxx  xxxx  ' ::` `  -  ...,\__   ----------------_,,...  -   iii mmmmmm        .........   ::::::::::::::::::  .......         
//                .. . ..   x   x  x  x '' : - `----------__```'''-----...,,__---------;-iiiii mmmmmm       .......    :::::::: :::::: :::::::.. ....        
//                . ... .   xxxxx  xxxx '  : _ `--- '''```   --------------    ``''/ -;; iiii mm         ....  ..   :::::mmmm mmm  :::mmmmm:::::.. ....      
//                .....  ..        x    '' ::  --    -------.   -----------  ... ::   ; iii i mm        .... ..  ::::  mm mmmmmmmmmmmmmmmm mm :: ......      
//                ....    ..            ' :::  --    _::::: .    ,::::::: .   .. :: ;;;iiiii mmm       .......  ::mmmm mmmmmmmmmm  mmmmmmmmmmmm :: ::: .     
//                .-......... xxxxx   . '':::  _.    ` :::: .    `  ::::: .  ..  : ;;; ii ii  mmm     ...... mmmmmmmmmmmmmmmmmmmmmmmmm       mmm :::::: .    
//                .. ..   ....x      ... '::_   .   --------'     '-------'  .  :::;;;iii i   m m     .... mm:mmmmmmm mm   mm mmm     mmm   mmmmmmmm :: ...  
//                '..... .    x     ....'': _   `.   ------_-     . -----.   .  : :;; i iiii  m mmm   ...  m::mmmmmmmmmmmm  mmmmmm  mmmmmmm  mmm mmm::: . .  
//                -'.. ...    x     ... ' : -   `.    `:::::-     ` :::::   .. :: :;; i  i ii mm mm   ...  ::  ##m:  mmm  mmmmmmmmmm  mm mmmmm mmmm ::...  ..
//                .` .  .     x    ... '' : -   _.   _:::::::-   _ :::::::- .  :  : ; ii  ii   mmm m  . . :: ###::::   mmm    :::  m mm mm   m  ## :::.......
//   ...  ..      '` ...           ... '' ::,    .   `------- -  `--------' .. :: : ;;; ii iii  mm m  . . :  ## :     mm   ..:: :   mm            ## ::..  ..
//    ..... ..    -- ...    xxxxx  ... '''::' __ .                          ..  ::::  ;;; iiiii  mmm  ...::  ## :  ##mm### ..:: - ######## :: ##  ##  : .  ..
//     ..... .    __ ..       x    ... ' '::: __ .   .-------    .------.    ..... ::    ;;ii ii  mm  ...::  ##  :  ##  ## .  ::::##  ##   :  ##  ### : .. ..
//   .. ........ _  ...       x     .  '''::: _- .   ` ::::.     `::::::`     ....  ::::  ;;i ii  m   ..  :   ## : ::####  ..... : ####    : ### #### : :... 
// .....  ... .. -  ...       x     .. '''::: -, .    :::::.      ::::::       ...     :: ;;i i   mm  ... ::  ## ::::      ......:::     ::: ##### ##: ::::. 
//.. .. :::.......  . .       x     ...'' : : -. .  - :::::.    --------        .. .  ::: ; i i m m  .. .  :  ###:: ::::       .... :::::::: ### ##::: ::::..
// ...   :::..   __ ...              .. '' :: `' .  '------'    '      '        .. . : ::;; i i mm  ..  . ::: ### :  :   #       _   :::::  #####::::  :.. ..
//  .::::::::::  -_ ...      x  x     .  '  : `` .                             .. .  : : ; i i  m   ..  .: ::  ## :::: . #####   _ ::::::  ####::::::::.. ...
// :::::::::: :  `- ...      x  x    ..  '' :::- .  .------    . -------.      . .  :: :;;ii i  m   ..  .: : ::###::: ..         _::::    ##  ::::: : ..  ...
//   - ..,:::::  '- . .      xxxx    .    ' : :  .  .::::::_   - :::::: .      ...   : :;; i iim   ... . : :::::### ::..     ### ::::    ### ::: ::: ...  .. 
//         ``''-- ,  ..         x  ..   ''' :::  .  .::::::'    _:::::::.       ..    : ;;;i  im   ....  ::::::  ### ::..#####  ::     ####  :: ::: ...  .   
//------- .-------'  .       xxxx   .  '''' ::_  .  . ::::: _   - .,_   .$       ..   :: ;;;i imm  ..  ::::   #######          :::  #####  #::::::: . .      
// -._\-  .      .   .             '''''' ::: -  '  --------'   $    `'-.$      $$.. :::: ;;i imm .   :::::: ##     ##################      ##::::  . .      
// -\\'-  .      .- ..,,__        ''::::::  : `  _--   ......,,,$$__    $$      $$ .  ::: ;;i imm.. ::::::   ##  ###  ###  #     .#   #       ##:::: ..      
//  - ..,\_      '--------``'/----..,,__----- ' -       $$     $$$    ``$$$'''''$$ --::::;;iiii m. ::  ##################        .##   ######### ::::...     
//         ``'' --                      ``'/ ---       $$$$$   $$$$    $$$$$    $$$            ..  :: ##        # ##### ####     ' ###   #########::::....   
//------------.............,,,,_,,,,_________                 $$$$$$           $$$$$          ..   :: #          # ## #     ########     ### ##  ## :::.. .. 
//     --      \.-      -.,_        __..--.,_    ````,.-`,`````'''''\''/'''' __ -------\----  .   ::: #          #  ## ##       ##      ######    ## :::..  .
//---- .,__ -,'............,`'---/'`_________`'---/\`     `-._  \.-` `-_   .'  `-_ \-\\  -_  ..  :::: ##          #######      ##-      ### #      # ::::    
//         `''--                                 `````````````-\'''''''/`-`'    -\\---------     ::::: #           #  ###     ## _      ####                 
//
//)";
//	SetCursorPosition(2, 36);
//	cout << "Ты пришел в университет... Людей мало, видимо пара уже началась.              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 37);
//	cout << "Надо спешить внутрь...              ";
//	skip('R', 'r');
//	system("cls");
//	cout << R"(
//                                  _______,,,,,,,.........       --
//---------   ''''''''''``````````                                  
//                 vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv  
//        __,.. -. v------------------------------v  --------------------------
// --/''`` :::   ' v.                 .          .v    :::::::             ..... 
// . ::   :: :   ` v'  .----------.   `  mm mmm  `vv.. ::::::::: :::::::::::::.. 
// .-::--::-:::  _ v`  `          `   -   mmm m    v.  ::   :__:':::-'::`   :::..
// ' :-:-:::-+:    v-  `          _       m m m   _v.. -:::`:  :     ::::: ::  ..
// ` :-::::--:: _  v-  -  +---+          mm mmm   -v ..  :::::::   :::: :  :   ..
// - ::::::--:: -  v_  _  |210|    _   _ mm mmm   .v  ..  :::: : :::: ::  :    ..
// _ :-::+::-:: -  v      +---+ ;; -   - mmmm mm  `v   .  :: : ::::  :   :     ..
//   :-::+::::: .  v       ::: ;;; -   ,  mmm  m   vv  .. :: ::::  ::_,,::. :-...
//   :  :  :::: '  v      ::::;;;; .qr .   mmm m   _v   ..: :::```:  :::::::: ...
//_  -::::- ::: `  v _  _ :::;;;;i '   '   mmm mm  -v    . ::::   :::::::  :  ...
//- ::::::::::: _  v _  _:::;;;;ii -   `   mm mmm  .v    .  :::: :::::::: :  ... 
//- :.::::::: ::   v _  -::;;; iii     _   mmmmmm  'v   .. :: : ::::  :::::: ... 
//` : ::::::::::   v -  - ;;; iiiii        m mm m  -v   ..::  :: :   : ::::  ... 
//' ::-:::::::--   v -  ` ;;;;iiiii _   _  m mm m   vv   .:  :       :: :  ....  
//   :: ::  :  -   v `  .;;iiiiiiii -   _  mm mmmm  _v   ........      :   ..    
//- ..,::::::  '   v .  . iiiiiiiii .   -   mmmmmm  ,v          ........        
//       :`:: --   v .  '-----------'   .           'v  ----------------..-----
//                 vv'                  '  _______,,,,,,,,...........       ---
// ----------    '''''''''''```````````    _______,,,,,,,,...........       ---
// ----------    '''''''''''```````````                                        
//)";
//	SetCursorPosition(2, 36);
//	cout << "Страшно заходить, вдруг в деканат отправят...              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 37);
//	cout << "Ладно была не была...              ";
//	skip('R', 'r');
//	system("cls");
//	SetCursorPosition(2, 10);
//	cout << "Пара шла довольно тихо, но под конец преподователь сделала неожиданное заявление: сдаем конспекты на проверку...              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 12);
//	cout << "Ты залазишь в свой блатной портфель в поисках тетради.              ";
//	skip('R', 'r');
//	if (metik.ivent[1] == 0) {
//		SetCursorPosition(2, 14);
//		cout << "Та самая тетрадь, которая лежала на окне оказалась тетрадью по ОАИПу, в такие моменты приходит осознание, насколько ты фартовый.              ";
//		skip('R', 'r');
//		SetCursorPosition(2, 16);
//		cout << "В конце пары ты отдаешь свою тетрадь на проверку и идешь на пару по инглишу, по которой сегодня вы будете писать слова.              ";
//		skip('R', 'r');
//		metik.carma++;
//	}
//	else {
//		SetCursorPosition(2, 14);
//		cout << "Тетради нет... Грустно, ведь на твоей памяти конспект там имелся.              ";
//		skip('R', 'r');
//		SetCursorPosition(2, 16);
//		cout << "В конце пары ты просто ушел на английский...              ";
//		skip('R', 'r');
//	}
//	system("cls");
//}
//void examwords(int& solution, string str, int num) {
//	switch (num) {
//	case 0:
//		if (str == "analog") {
//			solution++;
//		}
//		break;
//	case 1:
//		if (str == "pressure") {
//			solution++;
//		}
//		break;
//	case 2:
//		if (str == "switch") {
//			solution++;
//		}
//		break;
//	case 3:
//		if (str == "vehicle") {
//			solution++;
//		}
//		break;
//	case 4:
//		if (str == "adjust") {
//			solution++;
//		}
//		break;
//	case 5:
//		if (str == "state") {
//			solution++;
//		}
//		break;
//	case 6:
//		if (str == "rotation") {
//			solution++;
//		}
//		break;
//
//	}
//
//}
//void EnglishLesson(player& metik) {
//	cout << R"(
//        ......                                        __________,,,,,,,,,,..............       .. ---. -_                    _     
//   ......----... .. '''''''''''''''```````````````                                            ..    ..   `-_                 `     
//      ....... _-..'..                                                                        ...    ..      `- ------------.-      
//    ...     ,-  .'-`...   +------------+[+--------------------------------+]+------------+   . .    ''       .      .-.    `.vvvv  
//  ...     .'    .`   ..   |::::::::....|[|                     March,05,25|]|::::::::::..|   . .    ``       .    ,... `   ``v|\vv 
//       _-`      '__:: ..  | ::::.....  |[| Nikita went for a wolk with    |]|:::::::.... |    ..    -`       .   _:::.. `  -`v||\vv
//     ,-         `-- : ... |::::....    |[| his girlfriend.                |]|:::::.....  |    ..    _-       .   -:::... - _-v|||\v
//   .'           `.. ::. . |:::....     |[|                                |]|::::.....   |    ...    -       .   .:::... .  _v||||v
// -`             -'`  :... |:::...      |[| Jony made dumplings.           |]|::.......   |    . .    _       .   `::::...`   v||||v
//                --   : ...|::....      |[|                                |]|:.......    |   .. .    _       .     :::.._   _v||||v
//                __ ::::   |::..        |[| Zelevich didn`t show up for    |]|.......     |   .. .  _         '    `,::: `   _vv|||v
//                _- :: :   |::.         |[| the Basics of Programming      |]|.....    ...|   ....  _       .'       /-'     -v|r||v
//                -. :: ::  |:..         |[| class.                         |]|. ..     .. |    ..   -  _  _` ,'....          -v||||v
//                .` : : :  +------------+[+--------------------------------+]+------------+    ..   -   -. -.      .....     .v||||v
//                '   : :: ......                                                                .   ,_-` .  .    ..........  .v||||v
//                _   :  ::::   ..                                                          .......  '_   .  .                'v||||v
//               _-   :     :::::..    .   .-----------------------------------     ...     . ... ... -   .  .  ---------------v||||v
//               _.    :::::::::: ....    _/   _------                       _/        .... ..      ..-   .  '-` ;;     ;;;;;  '-|||v
//               -`        :::::::        /   - --  -                        |            ..........  -   '    ;;;; ::;;;;;;;;  \_||v
//               - -  ...,,\__   _,..-   /   - -----                        _/- ..,\                  `  ,     ;;;.......;  ;;   \||v
//               -   -  ..,,__''``''' ---====================================|- .\___`''--__,,....  - .-\    ;;; ..  ;;::..::;;   \|v
//               `  --'``     ```'''---    ||  || iiiiiii:::::::........||  ||----''''```---.\___-----'    ;;;  ..   ;  ;:.;;; ;    v
//               .                         || iiiiii:::::::::........   ||      ..........       ``''--   ;;;;;;.:::::::::.;;;;;;   .
//
//)";
//	SetCursorPosition(2, 30);
//	cout << "Ох уж этот инглиш, тебя спасает твоя феноменальная память.              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 32);
//	cout << "После некоторы прилюдий пришло время писать тест по словам.              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 34);
//	cout << "Всем раздали листы с русскими словами, нужно написать их перевод.              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 36);
//	cout << "Надеюсь ты все не позабывал.              ";
//	skip('R', 'r');
//	StopMusic();
//	system("cls");
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/englishtest.mp3");
//	cout << R"(
//  ===========::: ..         ............ ...    ................   ....................... ............          ..                         
// = =======  ::  ............................                                                  ....:    ........-_, ....                     
//= = ====::::   ....   ....                    ____,,,,......   -- --------------------------    ....::::::::   -\`-.   ...      --------    
//======:::::   ...   ....  ------ ''''''``````:::::::::::::::::::::::::::::::::::::::......- .     ......:::::::::...........  - - -   -     
//=====::  :   .... ...    . ` :+---------------------------+::+--------------------------+. _-      .......  :::.:::-::: -......_--  .  -    
//=====:  ::  ...  ...       `::|        Аналоговый         |::|                          |. ' _         .-------`- ::.::::'_::::`..---.. -   
//= ===: ::: ...    ..      _-::+---------------------------+::+--------------------------+...,-      .    - .....     _ ::  ....,..-._-....  
//= ==:  ::  ....    ..     ._:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::.....`'      `     -   - .... `......--\  _   `'-    
//=== :  ::  ........ ..    `_ ::+----------------------------+::+-------------------------+...-       `.    -  . ......_..........'......    
//=== :  :  ..... ........   _ ::|.         Давление          |::|                         |...`_      _-`    -.`. ....-    :::::::::.   ..   
//== :: ::  ... .. ::......  , ::+----------------------------+::+-------------------------+... -     -`  `....-...   -:::::  :::::     ......
//= ::  ::  .......  ::  ... ' ::::::::::::::::::::::::::::::::::::::.......................... '_     '.   -..--:::::    ::::       .......  
//= :  :::  ..  ..... :::     _ : +----------------------------+:.+-------------------------+.. -'.     .    ::'     :::::    ........        
//= : :: :  ..    ..    ::::  - ::|        Переключатель       |:.|                         |.   _'     .   ::::::::::     .......            
//= ::: :: ...      ......    ' `:+----------------------------+..+-------------------------+    --     ...           .......                 
//:::: ::  ...       ........ -- ::::::::::::::::::::::::::::::................                  '  ..................  ....                  
//:  : :  .. .         ....  ....::+---------------------------+  +-------------------------+    _   .    ...    ........                     
//:: ::: ...               .. _::.:|   Транспортное средство   |: |                         |    ,    .. :: .........  .....       
//:: :: .. .              ... ,::::+---------------------------+::+-------------------------+   ..     ..  ::::: ..............    
//::  ... .       .........   `, :::::::::::::::::::::::::::::::::::..........                  -`       ...    :::::::   .........   
//:: ... ..  ...... :::::::: _`` ::+---------------------------+..+-------------------------+    _      ...... ......  ::::::::    .. 
//:: .. ..  .. ::::::::: ..  ``..: |       Регулировать        |. |                         |   _.        .......   ...:::::::::::: ..:
//   .  ............. .....   -' _ +---------------------------+  +-------------------------+   -'     ......   ....:::      ........ 
//  ....      ............    _` ' :::::::::::..........                                        '      .       :::  ............ .    
//.....         ......... .   ._  :+---------------------------+  +-------------------------+     .   . ...::::   ..      ...      
//                ........    `  ::|         Состояние         |  |                         |     .   ... .........  ......       
//................            _  ::+---------------------------+  +-------------------------+     `   ...............             
// ...... ...    .....        -_::::::::::::::::......................                            -_   .. ......      .       
// ........ ..............    -, ::+---------------------------+. +-------------------------+      -    ...   ....  ......     
// ::::::::..::  ...........  '. ::|         Вращение          |. |                         |      '      .. :   ............     
// ..........  ::::::::: ....  ` ::+---------------------------+  +-------------------------+    _     ...... ::::  .... .....    
//  ....... ::::::::::: .....  ` ::::::::::::::::............                                    -         ....  ::::  .. ....  ...    
//      ......... :::::::::::  ._ :: - .,___,... -    _,. -   --   .....,,,,____                 `            ...    :::::  .........  
//           ...........       .,---'''``  `''-- -/'``                           `````'''''  -----               ........ :::::  .  ...
//..........................   ''      --''`                  ......                  ...............       ....... ........   :: .. . 
//  .. .... ........... .......      .....            .....................         .... :::....    ..  .....     .... ...  ..   :.. . 
//   .......:::::::::::____:___..// /.    ......   .... ...  .......  .......       ..  .. ::: ............   ::::  ... ...   .  : ....
//     .......:::...../...// :/.//_/          ... ........ ::::::::::::::   ...   ....    ...:::: .......   ::   :::........... :: ... 
//       ........::::/___//__/./../..................... :::: ..  ::::  ::::: . .............. ::::...... :::......::: .    :::: ....  
//         ....  .../ :::::   :::/..................::::::    .....   :::::   ..         :::::::::::.   :: ...... ....:::: :  ...... 
//        .....         ::::::::::  ........ ::::::::  ........ ...    .. ::     ::::::::    ..... ::::: ........   . :::::.....  .. 
//   ..........   ::::::     .....:::::::::::::::: ....   ....     ...   ..::::::     ......... :::::: .....   ..  ..:   ....   ..   
// .......    ::::  ..........   ....    :::    ...    .....      ...........       ...... ..:::::.........    .. ...: .....  ..     
// ... :::::::... ...  .................       .    ... ...................................:: ............   .... ........   ..  
//)";
//	int sol = 0;
//	cin.ignore();
//	for (int i = 0; i < 7; i++) {
//		string str;
//		SetCursorPosition(66, 6 + (i * 4));
//		getline(cin, str);
//		examwords(sol, str, i);
//		SetCursorPosition(100, 0);
//		cout << sol;
//	}
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/home.mp3");
//	StopMusic();
//	system("cls");
//	SetCursorPosition(2, 10);
//	cout << "Работа сдана.              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 12);
//	cout << "Как всегда ожидание худшая из пыток, да еще и работа атестационная...              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 14);
//	cout << "Следующая пара физра, а ты и так не выспался и отсидел.               ";
//	skip('R', 'r');
//	SetCursorPosition(2, 16);
//	cout << "Закрадывается желание после английского сразу пойти домой, звучит неплохо.               ";
//	skip('R', 'r');
//	SetCursorPosition(2, 18);
//	cout << "Ладно, потом об этом, да и плюс к этому проверили работы.              ";
//	skip('R', 'r');
//	SetCursorPosition(2, 20);
//	cout << "...Дубовик, Лютик не зачет, Довгун тоже...              ";
//	skip('R', 'r');
//	if (sol > 4) {
//		SetCursorPosition(2, 22);
//		cout << "...Павлючик, Ходынюк зачет...              ";
//		skip('R', 'r');
//		SetCursorPosition(2, 23);
//		cout << "Неплохо, это повод пойти домой.              ";
//		skip('R', 'r');
//		metik.carma++;
//	}
//	else {
//		SetCursorPosition(2, 22);
//		cout << "Павлючик зачет, Ходынюк езачет...              ";
//		skip('R', 'r');
//		SetCursorPosition(2, 23);
//		cout << "Грустно, на физру настроения идти нет, сразу домой.              ";
//		skip('R', 'r');
//	}
//	SetCursorPosition(2, 24);
//	cout << "После прощания со своими кентами ты пошел домой.              ";
//	skip('R', 'r');
//	system("cls");
//	SetCursorPosition(2, 10);
//	cout << "По приходу домой ты лег на кровать и сраз заснул...              ";
//	skip('R', 'r');
//	system("cls");
//	StopMusic();
//}
//void Corridor() {
//	system("color 01");
//	cout << R"(
//                                              
//    ________________________________________  
//    |\ ..... \ ,,,,,,,,||,,,,,,,, /  ..... /| 
//    | \  {).. \________||________/  ....../.| 
//    |. \ _____/-------------------\______/..| 
//    |...|     |         <===>     |     | . | 
//    | ..|     | u                 |     | . | 
//    |\_ |     \___________________/     | _/| 
//    | p\|      \_\            /_/       |/q | 
//    |   |                               |   | 
//    |   |                               |   | 
//    | _/|                               |\_ | 
//    |/. |                               | .\| 
//    | ..|                           ______::| 
//    |---|                          /| _   |:| 
//    |   |                         |~|{*}  |.| 
//    |E=)|                         | | ^   |.| 
//    |):)|                         | |  <=>|.| 
//    | ..|                          \|_____|.| 
//    |---|                               | . | 
//    |   |                               | _/| 
//    |   |                               |/q | 
//    |   |                               |   | 
//    |\_ |                               |   | 
//    | p\|                               |\_ | 
//    |   |                               | .\| 
//    | . |                               |.. | 
//    |._/|                               | . | 
//    |/..|_______________________________| ..| 
//    |  / ........  /     \  ........:::: \ .| 
//    | /........... |   r |......::::::::::\ | 
//    |/____________/_______\________________\| 
//
//)";
//}
//void Room1(player& metik) {
//	system("color 03");
//	int x = 30, y = 8;
//	cout << R"(
//################################_______________##################################
//###############################/_______/______/######=================###########
//# /  *   \ | {________} |\                         /   &           MM   \      ##
//# |  W   | |============|\                         |          +    UU   |      ##
//# \______/ |            |                          |  EE          -     |      ##
//#          |            |                          |  EE                |      ##
//#          |            |                          \____________________/      ##
//#          |            |\                           \\              \\        ##
//#          |____________|\                                                     ##
//#                                                                            /|##
//#                                                                           | |##
//#                                                                           | |##
//#                                                                           | |##
//#                                                                           |/ ##
//#                                                                              ##
//#                                                                              ##
//#                                                                              ##
//#                                                                              ##
//#                                    __________________________________________##
//#                                   /+      /+            /+          /+       ##
//#                                  |===========================================##
//#                   _________.     |:::::::::::::::::::::::::::::::::::::::::::##
//#                  /        /      |:::::::::::::::::::::::::::::::::::::::::::##
//##################/+       /#####################################################
//#################/________/######################################################
//)";
//	int px = x, py = y;
//	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
//
//		if ((GetAsyncKeyState('W') & 0x8000)) {
//			moveStep(x, y, 'W');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('A') & 0x8000)) {
//			moveStep(x, y, 'A');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('D') & 0x8000)) {
//			moveStep(x, y, 'D');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//
//		if ((GetAsyncKeyState('S') & 0x8000)) {
//			moveStep(x, y, 'S');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('E') & 0x8000)) {
//			if ((y < 12)) {//тумбочка, кровать, окно, стол
//				if ((x < 10)) {
//					if (trig[0]) {
//						SetCursorPosition(1, 30);
//						cout << R"(Это твоя тумбочка, на нее мрачно падает свет.)";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << R"(Такое чувство, как будто с ней что-то не так.)";
//						skip('R', 'r');
//						SetCursorPosition(1, 32);
//						cout << "На нем лежал \033[31mключ\033[36m.";
//						metik.dreamkey[7] = 1;
//						skip('R', 'r');
//						metik.carma++;
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << R"(Один взгляд на эту тумбочку тебя пугает.)";
//						skip('R', 'r');
//					}
//					SetCursorPosition(1, 30);
//					cout << R"(                                                                                     
//                                                                            
//                                                                                                                            )";
//				}
//				if ((x > 9) && (x < 28) && trig[1]) {
//					SetCursorPosition(1, 30);
//					cout << R"(Это кровать, после твоего пробуждения она выглядит небрежно.)";
//					skip('R', 'r');
//					SetCursorPosition(1, 31);
//					cout << R"(Лучи лунного света падают на нее, у тебя плохое ощущение.)";
//					skip('R', 'r');
//					SetCursorPosition(1, 30);
//					cout << R"(                                                                                                                                
//                                                                                                                            )";
//
//					SetCursorPosition(1, 30);
//					cout << R"(Такое ощущение, что под ней кто-то есть...)";
//					SetCursorPosition(1, 31);
//					cout << "Проверить - 1";
//					SetCursorPosition(1, 32);
//					cout << "Не проверять - 2";
//					SetCursorPosition(1, 33);
//					char a;
//					cin >> a;
//					if (a == '1') {
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                 
//                                                             )";
//						SetCursorPosition(1, 30);
//						cout << "Ты наклоняешься посмотреть что под ней...";
//						skip('R', 'r');
//						if (!metik.dreamkey[2]) {
//							SetCursorPosition(1, 31);
//							cout << "В самом углу лежит ключ.";
//							metik.dreamkey[2] = 1;
//						}
//						skip('R', 'r');
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                            )";
//
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                 
//                                                             )";
//						SetCursorPosition(1, 30);
//						cout << "Страх не дает тебе это сделать.";
//						SetCursorPosition(1, 31);
//						if (trig[4]) {
//							cout << "Ложиться на нее ты тоже не хочешь.";
//						}
//						else {
//							metik.carma++;
//							cout << "\033[31mС чего такая тревожность?\033[36m";
//						}
//						skip('R', 'r');
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                 
//                                                                                                                  
//                                                                   )";
//					}
//
//
//				}
//				if ((x > 27) && (x < 37)) {
//					if (trig[2]) {
//						SetCursorPosition(1, 30);
//						cout << "Окно...";
//						skip('R', 'r');
//						cout << "В нем глухая темнота. ";
//						skip('R', 'r');
//						cout << "Это очень странно.";
//						metik.carma++;
//						skip('R', 'r');
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << "\033[31mНе смотри туда.\033[36m";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						skip('R', 'r');
//					}
//					SetCursorPosition(1, 30);
//					cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                
//                                                                                                                                       )";
//					trig[2] = 0;
//				}
//				if ((x > 45)) {
//					if (trig[7]) {
//						SetCursorPosition(1, 30);
//						cout << "На столе есть какая-то надпись...";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "\033[31mБЕГИ...\033[36m";
//						if (!metik.dreamkey[3]) {
//							SetCursorPosition(1, 32);
//							cout << "Так же на столе лежал ключ.";
//							skip('R', 'r');
//							metik.dreamkey[3] = 1;
//						}
//						metik.carma++;
//						trig[7] = 0;
//					}
//					else {
//						if (trig[3]) {
//							SetCursorPosition(1, 30);
//							cout << "Стол.";
//							skip('R', 'r');
//							SetCursorPosition(1, 31);
//							cout << "Такое чувство, как будто бордак на нем должен выглядить не так.";
//							skip('R', 'r');
//							metik.carma++;
//							trig[3] = 0;
//						}
//						else {
//							SetCursorPosition(1, 30);
//							cout << "Это стол.";
//							skip('R', 'r');
//						}
//					}
//					SetCursorPosition(1, 30);
//					skip('R', 'r');
//					cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                
//                                                                                                                                       )";
//					metik.ivent[3] = 0;
//
//				}
//			}
//			if ((y > 15)) {//угол, дверь, шкаф
//				if ((x > 15) && (x < 30)) {
//					SetCursorPosition(1, 30);
//					cout << R"(Дверь.)";
//					skip('R', 'r');
//					cout << R"(Ты преоткрываешь ее.)";
//					skip('R', 'r');
//					cout << "   ...";
//					skip('R', 'r');
//					SetCursorPosition(1, 31);
//					cout << "Подул сквозняк.";
//					SetCursorPosition(1, 30);
//					skip('R', 'r');
//					cout << R"(                                                                                                                                
//                                                                                                                           )";
//					SetCursorPosition(1, 30);
//					cout << R"(Страх подкосил твои ноги.)";
//					SetCursorPosition(1, 31);
//					cout << "\033[31mВЫЙТИ - 1\033[36m";
//					SetCursorPosition(1, 32);
//					cout << "Остаться - 2";
//					SetCursorPosition(1, 33);
//					char a;
//					cin >> a;
//					if (a == '1') {
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                              
//                                                                                                                 
//                                                             )";
//						SetCursorPosition(1, 30);
//						cout << "Дверь открылась.";
//						skip('R', 'r');
//						key = 0;
//					}
//					else {
//						trig[7] = 1;
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                
//                                                                                                                 
//                                                             )";
//						SetCursorPosition(1, 30);
//						cout << "Пожалуй лучше остаться.";
//						SetCursorPosition(1, 31);
//						cout << "Страшно туда идти.";
//						skip('R', 'r');
//						SetCursorPosition(1, 30);
//						cout << R"(                                                                                                                                
//                                                                                                                                
//                                                                                                                  
//                                                                   )";
//					}
//
//
//				}
//				if ((x > 29)) {
//					if (trig[5]) {
//						SetCursorPosition(1, 30);
//						cout << "Шкаф.";
//						skip('R', 'r');
//						SetCursorPosition(1, 31);
//						cout << "Ты открыл его, внутри все обычно.";
//						skip('R', 'r');
//						metik.carma++;
//
//					}
//					else {
//						SetCursorPosition(1, 30);
//						cout << "\033[31mНе смотри туда.\033[36m";
//						skip('R', 'r');
//					}
//					SetCursorPosition(1, 30);
//					skip('R', 'r');
//					cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                    
//                                                                                                                                       
//                                                                                                                             )";
//					trig[5] = 0;
//
//				}
//			}
//			//зеркало
//			if ((y > 10) && (y < 15) && (x > 55)) {
//				if (trig[6]) {
//					SetCursorPosition(1, 30);
//					cout << "Зекало, в нем \033[31mТЫ И КАКАЯ-ТО ТЕНЬ\033[36m.";
//					skip('R', 'r');
//					SetCursorPosition(1, 31);
//					cout << "Ты обернулся, ничего сзади нет.";
//					metik.carma++;
//				}
//				else {
//					SetCursorPosition(1, 30);
//					cout << "Зеркало, в нем \033[31mВЫ.\033[36m";
//				}
//				SetCursorPosition(1, 30);
//				skip('R', 'r');
//				cout << R"(                                                                                                                                     
//                                                                                                                                            
//                                                                                                                                    
//                                                                                                                                       
//                                                                                                                             )";
//				trig[6] = 0;
//			}
//		}
//		Sleep(50);
//	}
//	system("cls");
//}
//void Room2(player& metik) {
//	system("color 02");
//	int x = 30, y = 9;
//	cout << R"(                                    
//   _________________________________
//   |\....... _________   .....    /|
//   |:\ ...   \___|___/   r....   / |
//   |:.\________________(___)____/  |
//   |:. |                 ~     | | |
//   |:. |  _                    |.v |
//   |:..| //|                   | _/|
//   |:..| |||__                 |/q |
//   |...| ||<__>                |   |
//   |::.|  \__/                 |   |
//   |::.|                       |\_ |
//   |:::|         _========__   | .\|
//   |:::|________//^^^^^^^^^\\__|...|
//   |::/:::     ((r__________))  \..|
//   |:/:::.      ~~~~~~~~~~~~~    \ |
//   |/_____________________________\|
//
//)";
//	int px = x, py = y;
//	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
//
//		if ((GetAsyncKeyState('W') & 0x8000)) {
//			moveStep(x, y, 'W');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('A') & 0x8000)) {
//			moveStep(x, y, 'A');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('D') & 0x8000)) {
//			moveStep(x, y, 'D');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//
//		if ((GetAsyncKeyState('S') & 0x8000)) {
//			moveStep(x, y, 'S');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('E') & 0x8000)) {
//			if ((y == 5)) {//окно, умывальник
//				if ((x >= 13) && (x <= 21)) {
//					if (trig[0]) {
//						SetCursorPosition(80, 2);
//						cout << "\033[31mОкно, в нем НИЧЕГО нет...\033[32m.";
//						skip('R', 'r');
//						metik.carma++;
//						trig[0] = 0;
//						SetCursorPosition(80, 2);
//						cout << "                                                                 ";
//					}
//					else {
//						SetCursorPosition(80, 2);
//						cout << "\033[31mОтвернись...\033[32m.";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						cout << "                                                                 ";
//					}
//				}
//				if ((x >= 23) && (x <= 27)) {
//					if (trig[1]) {
//						SetCursorPosition(80, 2);
//						cout << "Умывальник, на нем остались красные разводы.";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						if (!metik.dreamkey[1]) {
//							cout << "В нем лежал ключ, он похож на тот, что был на столе.";
//							skip('R', 'r');
//							metik.carma++;
//							metik.dreamkey[1] = 1;
//						}
//						trig[1] = 0;
//						SetCursorPosition(80, 2);
//						cout << "                                                                 ";
//					}
//					else {
//						SetCursorPosition(80, 2);
//						cout << "\033[31mВидимо это кровь\033[32m";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						cout << "                                                                 ";
//					}
//				}
//
//			}
//
//			if ((x == 30)) {
//				if ((y >= 8) && (y <= 11)) {
//					SetCursorPosition(80, 2);
//					cout << "\033[31mТы заходишь в комнату.\033[32m.";
//					skip('R', 'r');
//					system("cls");
//					return;
//				}
//			}
//			if ((y == 11) && (x >= 17) && (x <= 25)) {
//				SetCursorPosition(80, 2);
//				cout << "Обычная ванна.";
//				skip('R', 'r');
//				SetCursorPosition(80, 2);
//				cout << "                                                                 ";
//			}
//			if ((x >= 14) && (x <= 15) && (y >= 8) && (y <= 10)) {
//				SetCursorPosition(80, 2);
//				cout << "Облеванный унитаз.";
//				skip('R', 'r');
//				SetCursorPosition(80, 2);
//				cout << "                                                                 ";
//
//			}
//
//		}
//		Sleep(50);
//	}
//	system("cls");
//}
//void Room3(player& metik) {
//	system("color 08");
//
//	SetCursorPosition(0, 17);
//	cout << R"(
//                                        ▏▂▌            ▍▂▎                                          
//                                        ▆▄▏             ▂█▋                                         
//                                       ▍██▌             ▂█▃▏                                        
//                                      ▊███▋▏  ▏▍▍▍▍▎   ▏▄██▃▎                                       
//                                      ▄██▅▂▁▁▅█▇▄▋▅█▇▃▊▂▂███▍                                       
//                                      ▄████▅████▅▎▆███▇▇████▍                                       
//                                      ▏▃████▆▃███▅▅█▆▂████▆▋▏                                       
//                                        ▎▊███▇▂▉▄▇▉▉▄███▄▋                                          
//                                       ▏▋▅███████▅███████▁▎                                         
//                                    ▍▉▃▇████▅▆██▇▊███▄█████▄▉▋▏                                     
//                         ▉▋  ▌▃▎▌▊▂▆████████████▆▃███████████▆▃▂▊▋▎▏▏▏   ▎▋                         
//                       ▉▊▄▆▃▉▇█▃▊▃█████▇███████████████████████▃▉▂▂▄█▃▉▍▊▅▅▍                        
//                     ▍▂█████▆████████▇▁▉████████▇▆████████▆▉▆██████▇█▆█████▄▌                       
//                   ▎▂████████████████▁▂██████████▇█████████▇▊▆███████████████▄▍                     
//                 ▏▊▇█████████████████▇████▆▆███████████▆█████▅█████████████████▁▏                   
//                 ▂██████████████████████████████████████████████████████████████▂                   
//                ▂████████████████████████████████████████████████████████████████▉                  
//               ▁█████████████████████████▇▆████████████▇▄█████████████████████████▉                 
//               ▁███████████████████████████▇██████████████████████████████████████▅                 
//               ▁█████████████████████████████████▄█████████████████████████████▆▄█▅                 
//               ▁▅█▋▅██████████████████████████████████████████████████████████▃▆ ▅▃                 
//               ▍▏▅▏▌▅████████████████████████▇▄████▆▅████████████████████████▃▏▉ ▅                  
//                ▎▉ ▏▂█████████████████████████████████████████████████████████▃▎ ▋                  
//                  ▏▄██████████████████████████████████████████████████████████▇█▌                   
//                  ▅▇▅█▇▄████████████████████████▄▅▅███████████████████████▆▌▆▇▎▂▁                   
//                  ▅▉▏▇▋▏██▁▅███▆██████████████████████████████████▆▃███▉▂█▂ ▎▆ ▍▁                   
//                  ▄▏ ▅ ▏▆█▏▂██▂▍██████████████████████████████████▉▏▄█▆▏▌▆▁  ▄ ▏▎                   
//                     ▄  ▃▍ ▎▇▃  ▇█████████████████████████████████▌ ▏▇▋  ▄▉  ▊                      
//                     ▌  ▃▍  ▃▊  ▍███▃▉██████████████████████▆▋▇██▁▏  ▊▍  ▄▎                         
//                        ▃▍  ▊▋  ▏▁█▅▎▋██████████████████████▅ ▊██▍       ▌                          
//                        ▉▎  ▎▏   ▉█▁ ▋██████████████████████▅ ▎██                                   
//                                  ▃▆ ▋██████████████████████▅ ▊▅▍                                   
//                                   ▁▎▋██████████████████████▅ ▊▍                                    
//                                     ▋██████████████████████▅                                       
//                                     ▋██████████████████████▅                                       
//                                     ▍▆█████████████████████▊                                       
//                                      ▁████████████████████▇▌                                       
//                                     ▍▇████████████████████▄                                        
//                                     ▏▃████████████████████▅▎                                       
//                                     ▋██████████████████████▄                                       
//                                     ▎▆████▂▇█████████▄▄████▊                                       
//                                 ▏▊▂▄▇███▇▋ ▎▃██████▄▎ ▏▄████▆▂▉▍                                   
//                                ▁██▆▅▅▂▊▌     ▋████▄     ▏▊▊▅▅▅▇█▆▋                                 
//                               ▂▇▋▍▏           ▋██▆▍           ▎▍▂█▍                                
//                               ▂▌              ▎▃█▊              ▏▃▍                                
//                               ▎▍               ▏▎                ▋▏                                
//)";
//	piano a1, a2;
//	int sol = pianogame(a1, a2, 5, 0);
//	system("cls");
//	if (sol < 1) {
//		system("cls");
//		return;
//	}
//	int x = 9, y = 9;
//	cout << R"(                                                             
//   __________________________________________________________
//   |\ <==================================================> /|
//   | \ <================================================> / |
//   |  \__________________________________________________/  |
//   |   |                                           ______   |
//   |   |                                ###      /|      |  |
//   |\_ |                                #OO#     /|  ##  |  |
//   | p\|                               #######    |  __  |  |
//   |   |                              ## ### ##   | }__} |  |
//   |   |                             ##  #### #   | }__} |  |
//   | _/|                                ## ##    \|      |  |
//   |/  |                                #   #    \|______|  |
//   |   |________________________________________________|   |
//   |  /  <============================================>  \  |
//   | /  <==============================================>  \ |
//   |/______________________________________________________\|
//
//
//)";
//
//	int px = x, py = y;
//	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
//		if (trig[1]) {
//			for (int i = 12; i > 5; i--) {
//				SetCursorPosition(36, i);
//				cout << "           ";
//				Sleep(100);
//			}
//			trig[1] = 0;
//		}
//		if ((GetAsyncKeyState('W') & 0x8000)) {
//			moveStep(x, y, 'W');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('A') & 0x8000)) {
//			moveStep(x, y, 'A');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('D') & 0x8000)) {
//			moveStep(x, y, 'D');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//
//		if ((GetAsyncKeyState('S') & 0x8000)) {
//			moveStep(x, y, 'S');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('E') & 0x8000)) {
//
//			if ((x == 8) && (y >= 8) && (x <= 11)) {
//				SetCursorPosition(80, 2);
//				cout << "\033[31mТы заходишь в комнату.\033[37m.";
//				skip('R', 'r');
//				system("cls");
//				return;
//			}
//			if ((x == 49) && (y >= 8) && (y <= 10)) {
//
//				SetCursorPosition(80, 2);
//				cout << "Стол... На нем лежит какаяя-то старая книга.";
//				skip('R', 'r');
//				SetCursorPosition(80, 4);
//				cout << "В ней написано: \033[31m55661\033[37m";
//				skip('R', 'r');
//				SetCursorPosition(80, 6);
//				cout << "Что же это значит?";
//				skip('R', 'r');
//				SetCursorPosition(80, 2);
//				cout << R"(                                                                 )";
//				SetCursorPosition(80, 4);
//				cout << R"(                                                                 )";
//				SetCursorPosition(80, 6);
//				cout << R"(                                                                 )";
//
//
//			}
//
//		}
//
//		Sleep(50);
//	}
//
//	system("cls");
//}
//void Room4(player& metik) {
//	system("color 0D");
//	int x = 8, y = 6;
//	cout << R"(   __________________________________________________________
//   |\%%%%%%%%%%%%%%%%[:::::::.........     ] %%%%%%%%%%%%%%/|
//   | \%%%%%%%%%%%%%%%[_____________________]%%%%%%%%%%%%%%/:|
//   |\_\_______________\     \      |      /______________/::|
//   | p\|               \~    \    ~|~    /              |:::|
//   |   |                \_____\____|____/               |:::|
//   |   |                                                |:::|
//   | _/|                                                |.::|
//   |/  |                                                |.::|
//   |   |                                                |.::|
//   |  .|                                     _____________.:|
//   |  .|                                     |mmmnnnnn:::|..|
//   | ..|                                    /|nnmmmmmmmmm|..|
//   | ..|                                    /|:nnmm:::mm:|..|
//   | .--------\                              |::nnmmm:m::|..|
//   | .|       |                              | :::nmmmm: | .|
//   | .|   z   |\                             | :::nnmmm::| .|
//   |..|       |\                             | : nnnnnmmm| .|
//   |..|       |                              |nnnnnnnnnmm| .|
//   |..|       |                              |mmmmmmmmmm:|  |
//   |::|    Q  |                              |-----------|. |
//   |::|  o    |/                            \|iiiiiiiiiii|. |
//   |::|    o  |/                            \|{---------}|. |
//   |::| O     |______________________________|{---------}|. |
//   |::--------/ :::::::..........    ......  \___________/  |
//   |:/::::::::::::::::::::::: ...................         \ |
//   |/______________________________________________________\|
//
//)";
//	int px = x, py = y;
//	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
//		if ((GetAsyncKeyState('W') & 0x8000)) {
//			moveStep(x, y, 'W');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('A') & 0x8000)) {
//			moveStep(x, y, 'A');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('D') & 0x8000)) {
//			moveStep(x, y, 'D');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//
//		if ((GetAsyncKeyState('S') & 0x8000)) {
//			moveStep(x, y, 'S');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('E') & 0x8000)) {
//
//			if ((x == 8) && (y >= 4) && (y <= 7)) {
//				SetCursorPosition(80, 2);
//				cout << "\033[31mТы выходишь из комнату.\033[95m.";
//				skip('R', 'r');
//				system("cls");
//				return;
//			}
//			if ((y == 6) && (x >= 24) && (y <= 40)) {
//				if (trig[0]) {
//					SetCursorPosition(80, 2);
//					cout << "Новый шкаф, ты пытаешься его открыть.";
//					skip('R', 'r');
//					SetCursorPosition(80, 4);
//					cout << "\033[31mКто-то держит дверь изнутри.\033[95m";
//					skip('R', 'r');
//					SetCursorPosition(80, 2);
//					cout << R"(                                                                 )";
//					SetCursorPosition(80, 4);
//					cout << R"(                                                                 )";
//					SetCursorPosition(80, 2);
//					cout << "Дернуть еще? 1 - да / 2 - нет :";
//					string a;
//					cin >> a;
//					if (a == "1") {
//						SetCursorPosition(80, 4);
//						cout << "Ты дергаешь за ручку.";
//						skip('R', 'r');
//						SetCursorPosition(80, 6);
//						cout << "\033[31mКто-то шепчет внутри, как будто он желает услышать...\033[95m";
//						skip('R', 'r');
//					}
//					else {
//						if (a == "55661") {
//							SetCursorPosition(80, 4);
//							cout << "Шкаф открылся.";
//							skip('R', 'r');
//							SetCursorPosition(80, 6);
//							cout << "В нем светился \033[96mКЛЮЧ СНОВИДЕНИЙ\033[95m.";
//							metik.dreamkey[5] = 1;
//							skip('R', 'r');
//							SetCursorPosition(80, 8);
//							cout << "\033[96mВозможно он рассеит ваш сон.\033[95m";
//							skip('R', 'r');
//						}
//						else {
//							SetCursorPosition(80, 4);
//							cout << "\033[31mТы решил уйти.\033[95m";
//
//							skip('R', 'r');
//						}
//
//					}
//					SetCursorPosition(80, 2);
//					cout << R"(                                                                         )";
//					SetCursorPosition(80, 4);
//					cout << R"(                                                                         )";
//					SetCursorPosition(80, 6);
//					cout << R"(                                                                         )";
//					SetCursorPosition(80, 8);
//					cout << R"(                                                                         )";
//				}
//			}
//			if ((x == 15) && (y >= 14) && (y <= 20)) {
//				if (!metik.dreamkey[4]) {
//					SetCursorPosition(80, 2);
//					cout << "Стол, на нем лежит ключ.";
//					skip('R', 'r');
//					SetCursorPosition(80, 4);
//					cout << "\033[31mКлюч\033[95m";
//					skip('R', 'r');
//					metik.dreamkey[4] = 1;
//					SetCursorPosition(80, 2);
//					cout << R"(                                                                 )";
//					SetCursorPosition(80, 4);
//					cout << R"(                                                                 )";
//
//				}
//				else {
//					SetCursorPosition(80, 2);
//					cout << "Стол.";
//					skip('R', 'r');
//					SetCursorPosition(80, 4);
//					cout << "\033[31mКлюч уже у тебя.\033[95m";
//					skip('R', 'r');
//					SetCursorPosition(80, 2);
//					cout << R"(                                                                 )";
//					SetCursorPosition(80, 4);
//					cout << R"(                                                                 )";
//				}
//			}
//			if ((x == 44) && (y >= 9) && (y <= 20)) {
//				if (trig[2]) {
//					SetCursorPosition(80, 2);
//					cout << "Кровать.";
//					skip('R', 'r');
//					SetCursorPosition(80, 4);
//					cout << "\033[31mПод одеялом кто-то спит.\033[95m";
//					skip('R', 'r');
//					SetCursorPosition(80, 2);
//					cout << R"(                                                                 )";
//					SetCursorPosition(80, 4);
//					cout << R"(                                                                 )";
//				}
//				else {
//					SetCursorPosition(80, 2);
//					cout << "Ты поднял одеяло, там никого нет.";
//					skip('R', 'r');
//
//					SetCursorPosition(80, 2);
//					cout << R"(                                                                 )";
//				}
//			}
//		}
//		Sleep(50);
//	}
//	system("cls");
//}
//
//
//void Dream(player& metik) {
//	PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/sound1.mp3");
//	system("color 01");
//	SetCursorPosition(70, 25);
//	cout << "...";
//	skip('R', 'r');
//	system("cls");
//	int x = 11, y = 8;
//	Corridor();
//	int px = x, py = y;
//	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
//		system("color 01");
//		if ((GetAsyncKeyState('W') & 0x8000)) {
//			moveStep(x, y, 'W');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('A') & 0x8000)) {
//			moveStep(x, y, 'A');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('D') & 0x8000)) {
//			moveStep(x, y, 'D');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//
//		if ((GetAsyncKeyState('S') & 0x8000)) {
//			moveStep(x, y, 'S');
//			if ((px != x) || (py != y)) {
//				clearchar(px, py);
//				px = x; py = y;
//			}
//		}
//		if ((GetAsyncKeyState('E') & 0x8000)) {
//			if ((x == 9)) {//room2, картина, room1
//				if ((y >= 8) && (y <= 11)) {
//					if (metik.dreamkey[0]) {
//						SetCursorPosition(80, 2);
//						cout << "Ты заходишь в комнату.";
//						skip('R', 'r');
//						system("cls");
//						Room2(metik);
//						Corridor();
//						int x = 9, y = 9;
//					}
//					else {
//						SetCursorPosition(80, 2);
//						cout << "Дверь заперта.";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						cout << "                ";
//					}
//				}
//				if ((y >= 15) && (y <= 19)) {
//					if (trig[0]) {
//						SetCursorPosition(80, 2);
//						cout << "\033[31mТы смотришь на картину, она смотрит на тебя.\033[34m";
//						skip('R', 'r');
//						trig[0] = 0;
//						SetCursorPosition(80, 2);
//						cout << "                                                                 ";
//					}
//					else {
//						SetCursorPosition(80, 2);
//						cout << "\033[31mВзгляд с картины пронзает тебя насквозь.\033[34m";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						cout << "                                                                 ";
//					}
//				}
//				if ((y >= 24) && (y <= 27)) {
//					if (metik.dreamkey[1]) {
//						SetCursorPosition(80, 2);
//						cout << "Ты заходишь в комнату.";
//						skip('R', 'r');
//						system("cls");
//						Room1(metik);
//						Corridor();
//						int x = 9, y = 25;
//					}
//					else {
//						SetCursorPosition(80, 2);
//						cout << "Дверь заперта.";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						cout << "                ";
//					}
//
//				}
//			}
//			if ((y == 8) || (y == 9)) {//стол
//				if ((x >= 18) && (x <= 29) && trig[1]) {
//					SetCursorPosition(80, 2);
//					cout << "Стол, на нем стоит кружка, в ней какая-то красная жидость.";
//					skip('R', 'r');
//					SetCursorPosition(80, 3);
//					cout << "Ты берешь кружку, она соскальзывает с рук и разбивается.";
//					skip('R', 'r');
//					SetCursorPosition(80, 4);
//					cout << "Вместе с осколками на полу лежал ключ.";
//					skip('R', 'r');
//
//					metik.carma++;
//					trig[1] = 0;
//					metik.dreamkey[0] = 1;
//					SetCursorPosition(80, 2);
//					cout << "                                                                 ";
//					SetCursorPosition(80, 3);
//					cout << "                                                                 ";
//					SetCursorPosition(80, 4);
//					cout << "                                                                 ";
//				}
//				else {
//					SetCursorPosition(80, 2);
//					cout << "\033[31mВ окне ничего нет.\033[34m";
//					skip('R', 'r');
//					SetCursorPosition(80, 2);
//					cout << "                                                                 ";
//				}
//			}
//			//room3,room4
//			if ((x == 39)) {
//				if ((y >= 8) && (y <= 11)) {
//					if (metik.dreamkey[4]) {
//						SetCursorPosition(80, 2);
//						cout << "Ты заходишь в комнату.";
//						skip('R', 'r');
//						system("cls");
//						Room3(metik);
//						Corridor();
//						int x = 39, y = 9;
//					}
//					else {
//						SetCursorPosition(80, 2);
//						cout << "Дверь заперта.";
//						skip('R', 'r');
//						SetCursorPosition(80, 2);
//						cout << "                ";
//					}
//
//				}
//				if ((y >= 21) && (y <= 24)) {
//					if (metik.dreamkey[2] && metik.dreamkey[3]) {
//						SetCursorPosition(80, 2);
//						cout << "Ты заходишь в комнату.";
//						skip('R', 'r');
//						system("cls");
//						Room4(metik);
//						Corridor();
//						int x = 39, y = 23;
//					}
//					else {
//						if (metik.dreamkey[2] ^ metik.dreamkey[3]) {
//							SetCursorPosition(80, 2);
//							cout << "В этой двери два замка";
//							skip('R', 'r');
//							SetCursorPosition(80, 3);
//							cout << "Один ключ подошел, надо найти второй.";
//							skip('R', 'r');
//							SetCursorPosition(80, 4);
//							cout << "\033[31mЧто б найти второй, выбери остаться.\033[34m";
//							skip('R', 'r');
//							SetCursorPosition(80, 2);
//							cout << "                                           ";
//							SetCursorPosition(80, 3);
//							cout << "                                           ";
//							SetCursorPosition(80, 4);
//							cout << "                                           ";
//						}
//						else {
//							SetCursorPosition(80, 2);
//							cout << "Дверь заперта.";
//							skip('R', 'r');
//							SetCursorPosition(80, 2);
//							cout << "                ";
//						}
//					}
//
//				}
//			}
//			if ((x == 33) && (y >= 15) && (y <= 18)) {
//				if (metik.ivent[5]) {
//					SetCursorPosition(80, 2);
//					cout << "\033[31mТумбочка, она на замке.\033[34m.";
//					skip('R', 'r');
//					SetCursorPosition(80, 2);
//					cout << "                                                                 ";
//				}
//				else {
//					SetCursorPosition(80, 2);
//					cout << "Тумбочка заперта, но, видимо, у вас есть ключ.";
//					skip('R', 'r');
//					SetCursorPosition(80, 3);
//					cout << "\033[31mВ тумбочке ключ, ты на правильном пути.\033[34m.";
//					skip('R', 'r');
//					metik.egorend = 1;
//					SetCursorPosition(80, 2);
//					cout << "                                                                 ";
//					SetCursorPosition(80, 3);
//					cout << "                                                                 ";
//				}
//			}
//			if ((y == 28) && (x >= 19) && (x <= 25)) {
//				if (metik.dreamkey[7]) {
//					SetCursorPosition(80, 2);
//					cout << "Ты заходишь в комнату.";
//					skip('R', 'r');
//					system("cls");
//					return;
//				}
//				else {
//					SetCursorPosition(80, 2);
//					cout << "Дверь заперта.";
//					skip('R', 'r');
//					SetCursorPosition(80, 2);
//					cout << "                ";
//				}
//
//			}
//		}
//		Sleep(50);
//	}
//	system("cls");
//}
//void endpart(player metik) {
//	system("cls");
//	// Концовка 1: Поражение
//	if (metik.lose == 1) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/sad.mp3");
//		system("color 0c");
//		cout << R"(
//     ▄████  ▄▄▄       ███▄ ▄███▓▓█████     ▒█████   ██▒   █▓▓█████  ██▀███  
//     ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀    ▒██▒  ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒
//    ▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███      ▒██░  ██▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒
//    ░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄    ▒██   ██░  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄  
//    ░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒   ░ ████▓▒░   ▒▀█░  ░▒████▒░██▓ ▒██▒
//     ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░   ░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░
//      ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░     ░ ▒ ▒░    ░ ░░   ░ ░  ░  ░▒ ░ ▒░
//    ░ ░   ░   ░   ▒   ░      ░      ░      ░ ░ ░ ▒       ░░     ░     ░░   ░ 
//          ░       ░  ░       ░      ░  ░       ░ ░        ░     ░  ░   ░     
//                                                             ░               
//    )" << endl;
//		cout << "Ты проиграл...\033[0m Может, в следующий раз повезет?\n";
//		cout << "Причина: неверный выбор, дойди хотя б до пар...\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//	// Концовка 5: Встреча с Егором
//	if (metik.egorend == 1) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/egor_end.mp3");
//		system("color 0E");
//		cout << R"(
//                                                                                                                      
// @@@@@@   @@@@@@@@   @@@@@@@  @@@@@@@   @@@@@@@@  @@@@@@@     @@@@@@@@  @@@  @@@  @@@@@@@   @@@  @@@  @@@   @@@@@@@@  
//@@@@@@@   @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@     @@@@@@@@  @@@@ @@@  @@@@@@@@  @@@  @@@@ @@@  @@@@@@@@@  
//!@@       @@!       !@@       @@!  @@@  @@!         @@!       @@!       @@!@!@@@  @@!  @@@  @@!  @@!@!@@@  !@@        
//!@!       !@!       !@!       !@!  @!@  !@!         !@!       !@!       !@!!@!@!  !@!  @!@  !@!  !@!!@!@!  !@!        
//!!@@!!    @!!!:!    !@!       @!@!!@!   @!!!:!      @!!       @!!!:!    @!@ !!@!  @!@  !@!  !!@  @!@ !!@!  !@! @!@!@  
// !!@!!!   !!!!!:    !!!       !!@!@!    !!!!!:      !!!       !!!!!:    !@!  !!!  !@!  !!!  !!!  !@!  !!!  !!! !!@!!  
//     !:!  !!:       :!!       !!: :!!   !!:         !!:       !!:       !!:  !!!  !!:  !!!  !!:  !!:  !!!  :!!   !!:  
//    !:!   :!:       :!:       :!:  !:!  :!:         :!:       :!:       :!:  !:!  :!:  !:!  :!:  :!:  !:!  :!:   !::  
//:::: ::    :: ::::   ::: :::  ::   :::   :: ::::     ::        :: ::::   ::   ::   :::: ::   ::   ::   ::   ::: ::::  
//:: : :    : :: ::    :: :: :   :   : :  : :: ::      :        : :: ::   ::    :   :: :  :   :    ::    :    :: :: :   
//                                                                                                                                                                                                                                                                  
//    )" << endl;
//		cout << "\033[33mТы встречаешь Егора. Он сидит на развалинах с сломанной гитарой.\n";
//		cout << "Егор: \033[91m'Зачем ты ее сломал?'\033[33m\n";
//		skip('R', 'r');
//		system("cls");
//		cout << "Ты падаешь вниз...\n";
//		skip('R', 'r');
//		system("cls");
//		system("color 0C");
//		cout << R"(
//
//                                              :*#*:                                                 
//                                          .&░▓████▓▓░&.                                             
//                                        :&▓███████████▓%:                                           
//                                        #███████████████#.                                          
//                                       =█████████████████+                                          
//                                      :▒█████████████████▓:                                         
//                                      .+▓████▒▓█▓█▓░████▓+.                                         
//                                        %██▓&&+* **#&▓██%                                           
//                                       :░██@   +==   @██░:                                          
//                                      %@@▓█▓%..+%+..%▓███▒%.                                        
//                                    -░▓: .+@█▓&=++&▓█▒*. -▒▒=                                       
//                                   &██@&:   :&▒██▓&+.   :&@██#                                      
//                                  -▓█+:*░#=.  .&@:   .=@░*:%██-                                     
//                                 .▒&...-.=░@%:.*+  .*&&=.-+..+░.                                    
//                                 %█+  :&*  :*@▒▒&&@@*.  *░:  *█%                                    
//                                -@=:  -▒░      *%:     .#█-  :#▓=                                   
//                                #▒.   @██*.    ++      *▓█#   :▒░                                   
//                               :▓&.   ██▓.     ++      .██▓   .@█-                                  
//                               @&-   .███-     *+      :███=   -#▒                                  
//                              +█*   =#██▒-.    *+      -░██#=   @█*                                 
//                              :░█#=. +▓███▓@===&&+---&▒████%. :#▓▒-                                 
//                               #█▒░#▒█████████%@@@░█████████▒#@░█@                                  
//                              =▓@:..-█████████=▒▒▒&█████████+..-%█+                                 
//                              -@█@@@░███████████████████████░@@░░@-                                 
//                               -@:::=███████████████████████=...#+                                  
//                               -# @%░███████████████████████░*@ #+                                  
//                               .%%▒███████████████████████████▒%*:                                  
//                                 .-#█████████████████████████@-.                                    
//                                  .&█████████████████████████#.                                     
//                                  :███████████████████████████-                                     
//                                  :█████████████*█████████████-                                     
//                                  #█████████████+█████████████#                                     
//                                 -▒█████████████:▓████████████▒-                                    
//                                 =█████████████% *█████████████+                                    
//                                 =▓████████████* *█████████████=                                    
//                                  :%&&██████▒▒+   +▒▒██████&&%:                                     
//                                     :▒█████=       -██▒░█▓:                                        
//                                     ▓██████*       +███████                                        
//                                     &▒▒░░▒░-       -░▓▓@▓▓#                                        
//                                                                                                    
//    )" << endl;
//		Sleep(1000);
//		system("cls");
//		system("color 0B");
//		cout << R"(
//                                                                                                      
//              
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                           ▏▏▏▏▎▍▍▍▍▍▎▎▎                                            
//                                      ▏▏▎▂▂▄████████████▄▄▉▍▏▏           ▏▏                         
//                                     ▍█▇▇▆▂▅█████▇▇██████▇▅▇█▆▂▌          ▏                         
//                                   ▍▁▄▅▉▊▍▄▅▃▅██▇ ▏██▇▅▆██▊▍▊▆▅▁▌▏▏       ▎                         
//                                 ▍▃▅▊▍   ▅▌▏ ▌███▆▇██▅▌▏▊▃▂▋  ▎▁▆▅▉▎      ▎                         
//                               ▏▅▅▃▏    ▏▆ ▎▎▄████████▆   ▃▊    ▏▉▆▆▊     ▎                         
//                               ▎▅▃▌     ▎▇   ▉████████▂  ▍▇▋     ▏▃▆▋     ▎                         
//                                ▏▌▃▌▏   ▏▋▃   ▌▄████▅▋▏ ▌▆▃▏     ▌▌▎      ▏                         
//                                   ▎▏    ▏▌▄▉▌▎▏▏▏▏▏▏▏▍▉▆▉▎               ▎                         
//                         ▏                 ▏▋▋▊▂▂▂▂▂▂▂▋▋▎                 ▎                         
//                         ▏▏                                               ▍                         
//                           ▏                                            ▏▏                          
//                                                                                                    
//                             ▏▏                                      ▏▏▏                            
//                                ▍    ▏                            ▏ ▏                               
//                                   ▏   ▏                       ▏ ▏▏                                 
//                                     ▏▏▎▏▎▌▍▍▎▋▋▊▊▋▍▌▋▊▋▋▌▌▏   ▏                                    
//                                         ▏▏▏▏▏▏▏▏▏▏▏▏▏▏▏▏▏▏▏                                        
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//
//)";
//		Sleep(1000);
//		system("cls");
//		system("color 0D");
//		cout << R"(
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                 ▎▍▌▏                                               
//                                               ▍  ▎▄▅▍                                              
//                                               ▉▌▍▋▇▇▊                                              
//                                              ▎▍▌▋▇█▆▊▏                                             
//                                             ▎▎▎▋▉▁▄▅█▄▍                                            
//                                        ▏▍▍▍▁▄▅▅▅▄▅▅▅▅▅▃▂▁▌▍                                        
//                                     ▎▍▊▊▉▁▊▊▌▏▏▏▏▏▏   ▏▉▉▄▇▆▃▊▎                                    
//                                  ▏▍▌▌▋▋▍  ▎▍▌▋▋▋▋▋▊▂▃▊▌▏  ▏▍▉▆█▅▊▏                                 
//                                ▏▌▋▌▌▏  ▏▊▄▄█████▇▊▆█████▆▅▊▏▏ ▍▂▆▇▊▏                               
//                               ▋▊▋▋▏ ▏▊▅▇██████▇▆▃ ▄▅▇███████▄▌▏ ▏▁▇▆▋                              
//                             ▏▉▌▊▏ ▏▊▆█████████▂▊▃ ▄▋▅█████████▄▌  ▍▇█▉                             
//                            ▏▊▃▋  ▍▅███▆▁▅██▇█▇▌▊▃ ▄▊▅███████████▁▏ ▏▅█▉                            
//                            ▊▂▊  ▍▆██████▅▊▅█▃▊▍▊▂ ▄▋▄▃▇██████████▁  ▍▆█▌                           
//                           ▍▅▃▏ ▏▅████████▇▄▉▂▃▌▉▂ ▄▊▃▅▃▂▆▇████████▉  ▋█▆▍                          
//                           ▁▇▏  ▊██▇███▇▆▄▃▃▄▎ ▍█▂ ▄█▋▍▂▆▃▄▆███████▇▍  ▆█▉                          
//                           ▇█   ▆██▅▁▂▉▊▉▉▉▉▉▅▇▃▍▎ ▊▌▃█▄▁▁▁▁▄▇▄▃▅▆██▂  ▌█▇                          
//                           ██   ▅█▁▍▎▎▎▎▎▎▎▎▎▎▎▎▏   ▏▎▎▎▎▎▎▎▎▎▍▍▌▋▂█▂ ▏▋█▇                          
//                           ██   ▅██▇▁▂▃▃▂▁▁▁▁▆█▄▍▋ ▊▌▆█▆▁▁▁▁▅▇▅▂▂▇██▂  ▋█▅                          
//                           ▇█▌  ▁███▇███▆█▄▃▄▊▏▉█▂ ▄█▃▊▇▅▃▅█████████▊ ▏▉█▄                          
//                           ▄█▂  ▍▇█████████▄▁▁▅▊▁▂ ▄▁▄▅▇███████████▄  ▎██▉                          
//                           ▎▇█▌ ▏▊█████████▆█▂▄▁▊▂ ▄▋▄▃▆██████████▆▎  ▁█▆                           
//                            ▋██▎ ▏▁████████████▉▉▂ ▄▊▄███████████▇▍ ▏▊█▇▌                           
//                             ▁█▇▋▏▏▋▆██████████▂▂▂ ▄▄▆██████████▄▎  ▊██▊                            
//                              ▊▇█▂▏  ▋▆████████▉▂▂ ▄▉▄████████▃▍  ▍▃██▋▏                            
//                               ▌▄█▇▂▍  ▍▉▄▇██████▂ ▄██████▇▄▊▎  ▌▂██▄▎                              
//                                 ▌▅██▅▉▍▏ ▏▍▉▉▅▅▅▄▂▅▅▅▄▊▊▏   ▍▊▄██▅▌                                
//                                  ▏▍▂▇██▆▄▁▉▌▏▏      ▏▏▏▎▍▊▃▆██▇▂▌                                  
//                                     ▏▍▉▃▆████▇▅▅▅▅▅▅▅█████▇▄▁▎                                     
//                                          ▎▊█████████████▋▍                                         
//                                         ▍▄▅▂▂▂▇██████████▄▏                                        
//                                       ▌▂▃▋▊▋▋▋▁▄▄▃▄▄▄▄▆███▇▃▎                                      
//                                       ▌▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▎                                      
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                                                                                    
//
//)";
//		Sleep(1000);
//		system("cls");
//		system("color 08");
//		cout << R"(
//                     
//                                                                               ▏▊▎                  
//                                                                               ▄▊▄▂▎                
//                                                                               ▄▏▋█▆▌               
//                                                                               ▄▎▏▂█▇▎              
//                                                                               ▄▏ ▋██▅              
//                                         ▍▌▌▉▂▂▂▂▂▂▂▂▂▌▌▌                      ▄  ▊▇██▎             
//                                     ▌▂▅▇█████████████████▇▃▉▎                ▉▉  ▎▄██▅             
//                                  ▎▂██████████████████████████▆▋             ▏▂▍  ▎▊██▅             
//                                 ▉██████████████████████████████▅▍           ▉▃▏ ▏▎▊██▅             
//                               ▎▄█████████████████████████████████▌         ▊▇▋ ▏ ▏▆██▄             
//                               ▁██████████████████████████████████▅▎       ▋▇▊▏ ▏ ▁███▉             
//            ▁▉                ▍████████████████████████████████████▂▏    ▎▃▄▎  ▎▍▎▅██▇              
//            ▋█▄▌              ▄█████████████▅▂▂▁▁▁▁▂▂▂██████████████▎ ▏▍▂▄▋▏  ▏ ▎▇███▌              
//             ▇█▆▁▍▏         ▎▋▆█████████████▇███████████████████████▉▃▇▆▊   ▏  ▋███▇▊               
//             ▊█▆▎▋▉▉▌▍▎  ▍▁▅██████████▇▅▃▂▉▊▊▊▊▊▊▊▊▊▊▊▊▊▁▃▅▆▆████████▋▍▏  ▏  ▎▃███▇▋                
//              ▄██▊  ▍▋▉▂▃▉▊████████████▆▆▆▄▁▍▎      ▏▍▊▃▆▆▆▆▇████████      ▏▊▇██▇▂▎                 
//              ▎▆██▁▍      ▉██████████████████▇▍▏  ▏▎▉████████████████▊ ▏▏▎▊▇████▍                   
//               ▌▇███▃▋▏   ████████████▆▃▃▃▆████▅▋▋▉████▇▄▃▃▃█████████▇ ▍▂▇██████▍                   
//                ▉███▇█▂▎▊▂██████████▇▉▌██▃▃▁███▂▏ ▌███▆▋▊█▆▂▊▃████████▇█████▂▁▅▅▏                   
//                ▏▂████▇▇▇████████▍▍▁▆▅▁▄▇▅▃▇█▂▂▁  ▍▆▊▇█▄▂▅▇▂▃▆▃▌▏▁█████████▇                        
//                  ▉▇█████████████   ▌▁▏▋▊▊▃▉▏▊▂▏  ▏▊▃▏▍▂▉▌▉▋▎▊▏  ▂█████████▇                        
//                   ▌▆████████████▏    ▏▏▏▏ ▍▁▋      ▍▁▊▏ ▏▏▏    ▏▂█████████▇                        
//                    ▏▉▇██████████▄       ▎▃█▃▉▉▍  ▎▌▉▉▅▆▌       ▉██████████▇                        
//                      ▏▊▃▆████████▃▏    ▋▄▊▊▅███▇▅███▆▂▍▂▂▏    ▁███████████▅                        
//                         ▏▍████████▄▏ ▏▁▁▏   ▏▌▂▅▆▄▋▎   ▏▋▃▍ ▏▁████████▇▂▇█▁                        
//                          ▌█████████▄▎▃▌    ▎▋▉▉▍▍▊▉▉▍▏   ▏▄▋▊█████████▅                            
//                          ▇██████████▇▎ ▏▉▄▆▇▇▇▇▇▇█▇▇█▆▄▂▍ ▏▄▇██████████▋                           
//                          ▇███████████▍ ▍▋▎▍▌▏▏▎▎▎▎▎▏▎▋▊▋▉  ▂███████████▂                           
//                          ▇██████████▅▏      ▅▇▆▆▆▇▇▇▍      ▏▇██████████▂                           
//                          ▇██████████▆▋   ▍▊▄▉▋▌▌▌▌▌▊▁▁▍    ▂███████████▂                           
//                          ▇████████████▂▍ ▎▏          ▏▎ ▏▋▆████████████▂                           
//                          ▇█████████▇████▂▌  ▍▋▋▋▋▋▋▋  ▎▉▆████▇█████████▂                           
//                          ▍████████████████▇▇████████▇▇█████▇██████████▆▏                           
//                          ▏▂███████████████████████████████████████████▋                            
//                            ▃█████████████████████████████████████████▊                             
//                             ▊▇█████████████████████████████████████▄▍                              
//                              ▏▉▇█████████████████████████████████▃▌▏                               
//                                ▏▊▄████████████████████████████▅▉▍                                  
//                                   ▏▍▊▄▄██████████████████▆▄▉▋▏▏                                    
//                                        ▏▏▏▊▉▉▉▉▉▉▉▉▉▉▉▏▏▏▏                                         
//                                                                                                    
//
//)";
//		for (int i = 0; i < 50; i++) {
//			Sleep(50);
//			if (i % 2) {
//				system("color 07");
//			}
//			else {
//				system("color 0C");
//			}
//		}
//		StopMusic();
//		return;
//	}
//
//	// Концовка 2: Истинная концовка
//	if (metik.dreamkey[5] == 1 && metik.carma >= 8 && metik.boss == 3) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/true_end.mp3");
//		system("color 0D");
//		cout << R"(
//::::::::::: :::::::::  :::    ::: ::::::::::     :::::::::: ::::    ::: :::::::::  ::::::::::: ::::    :::  ::::::::  
//    :+:     :+:    :+: :+:    :+: :+:            :+:        :+:+:   :+: :+:    :+:     :+:     :+:+:   :+: :+:    :+: 
//    +:+     +:+    +:+ +:+    +:+ +:+            +:+        :+:+:+  +:+ +:+    +:+     +:+     :+:+:+  +:+ +:+        
//    +#+     +#++:++#:  +#+    +:+ +#++:++#       +#++:++#   +#+ +:+ +#+ +#+    +:+     +#+     +#+ +:+ +#+ :#:        
//    +#+     +#+    +#+ +#+    +#+ +#+            +#+        +#+  +#+#+# +#+    +#+     +#+     +#+  +#+#+# +#+   +#+# 
//    #+#     #+#    #+# #+#    #+# #+#            #+#        #+#   #+#+# #+#    #+#     #+#     #+#   #+#+# #+#    #+# 
//    ###     ###    ###  ########  ##########     ########## ###    #### #########  ########### ###    ####  ########  
//    )" << endl;
//		cout << "Истинная концовка: Ты нашел Ключ Сновидений и раскрыл все тайны.\n";
//		cout << "Мир вокруг тает... Ты просыпаешься в реальности, где ты миллиардер-программист на С++...\n";
//		cout << "\033[96mМАГИЯ СНА НАПОНИЛА ТЕБЕ О ПРОШЛОМ\033[0m\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//	if (metik.dreamkey[5] == 1) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/neutral_end.mp3");
//		system("color 0B");
//		cout << R"(
//                                                                                                     
//                                                              
//                                ▋▉▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▋▊▊▆▉▏                                    
//                              ▎▂▌▏▂▆▅▅▅▅▅▆▆▆▆▆▅▄▄▆▅▄▆▆▆▆▆▅▅▅▊▏▃▆▍                                   
//                              ▍▁ ▃▇▎▏▎▇▌█▆▆▆▋▋▌▍▌▄▇▅████▁▏▍▄█▌▉█▋                                   
//                              ▍▂ ▃▅▂▂▄▄▂█▇▃▁▁▍▌▌▌▌▁▂▆███▆▄▆▇█▍▉█▋                                   
//                              ▍▁ ▄▄▆███▁▁▌▏  ▎▍▍▍▍  ▏▌▂██▇███▎▉█▋                                   
//                              ▍▁ ▄████▅▌  ▎▂▂▉▁▁▁▁▃▄▌  ▍█████▎▉█▋                                   
//                              ▍▂ ▄███▅▍ ▏▋▄▌    ▎▊▂██▁▏▏▂████▎▉█▋                                   
//                              ▍▂ ▄███▃  ▎▇▎    ▌▃▄▇███▊ ▋████▎▉█▋                                   
//                              ▍▂ ▄███▃  ▎▇▏ ▏▉▅██▇████▊ ▋████▎▉█▋                                   
//                              ▍▂ ▄███▄▎  ▁▃▁▅████████▄▍▍▂████▎▉█▋                                   
//                              ▍▂ ▄████▆▏  ▁▇███████▇▃▌▏▏▅████▎▉█▋                                   
//                              ▍▂ ▄█████▇▊  ▏▌▉▂▁▁▁▌▏▏ ▌▆█████▎▉█▋                                   
//                              ▍▂ ▄██▆▇███▇▄▁▁▌▌▌▌▌▁▁▃▆███▇▆██▍▉█▋                                   
//                              ▍▂ ▄▇▍▏▎▆█████████████████▁▎▁▄█▋▂█▋                                   
//                              ▍▃▏▁▇▃▁▆██████████████████▆▄▅█▅▊▃█▋                                   
//                              ▍▇▇▁▎▋▋▋▋▋▋▋▋▊▊▊▉▉▁▃▃▃▃▃▄▄▄▄▄▄▉▆██▋                                   
//                               ▏▁▇████████████████████████████▃▍                                    
//                                 ▏▏▏▏▊███████████████████▁▏▏▏▏▏                                     
//                                     ▊▉▏▏▏▏▉▁▁▁▁▁▁▁▂▁▎▍▃█▉                                          
//                                     ▊▊    ▏     ▏▏▏▍▃▆▇█▊                                          
//                                     ▊▁▍▏     ▆▃▏▅▆▊█████▊                                          
//                                     ▌▇█▆▉▏   █▄▊██▇██▇█▆▌                                          
//                                      ▏▃█▇    █▄▅██▇██▆▊▏                                           
//                                       ▁█▆    █▄▅████▆▇▂▎                                           
//                                       ▁▆▏▋  ▏█▄▅███████▇▋                                          
//                                       ▁▅ ▌  ▏█▄▅██████▇▇▋                                          
//                                       ▁▅ ▇▊ ▏█▄▅██▇███▁▎                                           
//                                       ▁▅ ▇▇▎▎█▄▅██████▃▍                                           
//                                       ▁▅ ▇█▆▂█▄▅████████▋                                          
//                                       ▁▅ ▇██▆█▃▅██████▇▅▍                                          
//                                       ▁▅ ▇████▂▅█████▇▍                                            
//                                       ▁▅ ▇██▆█▄▅██████▆▊▏                                          
//                                       ▁▅ ▇██▇█▃▆████████▋                                          
//                                       ▁▅▏▆██████████████▋                                          
//                                       ▋▇█▄▄████████████▅▍                                          
//                                        ▏▁██▅▅████████▆▌                                            
//                                          ▎▁▇█▆█████▅▌▏                                             
//                                            ▏▊▆▇▇▇▄▌▏                                               
//                                                                                                    
//
//    )" << endl;
//		cout << "\033[90mКлюч растварился в темноте.\n";
//		cout << "Видимо его наличие не позволяет им воспользоваться, надо еще что-то.\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//	// Концовка 3: Хорошая, но не истинная
//	if (metik.carma >= 6 && metik.boss == 3 && metik.dreamkey[5] == 0) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/good_end.mp3");
//		system("color 0E");
//		cout << R"(
//                                   ,,      ,...  ,,                  
//    `7MM"""Mq.                     db    .d' ""  db            mm    
//      MM   `MM.                          dM`                   MM    
//      MM   ,M9  ,6"Yb.   ,p6"bo  `7MM   mMMmm  `7MM  ,pP"Ybd mmMMmm  
//      MMmmdM9  8)   MM  6M'  OO    MM    MM      MM  8I   `"   MM    
//      MM        ,pm9MM  8M         MM    MM      MM  `YMMMa.   MM    
//      MM       8M   MM  YM.    ,   MM    MM      MM  L.   I8   MM    
//    .JMML.     `Moo9^Yo. YMbmd'  .JMML..JMML.  .JMML.M9mmmP'   `Mbmo 
//                                                                     
//    )" << endl;
//		cout << "Хорошая концовка:\033[0m Ты подружился с боссом и сделал всё правильно...\n";
//		cout << "Но что-то не дает покоя. Кажется, ты упустил главное — \033[96mКлюч Сновидений.\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//
//	// Концовка 4: Средняя
//	if (metik.carma >= 4 && (metik.boss == 3)) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/neutral_end.mp3");
//		system("color 0A");
//		cout << R"(
//    
// ██████   █████    ███████    ███████████   ██████   ██████   █████████   █████      
//░░██████ ░░███   ███░░░░░███ ░░███░░░░░███ ░░██████ ██████   ███░░░░░███ ░░███       
// ░███░███ ░███  ███     ░░███ ░███    ░███  ░███░█████░███  ░███    ░███  ░███       
// ░███░░███░███ ░███      ░███ ░██████████   ░███░░███ ░███  ░███████████  ░███       
// ░███ ░░██████ ░███      ░███ ░███░░░░░███  ░███ ░░░  ░███  ░███░░░░░███  ░███       
// ░███  ░░█████ ░░███     ███  ░███    ░███  ░███      ░███  ░███    ░███  ░███      █
// █████  ░░█████ ░░░███████░   █████   █████ █████     █████ █████   █████ ███████████
//░░░░░    ░░░░░    ░░░░░░░    ░░░░░   ░░░░░ ░░░░░     ░░░░░ ░░░░░   ░░░░░ ░░░░░░░░░░░ 
//                                                                                     
//                                                                                     
//                                                                                     
//    )" << endl;
//		cout << "Средняя концовка: \033[32mТы справился, но без особых свершений.\n";
//		cout << "Босс стал твоим другом, но \033[96mключи\033[32m так и остались загадкой...\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//
//	if (metik.boss == 2) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/neutral_end.mp3");
//		system("color 04");
//		cout << R"(
//              ░█▄█░█░█░█▀▄░█▀▄░█▀▀░█▀▄░█▀▀░█▀▄
//              ░█░█░█░█░█▀▄░█░█░█▀▀░█▀▄░█▀▀░█▀▄
//              ░▀░▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀▀░▀░▀  
//    )" << endl;
//		cout << "Убийца.\n";
//		cout << "Ты же сам знаешь, что это не выход.\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//	if (metik.eng == 1) {
//		PlayMusic(L"C:/Users/Acer/source/repos/MCLOVER/neutral_end.mp3");
//		system("color 09");
//		cout << R"(
//   EEEEEEE                 lll iii       hh                                  
//   EE      nn nnn   gggggg lll      sss  hh      mm mm mmmm    aa aa nn nnn  
//   EEEEE   nnn  nn gg   gg lll iii s     hhhhhh  mmm  mm  mm  aa aaa nnn  nn 
//   EE      nn   nn ggggggg lll iii  sss  hh   hh mmm  mm  mm aa  aaa nn   nn 
//   EEEEEEE nn   nn      gg lll iii     s hh   hh mmm  mm  mm  aaa aa nn   nn 
//                 ggggg           sss                                      
//    )" << endl;
//		cout << "Английский - это самое главное.\n";
//		cout << "А вот если попробовать что-то новое.\n";
//		skip('R', 'r');
//		StopMusic();
//		return;
//	}
//
//	// Концовка 6: Одинокий путник
//	if (metik.carma <= 2) {
//		system("color 0");
//		cout << R"(
// ▄▀▀█▄   ▄▀▀▀▀▄    ▄▀▀▀▀▄   ▄▀▀▄ ▀▄  ▄▀▀█▄▄▄▄ 
//▐ ▄▀ ▀▄ █    █    █      █ █  █ █ █ ▐  ▄▀   ▐ 
//  █▄▄▄█ ▐    █    █      █ ▐  █  ▀█   █▄▄▄▄▄  
// ▄▀   █     █     ▀▄    ▄▀   █   █    █    ▌  
//█   ▄▀    ▄▀▄▄▄▄▄▄▀ ▀▀▀▀   ▄▀   █    ▄▀▄▄▄▄   
//▐   ▐     █                █    ▐    █    ▐   
//          ▐                ▐         ▐        
//    )" << endl;
//		cout << "Скучно...\n";
//	}
//
//
//
//	// Если ни одна концовка не подошла
//	cout << "Явно есть другой способ пройти игру...\n";
//	skip('R', 'r');
//}
//
//void PlayMusic(const wchar_t* filename) {
//	// Открываем и запускаем проигрывание
//	wchar_t command[256];
//	swprintf(command, 256, L"open \"%s\" type mpegvideo alias mymusic", filename);
//	mciSendStringW(command, nullptr, 0, nullptr);
//	mciSendStringW(L"play mymusic repeat", nullptr, 0, nullptr); // repeat — по кругу
//}
//
//void StopMusic() {
//	mciSendStringW(L"stop mymusic", nullptr, 0, nullptr);
//	mciSendStringW(L"close mymusic", nullptr, 0, nullptr);
//}
