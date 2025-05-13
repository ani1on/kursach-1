#pragma once
#include <iostream>
#include "Structs.h"
#include "AllUnit.h"
void clearscreen();//очистка экрана используется в битве с босом
int fightmenu(int& hp, int& hb, std::string& healthboss, std::string& healthplayer, int& agro, player& metik);
int pianogame(piano a1, piano a2, int numattac, int agro);//механника "пианино"
int pianoplayer(int key, int key1, int y, int& meaning, bool& egor);//нажатие клавиш игроком