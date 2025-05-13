#include "AllUnit.h"
#include "Structs.h"
#include "BossFight.h"
#include "EndPart.h"
#include "English.h"
#include "HousePart.h"
#include "Steps.h"
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	srand(time(0));
	player metik;
	int out = 1;
	for (;;) {
		Menu(out);
		if (out == 0) {
			return 0;
		}
		Step1();
		Home(metik);  // Здесь metik.lose может стать 1
		skip('R', 'r');
		if (metik.lose == 1) {  // Проверяем проигрыш ТОЛЬКО после Home()
			endpart(metik);
			continue;
		}
		Step2(metik);
		fight(metik);   // Внутри fight() metik.lose может измениться
		Step3(metik);
		if (metik.lose == 1) {  // Проверяем проигрыш после боя
			endpart(metik);
			continue;
		}
		EnglishLesson(metik);  // Эти этапы выполняются 
		Dream(metik);          // только если нет проигрыша

		endpart(metik);  // Финальная концовка
	}
	return 0;
}