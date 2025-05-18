#pragma once
#include <iostream>
#include "Structs.h"
#include "AllUnit.h"
void clearscreen();//очистка экрана используется в битве с босом
int fightmenu( int& hb, std::string& healthboss, int& agro, player& metik);
int pianogame(piano a1, int numattac);//механника "пианино"
int pianoplayer(int key,  int y, int& meaning, bool& egor);//нажатие клавиш игроком