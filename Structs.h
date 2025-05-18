#pragma once

struct player {
    int ivent[5]{ 1,1,1,1,1 };
    int dreamkey[8]{ 0,0,0,0,0,0,0,0 };
    int lose = 0;
    int carma=0;
    int boss=0;
    int egorend = 0;
    int eng=0;
};

struct piano {
    int key = 0;
    int y = 1;
    void move();
};