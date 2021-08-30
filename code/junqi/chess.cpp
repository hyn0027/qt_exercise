//Chess.cpp
//hyn0027

#include "Chess.h"

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

Chess::Chess(int tp, int who) {
    type = tp;
    whose = who;
    visible = false;
}

bool Chess::isvisible() {
    return visible;
}

int Chess::get_type() {
    return type;
}

int Chess::get_whose() {
    return whose;
}

void Chess::disclose() {
    visible = true;
}
