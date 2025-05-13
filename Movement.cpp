
#include "Movement.h"

using namespace std;
void moveStep(int& x, int& y, char direction) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char ch;
	DWORD charsRead;
	COORD position;

	// Скрываем курсор
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(hConsole, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(hConsole, &cursorInfo);

	// Проверяем направление движения и наличие пробела
	switch (direction) {
	case 'W': // Вверх
		position = { static_cast<SHORT>(x), static_cast<SHORT>(y - 1) };
		if (y > 0 && ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
			y--;
		}
		break;

	case 'S': // Вниз
		position = { static_cast<SHORT>(x), static_cast<SHORT>(y + 1) };
		if (ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
			y++;
		}
		break;

	case 'A': // Влево
		position = { static_cast<SHORT>(x - 1), static_cast<SHORT>(y) };
		if (x > 0 && ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
			x--;
		}
		break;

	case 'D': // Вправо
		position = { static_cast<SHORT>(x + 1), static_cast<SHORT>(y) };
		if (ReadConsoleOutputCharacterA(hConsole, &ch, 1, position, &charsRead) && ch == ' ') {
			x++;
		}
		break;
	}

	// Отображаем персонажа на новой позиции
	SetConsoleCursorPosition(hConsole, { static_cast<SHORT>(x), static_cast<SHORT>(y) });
	cout << '@';
}
void clearchar(int x, int y) {
	SetCursorPosition(x, y);
	cout << ' ';
}
void moveplayer(int& x, int& y) {

	if ((GetAsyncKeyState('D') & 0x8000)) {

		x++;
	}
	if ((GetAsyncKeyState('S') & 0x8000)) {
		y++;
	}
	if ((GetAsyncKeyState('A') & 0x8000) && (x > 1)) {
		x--;
	}
	if ((GetAsyncKeyState('W') & 0x8000) && (y > 1)) {
		y--;
	}
}
void Corridor() {
	system("color 01");
	cout << R"(
                                              
    ________________________________________  
    |\ ..... \ ,,,,,,,,||,,,,,,,, /  ..... /| 
    | \  {).. \________||________/  ....../.| 
    |. \ _____/-------------------\______/..| 
    |...|     |         <===>     |     | . | 
    | ..|     | u                 |     | . | 
    |\_ |     \___________________/     | _/| 
    | p\|      \_\            /_/       |/q | 
    |   |                               |   | 
    |   |                               |   | 
    | _/|                               |\_ | 
    |/. |                               | .\| 
    | ..|                           ______::| 
    |---|                          /| _   |:| 
    |   |                         |~|{*}  |.| 
    |E=)|                         | | ^   |.| 
    |):)|                         | |  <=>|.| 
    | ..|                          \|_____|.| 
    |---|                               | . | 
    |   |                               | _/| 
    |   |                               |/q | 
    |   |                               |   | 
    |\_ |                               |   | 
    | p\|                               |\_ | 
    |   |                               | .\| 
    | . |                               |.. | 
    |._/|                               | . | 
    |/..|_______________________________| ..| 
    |  / ........  /     \  ........:::: \ .| 
    | /........... |   r |......::::::::::\ | 
    |/____________/_______\________________\| 

)";
}