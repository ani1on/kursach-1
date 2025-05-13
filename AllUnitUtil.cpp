#include "AllUnit.h"
using namespace std;
void SetCursorPosition(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(hConsole, pos);
}
void skip(char A, char a) {
	char key;
	do {
		key = _getch();
	} while (key != A && key != a);

}
void solution(int ymax, int ymin, int x, int& sol, int step) {//функция выбора
	SetCursorPosition(x, ymin);
	cout << ">";
	for (int y = ymin;;) {

		if ((GetAsyncKeyState('W') & 0x8000) && (y > ymin)) {
			SetCursorPosition(x, y);
			cout << " ";

			y -= step;
			SetCursorPosition(x, y);
			cout << ">";
			Sleep(200);
			sol--;

		}
		if ((GetAsyncKeyState('S') & 0x8000) && (y < ymax)) {
			SetCursorPosition(x, y);
			cout << " ";
			y += step;
			SetCursorPosition(x, y);
			cout << ">";
			Sleep(200);
			sol++;

		}
		if (GetAsyncKeyState('E') & 0x8000) {
			SetCursorPosition(74, y);
			cout << " ";

			break;

		}
	}
}