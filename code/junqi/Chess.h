//chess.h
//hyn0027

#ifndef CHESS_H
#define CHESS_H

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

class Chess {
private:
    bool visible;
    int type;
    int whose;//0 red 1 blue
    //11地雷 10军旗 9炸弹 8司令 7军长 6师长 5旅长 4团长 3营长 2连长 1排长 0工兵
public:
    Chess(int tp, int who);
    bool isvisible();
    int get_type();
    int get_whose();
    void disclose();
};

#endif // CHESS_H
