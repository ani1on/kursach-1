#pragma once

struct player {
    int ivent[10]{ 1,1,1,1,1,1,1,1,1,1 };
    int dreamkey[8]{ 0,0,0,0,0,0,0,0 };
    int lose = 0;
    int carma;
    int boss;
    int egorend = 0;
    int eng;
};

struct piano {
    int key = 0;
    int y = 1;
    void move();
};