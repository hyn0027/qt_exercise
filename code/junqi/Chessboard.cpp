//Chessboard.cpp
//hyn0027

#include "Chessboard.h"

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <ctime>

Chessboard::Chessboard(int x) {
    //nodetype initialization
    memset(node_type, 0, sizeof(node_type));\
        node_type[3][2] = node_type[3][4]
            = node_type[4][3] = node_type[5][2]
            = node_type[5][4] = node_type[8][2]
            = node_type[8][4] = node_type[9][3]
            = node_type[10][2] = node_type[10][4] = 1;\

    //graph initialization
    memset(graph, 0, sizeof(graph));
        graph[1][1][1][2] = 1;
        graph[1][1][2][1] = 1;
        graph[1][2][1][1] = 1;
        graph[1][2][1][3] = 1;
        graph[1][2][2][2] = 1;
        graph[1][3][1][2] = 1;
        graph[1][3][1][4] = 1;
        graph[1][3][2][3] = 1;
        graph[1][4][1][3] = 1;
        graph[1][4][1][5] = 1;
        graph[1][4][2][4] = 1;
        graph[1][5][1][4] = 1;
        graph[1][5][2][5] = 1;
        graph[2][1][1][1] = 1;
        graph[2][1][2][2] = 2;
        graph[2][1][3][2] = 1;
        graph[2][1][3][1] = 2;
        graph[2][2][2][1] = 2;
        graph[2][2][1][2] = 1;
        graph[2][2][2][3] = 2;
        graph[2][2][3][2] = 1;
        graph[2][3][2][2] = 2;
        graph[2][3][1][3] = 1;
        graph[2][3][2][4] = 2;
        graph[2][3][3][4] = 1;
        graph[2][3][3][3] = 1;
        graph[2][3][3][2] = 1;
        graph[2][4][2][3] = 2;
        graph[2][4][1][4] = 1;
        graph[2][4][2][5] = 2;
        graph[2][4][3][4] = 1;
        graph[2][5][2][4] = 2;
        graph[2][5][1][5] = 1;
        graph[2][5][3][5] = 2;
        graph[2][5][3][4] = 1;
        graph[3][1][2][1] = 2;
        graph[3][1][3][2] = 1;
        graph[3][1][4][1] = 2;
        graph[3][2][3][1] = 1;
        graph[3][2][2][1] = 1;
        graph[3][2][2][2] = 1;
        graph[3][2][2][3] = 1;
        graph[3][2][3][3] = 1;
        graph[3][2][4][3] = 1;
        graph[3][2][4][2] = 1;
        graph[3][2][4][1] = 1;
        graph[3][3][3][2] = 1;
        graph[3][3][2][3] = 1;
        graph[3][3][3][4] = 1;
        graph[3][3][4][3] = 1;
        graph[3][4][3][3] = 1;
        graph[3][4][2][3] = 1;
        graph[3][4][2][4] = 1;
        graph[3][4][2][5] = 1;
        graph[3][4][3][5] = 1;
        graph[3][4][4][5] = 1;
        graph[3][4][4][4] = 1;
        graph[3][4][4][3] = 1;
        graph[3][5][3][4] = 1;
        graph[3][5][2][5] = 2;
        graph[3][5][4][5] = 2;
        graph[4][1][3][1] = 2;
        graph[4][1][3][2] = 2;
        graph[4][1][4][2] = 1;
        graph[4][1][5][2] = 1;
        graph[4][1][5][1] = 2;
        graph[4][2][4][1] = 1;
        graph[4][2][3][2] = 1;
        graph[4][2][4][3] = 1;
        graph[4][2][5][2] = 1;
        graph[4][3][4][2] = 1;
        graph[4][3][3][2] = 1;
        graph[4][3][3][3] = 1;
        graph[4][3][3][4] = 1;
        graph[4][3][4][4] = 1;
        graph[4][3][5][4] = 1;
        graph[4][3][5][3] = 1;
        graph[4][3][5][2] = 1;
        graph[4][4][4][3] = 1;
        graph[4][4][3][4] = 1;
        graph[4][4][4][5] = 1;
        graph[4][4][5][4] = 1;
        graph[4][5][4][4] = 1;
        graph[4][5][3][4] = 1;
        graph[4][5][3][5] = 2;
        graph[4][5][5][5] = 2;
        graph[4][5][5][4] = 1;
        graph[5][1][4][1] = 2;
        graph[5][1][5][2] = 1;
        graph[5][1][6][1] = 2;
        graph[5][2][5][1] = 1;
        graph[5][2][4][1] = 1;
        graph[5][2][4][2] = 1;
        graph[5][2][4][3] = 1;
        graph[5][2][5][3] = 1;
        graph[5][2][6][3] = 1;
        graph[5][2][6][2] = 1;
        graph[5][2][6][1] = 1;
        graph[5][3][5][2] = 1;
        graph[5][3][4][3] = 1;
        graph[5][3][5][4] = 1;
        graph[5][3][6][3] = 1;
        graph[5][4][5][3] = 1;
        graph[5][4][4][3] = 1;
        graph[5][4][4][4] = 1;
        graph[5][4][4][5] = 1;
        graph[5][4][5][5] = 1;
        graph[5][4][6][5] = 1;
        graph[5][4][6][4] = 1;
        graph[5][4][6][3] = 1;
        graph[5][5][5][4] = 1;
        graph[5][5][4][5] = 2;
        graph[5][5][6][5] = 2;
        graph[6][1][5][1] = 2;
        graph[6][1][5][2] = 1;
        graph[6][1][6][2] = 2;
        graph[6][1][7][1] = 2;
        graph[6][2][6][1] = 2;
        graph[6][2][5][2] = 1;
        graph[6][2][6][3] = 2;
        graph[6][3][6][2] = 2;
        graph[6][3][5][2] = 1;
        graph[6][3][5][3] = 1;
        graph[6][3][5][4] = 1;
        graph[6][3][6][4] = 2;
        graph[6][3][7][3] = 2;
        graph[6][4][6][3] = 2;
        graph[6][4][5][4] = 1;
        graph[6][4][6][5] = 2;
        graph[6][5][6][4] = 2;
        graph[6][5][5][4] = 1;
        graph[6][5][5][5] = 2;
        graph[6][5][7][5] = 2;
        graph[7][1][6][1] = 2;
        graph[7][1][7][2] = 2;
        graph[7][1][8][2] = 1;
        graph[7][1][8][1] = 2;
        graph[7][2][7][1] = 2;
        graph[7][2][7][3] = 2;
        graph[7][2][8][2] = 1;
        graph[7][3][7][2] = 2;
        graph[7][3][6][3] = 2;
        graph[7][3][7][4] = 2;
        graph[7][3][8][4] = 1;
        graph[7][3][8][3] = 1;
        graph[7][3][8][2] = 1;
        graph[7][4][7][3] = 2;
        graph[7][4][7][5] = 2;
        graph[7][4][8][4] = 1;
        graph[7][5][7][4] = 2;
        graph[7][5][6][5] = 2;
        graph[7][5][8][5] = 2;
        graph[7][5][8][4] = 1;
        graph[8][1][7][1] = 2;
        graph[8][1][8][2] = 1;
        graph[8][1][9][1] = 2;
        graph[8][2][8][1] = 1;
        graph[8][2][7][1] = 1;
        graph[8][2][7][2] = 1;
        graph[8][2][7][3] = 1;
        graph[8][2][8][3] = 1;
        graph[8][2][9][3] = 1;
        graph[8][2][9][2] = 1;
        graph[8][2][9][1] = 1;
        graph[8][3][8][2] = 1;
        graph[8][3][7][3] = 1;
        graph[8][3][8][4] = 1;
        graph[8][3][9][3] = 1;
        graph[8][4][8][3] = 1;
        graph[8][4][7][3] = 1;
        graph[8][4][7][4] = 1;
        graph[8][4][7][5] = 1;
        graph[8][4][8][5] = 1;
        graph[8][4][9][5] = 1;
        graph[8][4][9][4] = 1;
        graph[8][4][9][3] = 1;
        graph[8][5][8][4] = 1;
        graph[8][5][7][5] = 2;
        graph[8][5][9][5] = 2;
        graph[9][1][8][1] = 2;
        graph[9][1][8][2] = 1;
        graph[9][1][9][2] = 1;
        graph[9][1][10][2] = 1;
        graph[9][1][10][1] = 2;
        graph[9][2][9][1] = 1;
        graph[9][2][8][2] = 1;
        graph[9][2][9][3] = 1;
        graph[9][2][10][2] = 1;
        graph[9][3][9][2] = 1;
        graph[9][3][8][2] = 1;
        graph[9][3][8][3] = 1;
        graph[9][3][8][4] = 1;
        graph[9][3][9][4] = 1;
        graph[9][3][10][4] = 1;
        graph[9][3][10][3] = 1;
        graph[9][3][10][2] = 1;
        graph[9][4][9][3] = 1;
        graph[9][4][8][4] = 1;
        graph[9][4][9][5] = 1;
        graph[9][4][10][4] = 1;
        graph[9][5][9][4] = 1;
        graph[9][5][8][4] = 1;
        graph[9][5][8][5] = 2;
        graph[9][5][10][5] = 2;
        graph[9][5][10][4] = 1;
        graph[10][1][9][1] = 2;
        graph[10][1][10][2] = 1;
        graph[10][1][11][1] = 2;
        graph[10][2][10][1] = 1;
        graph[10][2][9][1] = 1;
        graph[10][2][9][2] = 1;
        graph[10][2][9][3] = 1;
        graph[10][2][10][3] = 1;
        graph[10][2][11][3] = 1;
        graph[10][2][11][2] = 1;
        graph[10][2][11][1] = 1;
        graph[10][3][10][2] = 1;
        graph[10][3][9][3] = 1;
        graph[10][3][10][4] = 1;
        graph[10][3][11][3] = 1;
        graph[10][4][10][3] = 1;
        graph[10][4][9][3] = 1;
        graph[10][4][9][4] = 1;
        graph[10][4][9][5] = 1;
        graph[10][4][10][5] = 1;
        graph[10][4][11][5] = 1;
        graph[10][4][11][4] = 1;
        graph[10][4][11][3] = 1;
        graph[10][5][10][4] = 1;
        graph[10][5][9][5] = 2;
        graph[10][5][11][5] = 2;
        graph[11][1][10][1] = 2;
        graph[11][1][10][2] = 1;
        graph[11][1][11][2] = 2;
        graph[11][1][12][1] = 1;
        graph[11][2][11][1] = 2;
        graph[11][2][10][2] = 1;
        graph[11][2][11][3] = 2;
        graph[11][2][12][2] = 1;
        graph[11][3][11][2] = 2;
        graph[11][3][10][2] = 1;
        graph[11][3][10][3] = 1;
        graph[11][3][10][4] = 1;
        graph[11][3][11][4] = 2;
        graph[11][3][12][3] = 1;
        graph[11][4][11][3] = 2;
        graph[11][4][10][4] = 1;
        graph[11][4][11][5] = 2;
        graph[11][4][12][4] = 1;
        graph[11][5][11][4] = 2;
        graph[11][5][10][4] = 1;
        graph[11][5][10][5] = 2;
        graph[11][5][12][5] = 1;
        graph[12][1][11][1] = 1;
        graph[12][1][12][2] = 1;
        graph[12][2][12][1] = 1;
        graph[12][2][11][2] = 1;
        graph[12][2][12][3] = 1;
        graph[12][3][12][2] = 1;
        graph[12][3][11][3] = 1;
        graph[12][3][12][4] = 1;
        graph[12][4][12][3] = 1;
        graph[12][4][11][4] = 1;
        graph[12][4][12][5] = 1;
        graph[12][5][12][4] = 1;
        graph[12][5][11][5] = 1;

    //can_eat initialization
        can_eat[0][0] = true;
        can_eat[0][1] = false;
        can_eat[0][2] = false;
        can_eat[0][3] = false;
        can_eat[0][4] = false;
        can_eat[0][5] = false;
        can_eat[0][6] = false;
        can_eat[0][7] = false;
        can_eat[0][8] = false;
        can_eat[0][9] = true;
        can_eat[0][10] = false;
        can_eat[0][11] = true;
        can_eat[1][0] = true;
        can_eat[1][1] = true;
        can_eat[1][2] = false;
        can_eat[1][3] = false;
        can_eat[1][4] = false;
        can_eat[1][5] = false;
        can_eat[1][6] = false;
        can_eat[1][7] = false;
        can_eat[1][8] = false;
        can_eat[1][9] = true;
        can_eat[1][10] = false;
        can_eat[1][11] = false;
        can_eat[2][0] = true;
        can_eat[2][1] = true;
        can_eat[2][2] = true;
        can_eat[2][3] = false;
        can_eat[2][4] = false;
        can_eat[2][5] = false;
        can_eat[2][6] = false;
        can_eat[2][7] = false;
        can_eat[2][8] = false;
        can_eat[2][9] = true;
        can_eat[2][10] = false;
        can_eat[2][11] = false;
        can_eat[3][0] = true;
        can_eat[3][1] = true;
        can_eat[3][2] = true;
        can_eat[3][3] = true;
        can_eat[3][4] = false;
        can_eat[3][5] = false;
        can_eat[3][6] = false;
        can_eat[3][7] = false;
        can_eat[3][8] = false;
        can_eat[3][9] = true;
        can_eat[3][10] = false;
        can_eat[3][11] = false;
        can_eat[4][0] = true;
        can_eat[4][1] = true;
        can_eat[4][2] = true;
        can_eat[4][3] = true;
        can_eat[4][4] = true;
        can_eat[4][5] = false;
        can_eat[4][6] = false;
        can_eat[4][7] = false;
        can_eat[4][8] = false;
        can_eat[4][9] = true;
        can_eat[4][10] = false;
        can_eat[4][11] = false;
        can_eat[5][0] = true;
        can_eat[5][1] = true;
        can_eat[5][2] = true;
        can_eat[5][3] = true;
        can_eat[5][4] = true;
        can_eat[5][5] = true;
        can_eat[5][6] = false;
        can_eat[5][7] = false;
        can_eat[5][8] = false;
        can_eat[5][9] = true;
        can_eat[5][10] = false;
        can_eat[5][11] = false;
        can_eat[6][0] = true;
        can_eat[6][1] = true;
        can_eat[6][2] = true;
        can_eat[6][3] = true;
        can_eat[6][4] = true;
        can_eat[6][5] = true;
        can_eat[6][6] = true;
        can_eat[6][7] = false;
        can_eat[6][8] = false;
        can_eat[6][9] = true;
        can_eat[6][10] = false;
        can_eat[6][11] = false;
        can_eat[7][0] = true;
        can_eat[7][1] = true;
        can_eat[7][2] = true;
        can_eat[7][3] = true;
        can_eat[7][4] = true;
        can_eat[7][5] = true;
        can_eat[7][6] = true;
        can_eat[7][7] = true;
        can_eat[7][8] = false;
        can_eat[7][9] = true;
        can_eat[7][10] = false;
        can_eat[7][11] = false;
        can_eat[8][0] = true;
        can_eat[8][1] = true;
        can_eat[8][2] = true;
        can_eat[8][3] = true;
        can_eat[8][4] = true;
        can_eat[8][5] = true;
        can_eat[8][6] = true;
        can_eat[8][7] = true;
        can_eat[8][8] = true;
        can_eat[8][9] = true;
        can_eat[8][10] = false;
        can_eat[8][11] = false;
        can_eat[9][0] = true;
        can_eat[9][1] = true;
        can_eat[9][2] = true;
        can_eat[9][3] = true;
        can_eat[9][4] = true;
        can_eat[9][5] = true;
        can_eat[9][6] = true;
        can_eat[9][7] = true;
        can_eat[9][8] = true;
        can_eat[9][9] = true;
        can_eat[9][10] = false;
        can_eat[9][11] = true;
        can_eat[10][0] = false;
        can_eat[10][1] = false;
        can_eat[10][2] = false;
        can_eat[10][3] = false;
        can_eat[10][4] = false;
        can_eat[10][5] = false;
        can_eat[10][6] = false;
        can_eat[10][7] = false;
        can_eat[10][8] = false;
        can_eat[10][9] = false;
        can_eat[10][10] = false;
        can_eat[10][11] = false;
        can_eat[11][0] = false;
        can_eat[11][1] = false;
        can_eat[11][2] = false;
        can_eat[11][3] = false;
        can_eat[11][4] = false;
        can_eat[11][5] = false;
        can_eat[11][6] = false;
        can_eat[11][7] = false;
        can_eat[11][8] = false;
        can_eat[11][9] = false;
        can_eat[11][10] = false;
        can_eat[11][11] = false;

    if (x != 0) {
        for (int i = 1; i < 13; i++)
            for (int j = 1; j < 6; j++)
                my_chess[i][j] = nullptr;
        return;
    }
    //random to set the chess pieces
    srand(time(0));
    int left = 50;
    int needed[2][15] = {{3, 3, 3, 2, 2, 2, 2, 1, 1, 2, 1, 3}, {3, 3, 3, 2, 2, 2, 2, 1, 1, 2, 1, 3}};
    for (int i = 1, chose, pt1, pt2; i < 13; i++) {
        for (int j = 1; j < 6; j++) {
            if(node_type[i][j] == 1) {
                my_chess[i][j] = nullptr;
                continue;
            }
            chose = rand() % left + 1;
            left--;
            pt1 = pt2 = 0;
            while(needed[pt1][pt2] < chose) {
                chose -= needed[pt1][pt2];
                if (pt2 == 11) {
                    pt1 = 1;
                    pt2 = 0;
                }
                else
                    pt2++;
            }
            my_chess[i][j] = new Chess(pt2, pt1);
            needed[pt1][pt2]--;
        }
    }
}

bool Chessboard::is_xingying(int x, int y) {
    return (node_type[x][y] == 1);
}

bool Chessboard::empty(int x, int y) {
    return (my_chess[x][y] == nullptr);
}

int Chessboard::node(int x, int y) {
    return node_type[x][y];
}

QString Chessboard::get_msg(int x, int y) {
    QString ret;
    if (my_chess[x][y] == nullptr)
        ret = "-,-;";
    else
        ret = QString::number(my_chess[x][y] -> get_whose()) + "," + QString::number(my_chess[x][y] -> get_type()) + ";";
    return ret;
}

bool Chessboard::turn_over(int x, int y) {
    if (my_chess[x][y] == nullptr)  return false;
    if (my_chess[x][y] -> isvisible())  return false;
    my_chess[x][y] -> disclose();
    return true;
}

void Chessboard::set_chess(int x, int y, int tp, int who) {
    my_chess[x][y] = new Chess(tp, who);
}

int Chessboard::get_type(int x, int y) {
    if (my_chess[x][y] == nullptr)  return -1;
    return my_chess[x][y] -> get_type();
}

int Chessboard::get_whose(int x, int y) {
    if (my_chess[x][y] == nullptr)  return -1;
    return my_chess[x][y] -> get_whose();
}

void Chessboard::dfs(int sx, int sy, int tx, int ty) {
    if (dfs_vis[sx][sy])    return;
    dfs_vis[sx][sy] = 1;
    if (sx == tx && sy == ty)   return;
    if (graph[sx][sy][sx + 1][sy] == 2 && (empty(sx + 1, sy) || (sx + 1 == tx && sy == ty))) {
        dfs(sx + 1, sy, tx, ty);
        if (dfs_vis[tx][ty])    return;
    }
    if (graph[sx][sy][sx - 1][sy] == 2 && (empty(sx - 1, sy) || (sx - 1 == tx && sy == ty))) {
        dfs(sx - 1, sy, tx, ty);
        if (dfs_vis[tx][ty])    return;
    }
    if (graph[sx][sy][sx][sy + 1] == 2 && (empty(sx, sy + 1) || (sx == tx && sy + 1 == ty))) {
        dfs(sx, sy + 1, tx, ty);
        if (dfs_vis[tx][ty])    return;
    }
    if (graph[sx][sy][sx][sy - 1] == 2 && (empty(sx, sy - 1) || (sx == tx && sy - 1 == ty))) {
        dfs(sx, sy - 1, tx, ty);
        if (dfs_vis[tx][ty])    return;
    }

}

void Chessboard::go_chess(int x1, int y1, int x2, int y2) {
    if (empty(x2, y2)) {
        my_chess[x2][y2] = my_chess[x1][y1];
        my_chess[x1][y1] = nullptr;
        return;
    }
    if (get_type(x1, y1) == get_type(x2, y2)) {
        delete my_chess[x1][y1];
        delete my_chess[x2][y2];
        my_chess[x1][y1] = my_chess[x2][y2] = nullptr;
        return;
    }
    if (get_type(x1, y1) == 0 && get_type(x2, y2) == 9) {
        delete my_chess[x1][y1];
        delete my_chess[x2][y2];
        my_chess[x1][y1] = my_chess[x2][y2] = nullptr;
        return;
    }
    if (get_type(x1, y1) == 0 && get_type(x2, y2) == 10) {
        delete my_chess[x2][y2];
        my_chess[x2][y2] = my_chess[x1][y1];
        my_chess[x1][y1] = nullptr;
        return;
    }
    if (get_type(x1, y1) == 0 && get_type(x2, y2) == 11) {
        left_dilei[get_whose(x2, y2)]--;
        delete my_chess[x2][y2];
        my_chess[x2][y2] = my_chess[x1][y1];
        my_chess[x1][y1] = nullptr;
        return;
    }
    if (get_type(x1, y1) >= 1 && get_type(x1, y1) <= 8 && get_type(x2, y2) <= 8) {
        delete my_chess[x2][y2];
        my_chess[x2][y2] = my_chess[x1][y1];
        my_chess[x1][y1] = nullptr;
        return;
    }
    if (get_type(x1, y1) >= 1 && get_type(x1, y1) <= 8 && get_type(x2, y2) == 9) {
        delete my_chess[x1][y1];
        delete my_chess[x2][y2];
        my_chess[x1][y1] = my_chess[x2][y2] = nullptr;
        return;
    }
    if (get_type(x1, y1) >= 1 && get_type(x1, y1) <= 8 && get_type(x2, y2) == 10) {
        delete my_chess[x2][y2];
        my_chess[x2][y2] = my_chess[x1][y1];
        my_chess[x1][y1] = nullptr;
        return;
    }
    if (get_type(x1, y1) == 9) {
        delete my_chess[x1][y1];
        delete my_chess[x2][y2];
        my_chess[x1][y1] = my_chess[x2][y2] = nullptr;
        return;
    }
}

bool Chessboard::can_move(int x1, int y1, int x2, int y2) {
    if (get_type(x1, y1) >= 10)
        return false;
    if (!my_chess[x1][y1] -> isvisible())
        return false;
    if (!empty(x2, y2)) {
        if (!my_chess[x2][y2] -> isvisible())
            return false;
        if (get_whose(x1, y1) == get_whose(x2, y2))
            return false;
        if (get_type(x1, y1) >= 10)
            return false;
        if (get_type(x2, y2) != 10 && !can_eat[get_type(x1, y1)][get_type(x2, y2)])
            return false;
        if (node_type[x2][y2] == 1)
            return false;
        if (get_type(x2, y2) == 10 && left_dilei[get_whose(x2, y2)] != 0)
            return false;
    }
    if (graph[x1][y1][x2][y2] != 0) {
        return true;
    }
    if (x1 == x2) {
        int l = std::min(y1, y2);
        int r = std::max(y1, y2);
        bool able = true;
        for (int i = l; i < r; i++)
            if (graph[x1][i][x1][i + 1] != 2) {
                able = false;
                break;
            }
        if (able == true) {
            for (int i = l + 1; i < r; i++)
                if (!empty(x1, i)) {
                    able = false;
                    break;
                }
        }
        if (able == true) {
            return true;
        }
    }
    if (y1 == y2) {
        int l = std::min(x1, x2);
        int r = std::max(x1, x2);
        bool able = true;
        for (int i = l; i < r; i++)
            if (graph[i][y1][i + 1][y1] != 2) {
                able = false;
                break;
            }
        if (able == true) {
            for (int i = l + 1; i < r; i++)
                if (!empty(i, y1)) {
                    able = false;
                    break;
                }
        }
        if (able == true) {
            return true;
        }
    }
    if (get_type(x1, y1) == 0) {
        memset(dfs_vis, 0, sizeof(dfs_vis));
        dfs(x1, y1, x2, y2);
        if (dfs_vis[x2][y2])
            return true;
    }
    return false;
}

bool Chessboard::isvisible(int x, int y) {
    if (my_chess[x][y] == nullptr)  return false;
    return my_chess[x][y] ->isvisible();
}
