#include "Structs.h"
#include "AllUnit.h"  // Для SetCursorPosition

void piano::move() {
    for (int i = 117 + key * 9; i < 125 + key * 9; i++) {
        if (y > 1 && y < 34) {
            SetCursorPosition(i, y - 1);
            std::cout << " ";
        }
        for (int j = y; j < y + 8; j++) {
            if (j != 0 && j < 33) {
                SetCursorPosition(i, j);
                std::cout << "+";
            }
        }
    }
}