#include "HousePart.h"
using namespace std;
void Home(player& metik) {//мини игра дом

	int x = 30, y = 7;
	cout << R"(
################################_______________##################################
###############################/_______/______/######=================###########
# /  *   \ | {________} |\                         /   &           MM   \      ##
# |  W   | |============|\                         |          +    UU   |      ##
# \______/ |            |                          |  EE          -     |      ##
#          |            |                          |  EE                |      ##
#          |            |                          \____________________/      ##
#          |            |\                           \\              \\        ##
#          |____________|\                                                     ##
#                                                                            /|##
#                                                                           | |##
#                                                                           | |##
#                                                                           | |##
#                                                                           |/ ##
#                                                                              ##
#                                                                              ##
#                                                                              ##
#                                                                              ##
#                                    __________________________________________##
#                                   /+      /+            /+          /+       ##
#                                  |===========================================##
#                   _________.     |:::::::::::::::::::::::::::::::::::::::::::##
#                  /        /      |:::::::::::::::::::::::::::::::::::::::::::##
##################/+       /#####################################################
#################/________/######################################################


)";
	cout << R"(

)";
	SetCursorPosition(90, 14);
	cout << "Задание:";
	SetCursorPosition(90, 15);
	cout << "Соберите Метика в универ!";
	SetCursorPosition(90, 16);
	cout << "Для эт ого взаимодействуйте с окружением.";
	int px = x, py = y;
	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {

		if ((GetAsyncKeyState('W') & 0x8000)) {
			moveStep(x, y, 'W');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('A') & 0x8000)) {
			moveStep(x, y, 'A');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('D') & 0x8000)) {
			moveStep(x, y, 'D');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}

		if ((GetAsyncKeyState('S') & 0x8000)) {
			moveStep(x, y, 'S');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('E') & 0x8000)) {
			if ((y < 12)) {//тумбочка, кровать, окно, стол
				if ((x < 10)) {
					if (trig[0]) {
						SetCursorPosition(1, 30);
						cout << R"(Это твоя тумбочка, на ней стоит искуственный цветочек красного цвета...)";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << R"(Ты взял с тумбочки телефон и 10 рублей, возможно этих денег как раз хватит перекусить в универе.)";
						skip('R', 'r');
						metik.carma++;
						trig[0] = 0;
						metik.ivent[0] = 0;
					}
					else {
						SetCursorPosition(1, 30);
						cout << R"(Вы уже достаточно осмотрели тумбочку, кроме цветочка на ней ничего нет.)";
						SetCursorPosition(1, 31);
						cout << R"(Она выглядит пусто, похоже, улицы города в 4 утра более наполнены.)";
						skip('R', 'r');
					}
					SetCursorPosition(1, 30);
					cout << R"(                                                                                     
                                                                                                                            )";
				}
				if ((x > 9) && (x < 28) && trig[1]) {
					SetCursorPosition(1, 30);
					cout << R"(Это маленькая кроватка для БОЛЬШОГО мужчины, которым ты и являешься.)";
					skip('R', 'r');
					SetCursorPosition(1, 31);
					cout << R"(Такая мягкая. Приятный приглушенный свет, пытающийся пробиться через шторы говорит тебе лечь на кровать и не идти на пары...)";
					skip('R', 'r');
					SetCursorPosition(1, 30);
					cout << R"(                                                                                                                                
                                                                                                                            )";

					SetCursorPosition(1, 30);
					cout << R"(У тебя начали закрадваться сомнения, стоит ли. Что ты выберешь?)";
					SetCursorPosition(1, 31);
					cout << "Лечь";
					SetCursorPosition(1, 32);
					cout << "Не ложиться";
					SetCursorPosition(1, 33);
					int a = 1;
					solution(32, 31, 0, a, 1);
					if (a == 1) {
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                 
                                                             )";
						SetCursorPosition(1, 30);
						cout << "Вы легли спать и почти сразу уснули, видимо, это было не плохое решение...";
						metik.lose = 1;
						key = 0;
						skip('R', 'r');
						system("color 07");
						StopMusic();
						return;

					}
					else {
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                 
                                                             )";
						SetCursorPosition(1, 30);
						cout << "Все таки лучше стоит сходить на пары, потом проблем много будет.";
						SetCursorPosition(1, 31);
						if (metik.ivent[4] == 0) {
							cout << "Вы поправили кровать, что б выглядела более ровной.";
						}
						else {
							metik.carma++;
							cout << "Вы внимательно просмотрели кровать и нашли 1 рубль, который скорее всего выпал вчера вечером из брюк.";
						}
						skip('R', 'r');
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                  
                                                                   )";
					}
					a = 1;
					metik.ivent[4] = 0;
				}
				if ((x > 27) && (x < 37)) {
					if (trig[2]) {
						SetCursorPosition(1, 30);
						cout << "Окно...";
						skip('R', 'r');
						cout << "Погода достаточно хороша, возможно это знак.";
						skip('R', 'r');
						cout << "Ветра нет, светит солнце.";
						SetCursorPosition(1, 31);
						cout << "Единственное, что портит красоту этого вида - серые дома.";
						skip('R', 'r');
						cout << "Птички прыгают по дереву.";
						skip('R', 'r');
						cout << "Все же хватит смотреть в окно, надо идти.";
						SetCursorPosition(1, 32);
						cout << "На подоконнике стоял кактус, рядом с ним лежала тетрадь, вы решили ее взять.";
						metik.carma++;
						skip('R', 'r');
					}
					else {
						SetCursorPosition(1, 30);
						cout << "И снова окно...";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "Что вы еще хотите там увидить?";
						skip('R', 'r');
						SetCursorPosition(1, 32);
						cout << "Вам больше не интересно смотреть на соседний дом";

						skip('R', 'r');
					}
					SetCursorPosition(1, 30);
					cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                
                                                                                                                                       )";
					trig[2] = 0;
					metik.ivent[1] = 0;
				}
				if ((x > 45)) {
					if (trig[7]) {
						SetCursorPosition(1, 30);
						cout << "Ты решил просмотреть стол еще раз.";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "Ты нашел ключ, который запал за шуфлядку!";
						metik.carma++;
						metik.ivent[5] = 0;
						trig[7] = 0;
					}
					else {
						if (trig[3]) {
							SetCursorPosition(1, 30);
							cout << "Это твой стол, на нем как всегда порядок, все лежит на местах.";
							skip('R', 'r');
							cout << "На столе лежат тетрадки, но все нужные на сегодня у тебя в портфеле.";
							SetCursorPosition(1, 31);
							cout << "Вот кстати и он!";
							skip('R', 'r');
							cout << "Ты наклоняешься под стол достать свой портфель.";
							skip('R', 'r');
							cout << "Он выглядит каким-то не полным, ну и ладно.";
							metik.carma++;
							trig[3] = 0;
						}
						else {
							SetCursorPosition(1, 30);
							cout << "Это стол.";
							skip('R', 'r');
						}
					}
					SetCursorPosition(1, 30);
					skip('R', 'r');
					cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                
                                                                                                                                       )";
					metik.ivent[3] = 0;

				}
			}
			if ((y > 13)) {//угол, дверь, шкаф
				if ((x < 2) && trig[4]) {
					SetCursorPosition(1, 30);
					cout << R"(Это угол...)";
					skip('R', 'r');
					cout << R"(Просто угол, который навивает вам въетнамские флшбэки о вашем детстве.)";
					skip('R', 'r');
					SetCursorPosition(1, 31);
					cout << R"(Тут вы стояли и за сломаную дверь, и за плохое поведение, и за первую сигарету.)";
					skip('R', 'r');
					cout << R"(С кем не бывает?)";
					skip('R', 'r');
					SetCursorPosition(1, 30);
					trig[4] = 0;
					metik.carma++;
					cout << R"(                                                                                     
                                                                                                                            )";
				}
				if ((x > 15) && (x < 30)) {
					SetCursorPosition(1, 30);
					cout << R"(Дверь.)";
					skip('R', 'r');
					cout << R"(За ней скрывается злой и жестокий внешний мир.)";
					skip('R', 'r');
					if (metik.ivent[2]) {
						cout << "Но все же ты чувствуешь себя не очень, ведь в одних трусах идти не круто.";
						skip('R', 'r');
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                 )";
					}
					else {
						cout << "Так не хочется уходить, надо подумать, стоит ли?";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "На двери весит металический дорожный знак, почему именно на двери? Догадок нет но он тут.";
						SetCursorPosition(1, 30);
						skip('R', 'r');
						cout << R"(                                                                                                                                
                                                                                                                            )";

						SetCursorPosition(1, 30);
						cout << R"(Ну все, не думаем о знаках, думаем о том, что более важно. Что ты выберешь?)";
						SetCursorPosition(1, 31);
						cout << "Выйти";
						SetCursorPosition(1, 32);
						cout << "Остаться";
						SetCursorPosition(1, 33);
						int a = 1;
						solution(32, 31, 0, a, 1);
						if (a == 1) {
							SetCursorPosition(1, 30);
							cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                 
                                                             )";
							SetCursorPosition(1, 30);
							cout << "Дверь открылась, назад пути нет.";
							skip('R', 'r');
							metik.lose = 0;
							key = 0;
						}
						else {
							trig[7] = 1;
							SetCursorPosition(1, 30);
							cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                 
                                                             )";
							SetCursorPosition(1, 30);
							cout << "Что-то забыл, посмотри еще.";
							SetCursorPosition(1, 31);
							cout << "Ты решил более тчательно осмотреться.";
							skip('R', 'r');
							SetCursorPosition(1, 30);
							cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                  
                                                                   )";
						}
						a = 1;

					}
				}
				if ((x > 29)) {
					if (trig[5]) {
						SetCursorPosition(1, 30);
						cout << "Огромный советсий шкаф, в котором лежит куча разной всячины помимо одежды.";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "Ты берешь свой любимый худи, стилевые джинсы и куртку.";
						skip('R', 'r');
						cout << " Выглядишь шикарно, как и всегда.";
						SetCursorPosition(1, 32);
						cout << "На полке лежало 5 рублей...";
						skip('R', 'r');
						cout << "Неплохой бонус ваших поисков.";
						skip('R', 'r');
						cout << "Вроде все.";
						SetCursorPosition(1, 33);
						cout << "Ты закрывешь шкаф, не желая рыться в нем.";
						metik.carma++;
						metik.ivent[2] = 0;
					}
					else {
						SetCursorPosition(1, 30);
						cout << "Вновь этот старый шкаф.";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "Вы осматриваете его тчательнее";
						skip('R', 'r');
						SetCursorPosition(1, 32);
						cout << "Как неожиданно, вы ничего не нашли";
					}
					SetCursorPosition(1, 30);
					skip('R', 'r');
					cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                    
                                                                                                                                       
                                                                                                                             )";
					trig[5] = 0;

				}
			}
			//зеркало
			if ((y > 8) && (y < 13) && (x > 55)) {
				if (trig[6]) {
					SetCursorPosition(1, 30);
					cout << "Зекало, в нем ТЫ.";
					skip('R', 'r');
					SetCursorPosition(1, 31);
					cout << "Волосы растрепаны, но сейчас это называется стильной прической.";
					metik.carma++;
				}
				else {
					SetCursorPosition(1, 30);
					cout << "Зеркало, в нем вы.";
				}
				SetCursorPosition(1, 30);
				skip('R', 'r');
				cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                    
                                                                                                                                       
                                                                                                                             )";
				trig[6] = 0;
			}
		}


		Sleep(50);

	}
	system("color 0F");
	system("cls");
}
void Room1(player& metik) {
	system("color 03");
	int x = 30, y = 8;
	cout << R"(
################################_______________##################################
###############################/_______/______/######=================###########
# /  *   \ | {________} |\                         /   &           MM   \      ##
# |  W   | |============|\                         |          +    UU   |      ##
# \______/ |            |                          |  EE          -     |      ##
#          |            |                          |  EE                |      ##
#          |            |                          \____________________/      ##
#          |            |\                           \\              \\        ##
#          |____________|\                                                     ##
#                                                                            /|##
#                                                                           | |##
#                                                                           | |##
#                                                                           | |##
#                                                                           |/ ##
#                                                                              ##
#                                                                              ##
#                                                                              ##
#                                                                              ##
#                                    __________________________________________##
#                                   /+      /+            /+          /+       ##
#                                  |===========================================##
#                   _________.     |:::::::::::::::::::::::::::::::::::::::::::##
#                  /        /      |:::::::::::::::::::::::::::::::::::::::::::##
##################/+       /#####################################################
#################/________/######################################################
)";
	int px = x, py = y;
	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {

		if ((GetAsyncKeyState('W') & 0x8000)) {
			moveStep(x, y, 'W');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('A') & 0x8000)) {
			moveStep(x, y, 'A');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('D') & 0x8000)) {
			moveStep(x, y, 'D');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}

		if ((GetAsyncKeyState('S') & 0x8000)) {
			moveStep(x, y, 'S');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('E') & 0x8000)) {
			int a = 1;
			if ((y < 12)) {//тумбочка, кровать, окно, стол
				if ((x < 10)) {
					if (trig[0]) {
						SetCursorPosition(1, 30);
						cout << R"(Это твоя тумбочка, на нее мрачно падает свет.)";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << R"(Такое чувство, как будто с ней что-то не так.)";
						skip('R', 'r');
						SetCursorPosition(1, 32);
						cout << "На нем лежал \033[31mключ\033[36m.";
						metik.dreamkey[7] = 1;
						skip('R', 'r');
						metik.carma++;
					}
					else {
						SetCursorPosition(1, 30);
						cout << R"(Один взгляд на эту тумбочку тебя пугает.)";
						skip('R', 'r');
					}
					SetCursorPosition(1, 30);
					cout << R"(                                                                                     
                                                                            
                                                                                                                            )";
				}
				if ((x > 9) && (x < 28) && trig[1]) {
					SetCursorPosition(1, 30);
					cout << R"(Это кровать, после твоего пробуждения она выглядит небрежно.)";
					skip('R', 'r');
					SetCursorPosition(1, 31);
					cout << R"(Лучи лунного света падают на нее, у тебя плохое ощущение.)";
					skip('R', 'r');
					SetCursorPosition(1, 30);
					cout << R"(                                                                                                                                
                                                                                                                            )";

					SetCursorPosition(1, 30);
					cout << R"(Такое ощущение, что под ней кто-то есть...)";
					SetCursorPosition(1, 31);
					cout << "Проверить - 1";
					SetCursorPosition(1, 32);
					cout << "Не проверять - 2";
					SetCursorPosition(1, 33);
					solution(32, 31, 0, a, 1);
					if (a == 1) {
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                 
                                                             )";
						SetCursorPosition(1, 30);
						cout << "Ты наклоняешься посмотреть что под ней...";
						skip('R', 'r');
						if (!metik.dreamkey[2]) {
							SetCursorPosition(1, 31);
							cout << "В самом углу лежит ключ.";
							metik.dreamkey[2] = 1;
						}
						else {
							SetCursorPosition(1, 31);
							cout << "Только пыль...";
						}
						skip('R', 'r');
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                            )";

					}
					else {
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                 
                                                             )";
						SetCursorPosition(1, 30);
						cout << "Страх не дает тебе это сделать.";
						SetCursorPosition(1, 31);
						if (trig[4]) {
							cout << "Ложиться на нее ты тоже не хочешь.";
						}
						else {
							metik.carma++;
							cout << "\033[31mС чего такая тревожность?\033[36m";
						}
						skip('R', 'r');
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                 
                                                                                                                  
                                                                   )";
					}


				}
				if ((x > 27) && (x < 37)) {
					if (trig[2]) {
						SetCursorPosition(1, 30);
						cout << "Окно...";
						skip('R', 'r');
						cout << "В нем глухая темнота. ";
						skip('R', 'r');
						cout << "Это очень странно.";
						metik.carma++;
						skip('R', 'r');
					}
					else {
						SetCursorPosition(1, 30);
						cout << "\033[31mНе смотри туда.\033[36m";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						skip('R', 'r');
					}
					SetCursorPosition(1, 30);
					cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                
                                                                                                                                       )";
					trig[2] = 0;
				}
				if ((x > 45)) {
					if (trig[7]) {
						SetCursorPosition(1, 30);
						cout << "На столе есть какая-то надпись...";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "\033[31mБЕГИ...\033[36m";
						if (!metik.dreamkey[3]) {
							SetCursorPosition(1, 32);
							cout << "Так же на столе лежал ключ.";
							skip('R', 'r');
							metik.dreamkey[3] = 1;
						}
						metik.carma++;
						trig[7] = 0;
					}
					else {
						if (trig[3]) {
							SetCursorPosition(1, 30);
							cout << "Стол.";
							skip('R', 'r');
							SetCursorPosition(1, 31);
							cout << "Такое чувство, как будто бордак на нем должен выглядить не так.";
							skip('R', 'r');
							metik.carma++;
							trig[3] = 0;
						}
						else {
							SetCursorPosition(1, 30);
							cout << "Это стол.";
							skip('R', 'r');
						}
					}
					SetCursorPosition(1, 30);
					skip('R', 'r');
					cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                
                                                                                                                                       )";
					metik.ivent[3] = 0;

				}
			}
			if ((y > 15)) {//угол, дверь, шкаф
				if ((x > 15) && (x < 30)) {
					SetCursorPosition(1, 30);
					cout << R"(Дверь.)";
					skip('R', 'r');
					cout << R"(Ты преоткрываешь ее.)";
					skip('R', 'r');
					cout << "   ...";
					skip('R', 'r');
					SetCursorPosition(1, 31);
					cout << "Подул сквозняк.";
					SetCursorPosition(1, 30);
					skip('R', 'r');
					cout << R"(                                                                                                                                
                                                                                                                           )";
					SetCursorPosition(1, 30);
					cout << R"(Страх подкосил твои ноги.)";
					SetCursorPosition(1, 31);
					cout << "\033[31mВЫЙТИ - 1\033[36m";
					SetCursorPosition(1, 32);
					cout << "Остаться - 2";
					SetCursorPosition(1, 33);
					
					solution(32, 31, 0, a, 1);
					if (a == 1) {
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                              
                                                                                                                 
                                                             )";
						SetCursorPosition(1, 30);
						cout << "Дверь открылась.";
						skip('R', 'r');
						key = 0;
					}
					else {
						trig[7] = 1;
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                
                                                                                                                 
                                                             )";
						SetCursorPosition(1, 30);
						cout << "Пожалуй лучше остаться.";
						SetCursorPosition(1, 31);
						cout << "Страшно туда идти.";
						skip('R', 'r');
						SetCursorPosition(1, 30);
						cout << R"(                                                                                                                                
                                                                                                                                
                                                                                                                  
                                                                   )";
					}


				}
				if ((x > 29)) {
					if (trig[5]) {
						SetCursorPosition(1, 30);
						cout << "Шкаф.";
						skip('R', 'r');
						SetCursorPosition(1, 31);
						cout << "Ты открыл его, внутри все обычно.";
						skip('R', 'r');
						metik.carma++;

					}
					else {
						SetCursorPosition(1, 30);
						cout << "\033[31mНе смотри туда.\033[36m";
						skip('R', 'r');
					}
					SetCursorPosition(1, 30);
					skip('R', 'r');
					cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                    
                                                                                                                                       
                                                                                                                             )";
					trig[5] = 0;

				}
			}
			//зеркало
			if ((y > 10) && (y < 15) && (x > 55)) {
				if (trig[6]) {
					SetCursorPosition(1, 30);
					cout << "Зекало, в нем \033[31mТЫ И КАКАЯ-ТО ТЕНЬ\033[36m.";
					skip('R', 'r');
					SetCursorPosition(1, 31);
					cout << "Ты обернулся, ничего сзади нет.";
					metik.carma++;
				}
				else {
					SetCursorPosition(1, 30);
					cout << "Зеркало, в нем \033[31mВЫ.\033[36m";
				}
				SetCursorPosition(1, 30);
				skip('R', 'r');
				cout << R"(                                                                                                                                     
                                                                                                                                            
                                                                                                                                    
                                                                                                                                       
                                                                                                                             )";
				trig[6] = 0;
				a = 1;
			}
			
		}
		Sleep(50);
	}
	system("cls");
}
void Room2(player& metik) {
	system("color 02");
	int x = 30, y = 9;
	cout << R"(                                    
   _________________________________
   |\....... _________   .....    /|
   |:\ ...   \___|___/   r....   / |
   |:.\________________(___)____/  |
   |:. |                 ~     | | |
   |:. |  _                    |.v |
   |:..| //|                   | _/|
   |:..| |||__                 |/q |
   |...| ||<__>                |   |
   |::.|  \__/                 |   |
   |::.|                       |\_ |
   |:::|         _========__   | .\|
   |:::|________//^^^^^^^^^\\__|...|
   |::/:::     ((r__________))  \..|
   |:/:::.      ~~~~~~~~~~~~~    \ |
   |/_____________________________\|

)";
	int px = x, py = y;
	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {

		if ((GetAsyncKeyState('W') & 0x8000)) {
			moveStep(x, y, 'W');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('A') & 0x8000)) {
			moveStep(x, y, 'A');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('D') & 0x8000)) {
			moveStep(x, y, 'D');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}

		if ((GetAsyncKeyState('S') & 0x8000)) {
			moveStep(x, y, 'S');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('E') & 0x8000)) {
			if ((y == 5)) {//окно, умывальник
				if ((x >= 13) && (x <= 21)) {
					if (trig[0]) {
						SetCursorPosition(80, 2);
						cout << "\033[31mОкно, в нем НИЧЕГО нет...\033[32m.";
						skip('R', 'r');
						metik.carma++;
						trig[0] = 0;
						SetCursorPosition(80, 2);
						cout << "                                                                 ";
					}
					else {
						SetCursorPosition(80, 2);
						cout << "\033[31mОтвернись...\033[32m.";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						cout << "                                                                 ";
					}
				}
				if ((x >= 23) && (x <= 27)) {
					if (trig[1]) {
						SetCursorPosition(80, 2);
						cout << "Умывальник, на нем остались красные разводы.";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						if (!metik.dreamkey[1]) {
							cout << "В нем лежал ключ, он похож на тот, что был на столе.";
							skip('R', 'r');
							metik.carma++;
							metik.dreamkey[1] = 1;
						}
						trig[1] = 0;
						SetCursorPosition(80, 2);
						cout << "                                                                 ";
					}
					else {
						SetCursorPosition(80, 2);
						cout << "\033[31mВидимо это кровь\033[32m";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						cout << "                                                                 ";
					}
				}

			}

			if ((x == 30)) {
				if ((y >= 8) && (y <= 11)) {
					SetCursorPosition(80, 2);
					cout << "\033[31mТы заходишь в комнату.\033[32m.";
					skip('R', 'r');
					system("cls");
					return;
				}
			}
			if ((y == 11) && (x >= 17) && (x <= 25)) {
				SetCursorPosition(80, 2);
				cout << "Обычная ванна.";
				skip('R', 'r');
				SetCursorPosition(80, 2);
				cout << "                                                                 ";
			}
			if ((x >= 14) && (x <= 15) && (y >= 8) && (y <= 10)) {
				SetCursorPosition(80, 2);
				cout << "Облеванный унитаз.";
				skip('R', 'r');
				SetCursorPosition(80, 2);
				cout << "                                                                 ";

			}

		}
		Sleep(50);
	}
	system("cls");
}
void Room3(player& metik) {
	system("color 08");

	SetCursorPosition(0, 17);
	cout << R"(
                                        ▏▂▌            ▍▂▎                                          
                                        ▆▄▏             ▂█▋                                         
                                       ▍██▌             ▂█▃▏                                        
                                      ▊███▋▏  ▏▍▍▍▍▎   ▏▄██▃▎                                       
                                      ▄██▅▂▁▁▅█▇▄▋▅█▇▃▊▂▂███▍                                       
                                      ▄████▅████▅▎▆███▇▇████▍                                       
                                      ▏▃████▆▃███▅▅█▆▂████▆▋▏                                       
                                        ▎▊███▇▂▉▄▇▉▉▄███▄▋                                          
                                       ▏▋▅███████▅███████▁▎                                         
                                    ▍▉▃▇████▅▆██▇▊███▄█████▄▉▋▏                                     
                         ▉▋  ▌▃▎▌▊▂▆████████████▆▃███████████▆▃▂▊▋▎▏▏▏   ▎▋                         
                       ▉▊▄▆▃▉▇█▃▊▃█████▇███████████████████████▃▉▂▂▄█▃▉▍▊▅▅▍                        
                     ▍▂█████▆████████▇▁▉████████▇▆████████▆▉▆██████▇█▆█████▄▌                       
                   ▎▂████████████████▁▂██████████▇█████████▇▊▆███████████████▄▍                     
                 ▏▊▇█████████████████▇████▆▆███████████▆█████▅█████████████████▁▏                   
                 ▂██████████████████████████████████████████████████████████████▂                   
                ▂████████████████████████████████████████████████████████████████▉                  
               ▁█████████████████████████▇▆████████████▇▄█████████████████████████▉                 
               ▁███████████████████████████▇██████████████████████████████████████▅                 
               ▁█████████████████████████████████▄█████████████████████████████▆▄█▅                 
               ▁▅█▋▅██████████████████████████████████████████████████████████▃▆ ▅▃                 
               ▍▏▅▏▌▅████████████████████████▇▄████▆▅████████████████████████▃▏▉ ▅                  
                ▎▉ ▏▂█████████████████████████████████████████████████████████▃▎ ▋                  
                  ▏▄██████████████████████████████████████████████████████████▇█▌                   
                  ▅▇▅█▇▄████████████████████████▄▅▅███████████████████████▆▌▆▇▎▂▁                   
                  ▅▉▏▇▋▏██▁▅███▆██████████████████████████████████▆▃███▉▂█▂ ▎▆ ▍▁                   
                  ▄▏ ▅ ▏▆█▏▂██▂▍██████████████████████████████████▉▏▄█▆▏▌▆▁  ▄ ▏▎                   
                     ▄  ▃▍ ▎▇▃  ▇█████████████████████████████████▌ ▏▇▋  ▄▉  ▊                      
                     ▌  ▃▍  ▃▊  ▍███▃▉██████████████████████▆▋▇██▁▏  ▊▍  ▄▎                         
                        ▃▍  ▊▋  ▏▁█▅▎▋██████████████████████▅ ▊██▍       ▌                          
                        ▉▎  ▎▏   ▉█▁ ▋██████████████████████▅ ▎██                                   
                                  ▃▆ ▋██████████████████████▅ ▊▅▍                                   
                                   ▁▎▋██████████████████████▅ ▊▍                                    
                                     ▋██████████████████████▅                                       
                                     ▋██████████████████████▅                                       
                                     ▍▆█████████████████████▊                                       
                                      ▁████████████████████▇▌                                       
                                     ▍▇████████████████████▄                                        
                                     ▏▃████████████████████▅▎                                       
                                     ▋██████████████████████▄                                       
                                     ▎▆████▂▇█████████▄▄████▊                                       
                                 ▏▊▂▄▇███▇▋ ▎▃██████▄▎ ▏▄████▆▂▉▍                                   
                                ▁██▆▅▅▂▊▌     ▋████▄     ▏▊▊▅▅▅▇█▆▋                                 
                               ▂▇▋▍▏           ▋██▆▍           ▎▍▂█▍                                
                               ▂▌              ▎▃█▊              ▏▃▍                                
                               ▎▍               ▏▎                ▋▏                                
)";
	piano a1, a2;
	int sol = pianogame(a1, a2, 5, 0);
	system("cls");
	if (sol < 1) {
		system("cls");
		return;
	}
	int x = 9, y = 9;
	cout << R"(                                                             
   __________________________________________________________
   |\ <==================================================> /|
   | \ <================================================> / |
   |  \__________________________________________________/  |
   |   |                                           ______   |
   |   |                                ###      /|      |  |
   |\_ |                                #OO#     /|  ##  |  |
   | p\|                               #######    |  __  |  |
   |   |                              ## ### ##   | }__} |  |
   |   |                             ##  #### #   | }__} |  |
   | _/|                                ## ##    \|      |  |
   |/  |                                #   #    \|______|  |
   |   |________________________________________________|   |
   |  /  <============================================>  \  |
   | /  <==============================================>  \ |
   |/______________________________________________________\|


)";

	int px = x, py = y;
	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
		if (trig[1]) {
			for (int i = 12; i > 5; i--) {
				SetCursorPosition(36, i);
				cout << "           ";
				Sleep(100);
			}
			trig[1] = 0;
		}
		if ((GetAsyncKeyState('W') & 0x8000)) {
			moveStep(x, y, 'W');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('A') & 0x8000)) {
			moveStep(x, y, 'A');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('D') & 0x8000)) {
			moveStep(x, y, 'D');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}

		if ((GetAsyncKeyState('S') & 0x8000)) {
			moveStep(x, y, 'S');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('E') & 0x8000)) {

			if ((x == 8) && (y >= 8) && (x <= 11)) {
				SetCursorPosition(80, 2);
				cout << "\033[31mТы заходишь в комнату.\033[37m.";
				skip('R', 'r');
				system("cls");
				return;
			}
			if ((x == 49) && (y >= 8) && (y <= 10)) {

				SetCursorPosition(80, 2);
				cout << "Стол... На нем лежит какаяя-то старая книга.";
				skip('R', 'r');
				SetCursorPosition(80, 4);
				cout << "В ней написано: \033[31m55661\033[37m";
				skip('R', 'r');
				SetCursorPosition(80, 6);
				cout << "Что же это значит?";
				skip('R', 'r');
				SetCursorPosition(80, 2);
				cout << R"(                                                                 )";
				SetCursorPosition(80, 4);
				cout << R"(                                                                 )";
				SetCursorPosition(80, 6);
				cout << R"(                                                                 )";


			}

		}

		Sleep(50);
	}

	system("cls");
}
void Room4(player& metik) {
	system("color 0D");
	int x = 8, y = 6;
	cout << R"(   __________________________________________________________
   |\%%%%%%%%%%%%%%%%[:::::::.........     ] %%%%%%%%%%%%%%/|
   | \%%%%%%%%%%%%%%%[_____________________]%%%%%%%%%%%%%%/:|
   |\_\_______________\     \      |      /______________/::|
   | p\|               \~    \    ~|~    /              |:::|
   |   |                \_____\____|____/               |:::|
   |   |                                                |:::|
   | _/|                                                |.::|
   |/  |                                                |.::|
   |   |                                                |.::|
   |  .|                                     _____________.:|
   |  .|                                     |mmmnnnnn:::|..|
   | ..|                                    /|nnmmmmmmmmm|..|
   | ..|                                    /|:nnmm:::mm:|..|
   | .--------\                              |::nnmmm:m::|..|
   | .|       |                              | :::nmmmm: | .|
   | .|   z   |\                             | :::nnmmm::| .|
   |..|       |\                             | : nnnnnmmm| .|
   |..|       |                              |nnnnnnnnnmm| .|
   |..|       |                              |mmmmmmmmmm:|  |
   |::|    Q  |                              |-----------|. |
   |::|  o    |/                            \|iiiiiiiiiii|. |
   |::|    o  |/                            \|{---------}|. |
   |::| O     |______________________________|{---------}|. |
   |::--------/ :::::::..........    ......  \___________/  |
   |:/::::::::::::::::::::::: ...................         \ |
   |/______________________________________________________\|

)";
	int px = x, py = y;
	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
		if ((GetAsyncKeyState('W') & 0x8000)) {
			moveStep(x, y, 'W');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('A') & 0x8000)) {
			moveStep(x, y, 'A');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('D') & 0x8000)) {
			moveStep(x, y, 'D');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}

		if ((GetAsyncKeyState('S') & 0x8000)) {
			moveStep(x, y, 'S');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('E') & 0x8000)) {

			if ((x == 8) && (y >= 4) && (y <= 7)) {
				SetCursorPosition(80, 2);
				cout << "\033[31mТы выходишь из комнату.\033[95m.";
				skip('R', 'r');
				system("cls");
				return;
			}
			if ((y == 6) && (x >= 24) && (y <= 40)) {
				if (trig[0]) {
					SetCursorPosition(80, 2);
					cout << "Новый шкаф, ты пытаешься его открыть.";
					skip('R', 'r');
					SetCursorPosition(80, 4);
					cout << "\033[31mКто-то держит дверь изнутри.\033[95m";
					skip('R', 'r');
					SetCursorPosition(80, 2);
					cout << R"(                                                                 )";
					SetCursorPosition(80, 4);
					cout << R"(                                                                 )";
					SetCursorPosition(80, 2);
					cout << "Дернуть еще? 1 - да / 2 - нет :";
					string a;
					cin >> a;
					if (a == "1") {
						SetCursorPosition(80, 4);
						cout << "Ты дергаешь за ручку.";
						skip('R', 'r');
						SetCursorPosition(80, 6);
						cout << "\033[31mКто-то шепчет внутри, как будто он желает услышать...\033[95m";
						skip('R', 'r');
					}
					else {
						if (a == "55661") {
							SetCursorPosition(80, 4);
							cout << "Шкаф открылся.";
							skip('R', 'r');
							SetCursorPosition(80, 6);
							cout << "В нем светился \033[96mКЛЮЧ СНОВИДЕНИЙ\033[95m.";
							metik.dreamkey[5] = 1;
							skip('R', 'r');
							SetCursorPosition(80, 8);
							cout << "\033[96mВозможно он рассеит ваш сон.\033[95m";
							skip('R', 'r');
						}
						else {
							SetCursorPosition(80, 4);
							cout << "\033[31mТы решил уйти.\033[95m";

							skip('R', 'r');
						}

					}
					SetCursorPosition(80, 2);
					cout << R"(                                                                         )";
					SetCursorPosition(80, 4);
					cout << R"(                                                                         )";
					SetCursorPosition(80, 6);
					cout << R"(                                                                         )";
					SetCursorPosition(80, 8);
					cout << R"(                                                                         )";
				}
			}
			if ((x == 15) && (y >= 14) && (y <= 20)) {
				if (!metik.dreamkey[4]) {
					SetCursorPosition(80, 2);
					cout << "Стол, на нем лежит ключ.";
					skip('R', 'r');
					SetCursorPosition(80, 4);
					cout << "\033[31mКлюч\033[95m";
					skip('R', 'r');
					metik.dreamkey[4] = 1;
					SetCursorPosition(80, 2);
					cout << R"(                                                                 )";
					SetCursorPosition(80, 4);
					cout << R"(                                                                 )";

				}
				else {
					SetCursorPosition(80, 2);
					cout << "Стол.";
					skip('R', 'r');
					SetCursorPosition(80, 4);
					cout << "\033[31mКлюч уже у тебя.\033[95m";
					skip('R', 'r');
					SetCursorPosition(80, 2);
					cout << R"(                                                                 )";
					SetCursorPosition(80, 4);
					cout << R"(                                                                 )";
				}
			}
			if ((x == 44) && (y >= 9) && (y <= 20)) {
				if (trig[2]) {
					SetCursorPosition(80, 2);
					cout << "Кровать.";
					skip('R', 'r');
					SetCursorPosition(80, 4);
					cout << "\033[31mПод одеялом кто-то спит.\033[95m";
					skip('R', 'r');
					SetCursorPosition(80, 2);
					cout << R"(                                                                 )";
					SetCursorPosition(80, 4);
					cout << R"(                                                                 )";
				}
				else {
					SetCursorPosition(80, 2);
					cout << "Ты поднял одеяло, там никого нет.";
					skip('R', 'r');

					SetCursorPosition(80, 2);
					cout << R"(                                                                 )";
				}
			}
		}
		Sleep(50);
	}
	system("cls");
}


void Dream(player& metik) {
	PlayMusic(L"C:/Users/Acer/source/repos/курсч 1/misc/sound1.mp3");
	system("color 01");
	SetCursorPosition(70, 25);
	cout << "...";
	skip('R', 'r');
	system("cls");
	int x = 11, y = 8;
	Corridor();
	int px = x, py = y;
	for (int key = 1, trig[8]{ 1,1,1,1,1,1,1,0 }; key;) {
		system("color 01");
		if ((GetAsyncKeyState('W') & 0x8000)) {
			moveStep(x, y, 'W');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('A') & 0x8000)) {
			moveStep(x, y, 'A');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('D') & 0x8000)) {
			moveStep(x, y, 'D');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}

		if ((GetAsyncKeyState('S') & 0x8000)) {
			moveStep(x, y, 'S');
			if ((px != x) || (py != y)) {
				clearchar(px, py);
				px = x; py = y;
			}
		}
		if ((GetAsyncKeyState('E') & 0x8000)) {
			if ((x == 9)) {//room2, картина, room1
				if ((y >= 8) && (y <= 11)) {
					if (metik.dreamkey[0]) {
						SetCursorPosition(80, 2);
						cout << "Ты заходишь в комнату.";
						skip('R', 'r');
						system("cls");
						Room2(metik);
						Corridor();
						int x = 9, y = 9;
					}
					else {
						SetCursorPosition(80, 2);
						cout << "Дверь заперта.";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						cout << "                ";
					}
				}
				if ((y >= 15) && (y <= 19)) {
					if (trig[0]) {
						SetCursorPosition(80, 2);
						cout << "\033[31mТы смотришь на картину, она смотрит на тебя.\033[34m";
						skip('R', 'r');
						trig[0] = 0;
						SetCursorPosition(80, 2);
						cout << "                                                                 ";
					}
					else {
						SetCursorPosition(80, 2);
						cout << "\033[31mВзгляд с картины пронзает тебя насквозь.\033[34m";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						cout << "                                                                 ";
					}
				}
				if ((y >= 24) && (y <= 27)) {
					if (metik.dreamkey[1]) {
						SetCursorPosition(80, 2);
						cout << "Ты заходишь в комнату.";
						skip('R', 'r');
						system("cls");
						Room1(metik);
						Corridor();
						int x = 9, y = 25;
					}
					else {
						SetCursorPosition(80, 2);
						cout << "Дверь заперта.";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						cout << "                ";
					}

				}
			}
			if ((y == 8) || (y == 9)) {//стол
				if ((x >= 18) && (x <= 29) && trig[1]) {
					SetCursorPosition(80, 2);
					cout << "Стол, на нем стоит кружка, в ней какая-то красная жидость.";
					skip('R', 'r');
					SetCursorPosition(80, 3);
					cout << "Ты берешь кружку, она соскальзывает с рук и разбивается.";
					skip('R', 'r');
					SetCursorPosition(80, 4);
					cout << "Вместе с осколками на полу лежал ключ.";
					skip('R', 'r');

					metik.carma++;
					trig[1] = 0;
					metik.dreamkey[0] = 1;
					SetCursorPosition(80, 2);
					cout << "                                                                 ";
					SetCursorPosition(80, 3);
					cout << "                                                                 ";
					SetCursorPosition(80, 4);
					cout << "                                                                 ";
				}
				else {
					SetCursorPosition(80, 2);
					cout << "\033[31mВ окне ничего нет.\033[34m";
					skip('R', 'r');
					SetCursorPosition(80, 2);
					cout << "                                                                 ";
				}
			}
			//room3,room4
			if ((x == 39)) {
				if ((y >= 8) && (y <= 11)) {
					if (metik.dreamkey[4]) {
						SetCursorPosition(80, 2);
						cout << "Ты заходишь в комнату.";
						skip('R', 'r');
						system("cls");
						Room3(metik);
						Corridor();
						int x = 39, y = 9;
					}
					else {
						SetCursorPosition(80, 2);
						cout << "Дверь заперта.";
						skip('R', 'r');
						SetCursorPosition(80, 2);
						cout << "                ";
					}

				}
				if ((y >= 21) && (y <= 24)) {
					if (metik.dreamkey[2] && metik.dreamkey[3]) {
						SetCursorPosition(80, 2);
						cout << "Ты заходишь в комнату.";
						skip('R', 'r');
						system("cls");
						Room4(metik);
						Corridor();
						int x = 39, y = 23;
					}
					else {
						if (metik.dreamkey[2] ^ metik.dreamkey[3]) {
							SetCursorPosition(80, 2);
							cout << "В этой двери два замка";
							skip('R', 'r');
							SetCursorPosition(80, 3);
							cout << "Один ключ подошел, надо найти второй.";
							skip('R', 'r');
							SetCursorPosition(80, 4);
							cout << "\033[31mЧто б найти второй, выбери остаться.\033[34m";
							skip('R', 'r');
							SetCursorPosition(80, 2);
							cout << "                                           ";
							SetCursorPosition(80, 3);
							cout << "                                           ";
							SetCursorPosition(80, 4);
							cout << "                                           ";
						}
						else {
							SetCursorPosition(80, 2);
							cout << "Дверь заперта.";
							skip('R', 'r');
							SetCursorPosition(80, 2);
							cout << "                ";
						}
					}

				}
			}
			if ((x == 33) && (y >= 15) && (y <= 18)) {
				if (metik.ivent[5]) {
					SetCursorPosition(80, 2);
					cout << "\033[31mТумбочка, она на замке.\033[34m.";
					skip('R', 'r');
					SetCursorPosition(80, 2);
					cout << "                                                                 ";
				}
				else {
					SetCursorPosition(80, 2);
					cout << "Тумбочка заперта, но, видимо, у вас есть ключ.";
					skip('R', 'r');
					SetCursorPosition(80, 3);
					cout << "\033[31mВ тумбочке ключ, ты на правильном пути.\033[34m.";
					skip('R', 'r');
					metik.egorend = 1;
					SetCursorPosition(80, 2);
					cout << "                                                                 ";
					SetCursorPosition(80, 3);
					cout << "                                                                 ";
				}
			}
			if ((y == 28) && (x >= 19) && (x <= 25)) {
				if (metik.dreamkey[7]) {
					SetCursorPosition(80, 2);
					cout << "Ты заходишь в комнату.";
					skip('R', 'r');
					system("cls");
					return;
				}
				else {
					SetCursorPosition(80, 2);
					cout << "Дверь заперта.";
					skip('R', 'r');
					SetCursorPosition(80, 2);
					cout << "                ";
				}

			}
		}
		Sleep(50);
	}
	system("cls");
}