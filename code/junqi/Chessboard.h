//Chessboard.h
//hyn0027

#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Chess.h"

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <QString>
#include <QDebug>
#include <vector>

const int n = 12 + 3;
const int m = 5 + 3;

class Chessboard {
private:
    int node_type[n][m]; //0为兵站 1为行营
    Chess* my_chess[n][m];
    int graph[n][m][n][m];//0不连通 1为公路 2为铁路
    bool dfs_vis[n][m];
    bool can_eat[n][n];
    int left_dilei[2] = {3, 3};
public:
    Chessboard(int x = 0);
    bool turn_over(int x, int y);
    QString get_msg(int x, int y);
    bool empty(int x, int y);
    void set_chess(int x, int y, int tp, int who);
    int get_whose(int x, int y);
    int get_type(int x, int y);
    void go_chess(int x1, int y1, int x2, int y2);
    void dfs(int sx, int sy, int tx, int ty);
    bool is_xingying(int x, int y);
    bool can_move(int x1, int y1, int x2, int y2);
    bool isvisible(int x, int y);
    int node(int x, int y);
};

#endif // CHESSBOARD_H
