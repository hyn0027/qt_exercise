//mainwindow.cpp
//hyn0027

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <ctime>
#include <cstdio>
#include <algorithm>
#include <cstring>

MainWindow::MainWindow (QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    //connection
    {
        //QOverload<bool>::of(&MyButton::sigClicked)
        connect(ui -> chess_1_1, &QPushButton::clicked, this, [&]() {this -> click(1, 1);});
        connect(ui -> chess_1_2, &QPushButton::clicked, this, [&]() {this -> click(1, 2);});
        connect(ui -> chess_1_3, &QPushButton::clicked, this, [&]() {this -> click(1, 3);});
        connect(ui -> chess_1_4, &QPushButton::clicked, this, [&]() {this -> click(1, 4);});
        connect(ui -> chess_1_5, &QPushButton::clicked, this, [&]() {this -> click(1, 5);});
        connect(ui -> chess_2_1, &QPushButton::clicked, this, [&]() {this -> click(2, 1);});
        connect(ui -> chess_2_2, &QPushButton::clicked, this, [&]() {this -> click(2, 2);});
        connect(ui -> chess_2_3, &QPushButton::clicked, this, [&]() {this -> click(2, 3);});
        connect(ui -> chess_2_4, &QPushButton::clicked, this, [&]() {this -> click(2, 4);});
        connect(ui -> chess_2_5, &QPushButton::clicked, this, [&]() {this -> click(2, 5);});
        connect(ui -> chess_3_1, &QPushButton::clicked, this, [&]() {this -> click(3, 1);});
        connect(ui -> chess_3_2, &QPushButton::clicked, this, [&]() {this -> click(3, 2);});
        connect(ui -> chess_3_3, &QPushButton::clicked, this, [&]() {this -> click(3, 3);});
        connect(ui -> chess_3_4, &QPushButton::clicked, this, [&]() {this -> click(3, 4);});
        connect(ui -> chess_3_5, &QPushButton::clicked, this, [&]() {this -> click(3, 5);});
        connect(ui -> chess_4_1, &QPushButton::clicked, this, [&]() {this -> click(4, 1);});
        connect(ui -> chess_4_2, &QPushButton::clicked, this, [&]() {this -> click(4, 2);});
        connect(ui -> chess_4_3, &QPushButton::clicked, this, [&]() {this -> click(4, 3);});
        connect(ui -> chess_4_4, &QPushButton::clicked, this, [&]() {this -> click(4, 4);});
        connect(ui -> chess_4_5, &QPushButton::clicked, this, [&]() {this -> click(4, 5);});
        connect(ui -> chess_5_1, &QPushButton::clicked, this, [&]() {this -> click(5, 1);});
        connect(ui -> chess_5_2, &QPushButton::clicked, this, [&]() {this -> click(5, 2);});
        connect(ui -> chess_5_3, &QPushButton::clicked, this, [&]() {this -> click(5, 3);});
        connect(ui -> chess_5_4, &QPushButton::clicked, this, [&]() {this -> click(5, 4);});
        connect(ui -> chess_5_5, &QPushButton::clicked, this, [&]() {this -> click(5, 5);});
        connect(ui -> chess_6_1, &QPushButton::clicked, this, [&]() {this -> click(6, 1);});
        connect(ui -> chess_6_2, &QPushButton::clicked, this, [&]() {this -> click(6, 2);});
        connect(ui -> chess_6_3, &QPushButton::clicked, this, [&]() {this -> click(6, 3);});
        connect(ui -> chess_6_4, &QPushButton::clicked, this, [&]() {this -> click(6, 4);});
        connect(ui -> chess_6_5, &QPushButton::clicked, this, [&]() {this -> click(6, 5);});
        connect(ui -> chess_7_1, &QPushButton::clicked, this, [&]() {this -> click(7, 1);});
        connect(ui -> chess_7_2, &QPushButton::clicked, this, [&]() {this -> click(7, 2);});
        connect(ui -> chess_7_3, &QPushButton::clicked, this, [&]() {this -> click(7, 3);});
        connect(ui -> chess_7_4, &QPushButton::clicked, this, [&]() {this -> click(7, 4);});
        connect(ui -> chess_7_5, &QPushButton::clicked, this, [&]() {this -> click(7, 5);});
        connect(ui -> chess_8_1, &QPushButton::clicked, this, [&]() {this -> click(8, 1);});
        connect(ui -> chess_8_2, &QPushButton::clicked, this, [&]() {this -> click(8, 2);});
        connect(ui -> chess_8_3, &QPushButton::clicked, this, [&]() {this -> click(8, 3);});
        connect(ui -> chess_8_4, &QPushButton::clicked, this, [&]() {this -> click(8, 4);});
        connect(ui -> chess_8_5, &QPushButton::clicked, this, [&]() {this -> click(8, 5);});
        connect(ui -> chess_9_1, &QPushButton::clicked, this, [&]() {this -> click(9, 1);});
        connect(ui -> chess_9_2, &QPushButton::clicked, this, [&]() {this -> click(9, 2);});
        connect(ui -> chess_9_3, &QPushButton::clicked, this, [&]() {this -> click(9, 3);});
        connect(ui -> chess_9_4, &QPushButton::clicked, this, [&]() {this -> click(9, 4);});
        connect(ui -> chess_9_5, &QPushButton::clicked, this, [&]() {this -> click(9, 5);});
        connect(ui -> chess_10_1, &QPushButton::clicked, this, [&]() {this -> click(10, 1);});
        connect(ui -> chess_10_2, &QPushButton::clicked, this, [&]() {this -> click(10, 2);});
        connect(ui -> chess_10_3, &QPushButton::clicked, this, [&]() {this -> click(10, 3);});
        connect(ui -> chess_10_4, &QPushButton::clicked, this, [&]() {this -> click(10, 4);});
        connect(ui -> chess_10_5, &QPushButton::clicked, this, [&]() {this -> click(10, 5);});
        connect(ui -> chess_11_1, &QPushButton::clicked, this, [&]() {this -> click(11, 1);});
        connect(ui -> chess_11_2, &QPushButton::clicked, this, [&]() {this -> click(11, 2);});
        connect(ui -> chess_11_3, &QPushButton::clicked, this, [&]() {this -> click(11, 3);});
        connect(ui -> chess_11_4, &QPushButton::clicked, this, [&]() {this -> click(11, 4);});
        connect(ui -> chess_11_5, &QPushButton::clicked, this, [&]() {this -> click(11, 5);});
        connect(ui -> chess_12_1, &QPushButton::clicked, this, [&]() {this -> click(12, 1);});
        connect(ui -> chess_12_2, &QPushButton::clicked, this, [&]() {this -> click(12, 2);});
        connect(ui -> chess_12_3, &QPushButton::clicked, this, [&]() {this -> click(12, 3);});
        connect(ui -> chess_12_4, &QPushButton::clicked, this, [&]() {this -> click(12, 4);});
        connect(ui -> chess_12_5, &QPushButton::clicked, this, [&]() {this -> click(12, 5);});
    }

    ui ->centralwidget -> setVisible(false);
}

MainWindow::~MainWindow () {
    delete ui;
}

void MainWindow::check_win_or_lose() {
    bool red_junqi = false, blue_junqi = true;
    for (int i = 1; i < 13; i++) {
        for (int j = 1; j < 6; j++) {
            if (my_chessboard ->get_type(i, j) == 10) {
                if (my_chessboard ->get_whose(i, j) == 0)   red_junqi = true;
                if (my_chessboard ->get_whose(i, j) == 1)   blue_junqi = true;
            }
        }
    }
    if ((red_junqi == false && my_color == 0) || (blue_junqi == false && my_color == 1)) {
        my_timer ->stop();
        check_connect -> stop();
        connection_timer -> stop();
        send("You win. You raised your opponent's flag.");
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
        box.setWindowTitle("Game end.");
        box.setText("You lose. Your flag was raised.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            this -> close();
        return;
    }
    if ((red_junqi == false && my_color == 1) || (blue_junqi == false && my_color == 0)) {
        my_timer ->stop();
        check_connect -> stop();
        connection_timer -> stop();
        send("You lose. Your flag was raised.");
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
        box.setWindowTitle("Game end.");
        box.setText("You win. You raised your opponent's flag.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            this -> close();
        return;
    }
    for (int i = 1; i < 13; i++)
        for (int j = 1; j < 6; j++)
            if (my_chessboard ->empty(i, j) == false)
                if (my_chessboard -> isvisible(i, j) == false)
                    return;
    bool canmove[2] = {false, false};
    for (int i = 1; i < 13; i++)
        for (int j = 1; j < 6; j++) {
            if (my_chessboard ->empty(i, j) == false) {
                if (canmove[my_chessboard ->get_whose(i, j)] == false) {
                    bool x = false;
                    if (i != 12)    x = x || my_chessboard -> can_move(i, j, i + 1, j);
                    if (i != 1)    x = x || my_chessboard -> can_move(i, j, i - 1, j);
                    if (j != 5)    x = x || my_chessboard -> can_move(i, j, i, j + 1);
                    if (j != 1)    x = x || my_chessboard -> can_move(i, j, i, j - 1);
                    if (i != 12 && j != 5)  x = x || my_chessboard -> can_move(i, j, i + 1, j + 1);
                    if (i != 12 && j != 1)  x = x || my_chessboard -> can_move(i, j, i + 1, j - 1);
                    if (i != 1 && j != 5)  x = x || my_chessboard -> can_move(i, j, i - 1, j + 1);
                    if (i != 1 && j != 1)  x = x || my_chessboard -> can_move(i, j, i - 1, j - 1);
                    canmove[my_chessboard ->get_whose(i, j)] = x;
                }
            }
        }
    int nex_move;
    if (now_turn == 0)  nex_move = 1 - my_color;
    else    nex_move = my_color;
    if (canmove[nex_move] == false) {
        my_timer ->stop();
        check_connect -> stop();
        connection_timer -> stop();
        send("You lose. You cannot move.");
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
        box.setWindowTitle("Game end.");
        box.setText("You win. Your opponent cannot move.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            this -> close();
        return;
    }
}

void MainWindow::on_actionStart_triggered () {
    if (connected == false) {
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
        box.setWindowTitle("Error");
        box.setText("Please connect first.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            box.close();
        return;
    }
    if (click_start) {
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
        box.setWindowTitle("Error");
        box.setText("You already clicked \"start\".");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            box.close();
        return;
    }
    ui -> msg_color_and_hints -> setText("Wait for your opponent to start.");
    ui -> msg_turn -> setText("Connected.");
    click_start = true;
    if (is_server == false)
        send("Client Ready");
    else
        ready_num++;
    if (ready_num == 2)
        game_start();
}

void MainWindow::game_start() {
    srand(time(0));
    turn = rand() % 2;
    status_play = 0;
    if (turn == 0)
        ui -> msg_turn -> setText("It's your turn now.");
    else
        ui -> msg_turn -> setText("It's your opponent's turn.");
    ui -> msg_color_and_hints -> setText("Please click to turn over the chess pieces.");
    if (turn == 0)  send("Game Start 1");
    else  send("Game Start 0");
    my_timer = new QTimer(this);
    timer_cnt = 20;
    my_timer_down();
    connect(my_timer, SIGNAL(timeout()), this, SLOT(my_timer_down()));
    my_timer -> start(1000);
}

QIcon MainWindow::find_icon_image(int type, int whose) {
    QIcon ret;
    if (type == -1) {
        ret.addFile(":/pics/png/unknown.png");
    }
    else if (type == -2) {
        ret.addFile(":/pics/png/touming.png");
    }
    else if (type == 0) {
        if (whose == 0) ret.addFile(":/pics/png/gongbing_red.png");
        else    ret.addFile(":/pics/png/gongbing_blue.png");
    }
    else if (type == 1) {
        if (whose == 0) ret.addFile(":/pics/png/paizhang_red.png");
        else    ret.addFile(":/pics/png/paizhang_blue.png");
    }
    else if (type == 2) {
        if (whose == 0) ret.addFile(":/pics/png/lianzhang_hong.png");
        else    ret.addFile(":/pics/png/lianzhang_lan.png");
    }
    else if (type == 3) {
        if (whose == 0) ret.addFile(":/pics/png/yingzhang_red.png");
        else    ret.addFile(":/pics/png/yingzhang_blue.png");
    }
    else if (type == 4) {
        if (whose == 0) ret.addFile(":/pics/png/tuanzhang_hong.png");
        else    ret.addFile(":/pics/png/tuanzhang_blue.png");
    }
    else if (type == 5) {
        if (whose == 0) ret.addFile(":/pics/png/lvzhang_hong.png");
        else    ret.addFile(":/pics/png/lvzhang_blue.png");
    }
    else if (type == 6) {
        if (whose == 0) ret.addFile(":/pics/png/shizhang_red.png");
        else    ret.addFile(":/pics/png/shizhang_blue.png");
    }
    else if (type == 7) {
        if (whose == 0) ret.addFile(":/pics/png/junzhang_hong.png");
        else    ret.addFile(":/pics/png/junzhang_lan.png");
    }
    else if (type == 8) {
        if (whose == 0) ret.addFile(":/pics/png/siling_red.png");
        else    ret.addFile(":/pics/png/siling_blue.png");
    }
    else if (type == 9) {
        if (whose == 0) ret.addFile(":/pics/png/zhadan_red.png");
        else    ret.addFile(":/pics/png/zhadan_blue.png");
    }
    else if (type == 10) {
        if (whose == 0) ret.addFile(":/pics/png/junqi_red.png");
        else    ret.addFile(":/pics/png/junqi_blue.png");
    }
    else if (type == 11) {
        if (whose == 0) ret.addFile(":/pics/png/dilei_red.png");
        else    ret.addFile(":/pics/png/dilei_blue.png");
    }
    return ret;
}

QPushButton* MainWindow::find_button(int x, int y) {
    switch (x) {
        case 1: {
            switch (y) {
                case 1: return ui -> chess_1_1;
                case 2: return ui -> chess_1_2;
                case 3: return ui -> chess_1_3;
                case 4: return ui -> chess_1_4;
                case 5: return ui -> chess_1_5;
            }
        }
        case 2: {
            switch (y) {
                case 1: return ui -> chess_2_1;
                case 2: return ui -> chess_2_2;
                case 3: return ui -> chess_2_3;
                case 4: return ui -> chess_2_4;
                case 5: return ui -> chess_2_5;
            }
        }
        case 3: {
            switch (y) {
                case 1: return ui -> chess_3_1;
                case 2: return ui -> chess_3_2;
                case 3: return ui -> chess_3_3;
                case 4: return ui -> chess_3_4;
                case 5: return ui -> chess_3_5;
            }
        }
        case 4: {
            switch (y) {
                case 1: return ui -> chess_4_1;
                case 2: return ui -> chess_4_2;
                case 3: return ui -> chess_4_3;
                case 4: return ui -> chess_4_4;
                case 5: return ui -> chess_4_5;
            }
        }
        case 5: {
            switch (y) {
                case 1: return ui -> chess_5_1;
                case 2: return ui -> chess_5_2;
                case 3: return ui -> chess_5_3;
                case 4: return ui -> chess_5_4;
                case 5: return ui -> chess_5_5;
            }
        }
        case 6: {
            switch (y) {
                case 1: return ui -> chess_6_1;
                case 2: return ui -> chess_6_2;
                case 3: return ui -> chess_6_3;
                case 4: return ui -> chess_6_4;
                case 5: return ui -> chess_6_5;
            }
        }
        case 7: {
            switch (y) {
                case 1: return ui -> chess_7_1;
                case 2: return ui -> chess_7_2;
                case 3: return ui -> chess_7_3;
                case 4: return ui -> chess_7_4;
                case 5: return ui -> chess_7_5;
            }
        }
        case 8: {
            switch (y) {
                case 1: return ui -> chess_8_1;
                case 2: return ui -> chess_8_2;
                case 3: return ui -> chess_8_3;
                case 4: return ui -> chess_8_4;
                case 5: return ui -> chess_8_5;
            }
        }
        case 9: {
            switch (y) {
                case 1: return ui -> chess_9_1;
                case 2: return ui -> chess_9_2;
                case 3: return ui -> chess_9_3;
                case 4: return ui -> chess_9_4;
                case 5: return ui -> chess_9_5;
            }
        }
        case 10: {
            switch (y) {
                case 1: return ui -> chess_10_1;
                case 2: return ui -> chess_10_2;
                case 3: return ui -> chess_10_3;
                case 4: return ui -> chess_10_4;
                case 5: return ui -> chess_10_5;
            }
        }
        case 11: {
            switch (y) {
                case 1: return ui -> chess_11_1;
                case 2: return ui -> chess_11_2;
                case 3: return ui -> chess_11_3;
                case 4: return ui -> chess_11_4;
                case 5: return ui -> chess_11_5;
            }
        }
        case 12: {
            switch (y) {
                case 1: return ui -> chess_12_1;
                case 2: return ui -> chess_12_2;
                case 3: return ui -> chess_12_3;
                case 4: return ui -> chess_12_4;
                case 5: return ui -> chess_12_5;
            }
        }
    }
    return nullptr;
}

void MainWindow::client_game_start() {
    if (turn == 0)
        ui -> msg_turn -> setText("It's your turn now.");
    else
        ui -> msg_turn -> setText("It's your opponent's turn.");
    ui -> msg_color_and_hints -> setText("Please click to turn over the chess pieces.");
    status_play = 0;
    timer_cnt = 20;
    my_timer = new QTimer(this);
    my_timer_down();
    connect(my_timer, SIGNAL(timeout()), this, SLOT(my_timer_down()));
    my_timer -> start(1000);
}

void MainWindow::change_turn() {
    bef_click[0] = -1;
    now_turn = 1 - now_turn;
    if (now_turn == turn)
        ui ->msg_turn -> setText("It's your turn now.");
    else
        ui ->msg_turn -> setText("It's your opponent's turn now.");
    timer_cnt = 20;
    my_timer -> start(1000);
    cnt_turn++;
}

void MainWindow::oppnent_turn_over(int x, int y) {
    my_chessboard -> turn_over(x, y);
    find_button(x, y) -> setIcon(find_icon_image(my_chessboard -> get_type(x, y), my_chessboard -> get_whose(x, y)));
    int now_color = my_chessboard -> get_whose(x, y);
    if (now_color == opponent_last_color) {
        my_color = 1 - now_color;
        status_play = 1;
        if (my_color == 0)
            ui ->msg_color_and_hints -> setText("You are the red player.");
        else if (my_color != -1)
            ui ->msg_color_and_hints -> setText("You are the blue player.");
    }
    else
        opponent_last_color = now_color;
    change_turn();
}

void MainWindow::click(int x, int y) {
    if (status_play == -1) {
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
        box.setWindowTitle("Error");
        box.setText("Please connect or start game first.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            return;
    }
    if (now_turn != turn) {
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
        box.setWindowTitle("Error");
        box.setText("It's not your turn.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            return;
        return;
    }
    if (status_play == 0) {
        if (!my_chessboard -> turn_over(x, y)) {
            QMessageBox box(this);
            box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
            box.setWindowTitle("Error");
            box.setText("You cannot turn this chess piece.");
            box.setStandardButtons(QMessageBox::Ok);
            if(box.exec() == QMessageBox::Ok)
                return;
        }
        else {
            find_button(x, y) -> setIcon(find_icon_image(my_chessboard -> get_type(x, y), my_chessboard -> get_whose(x, y)));
            int now_color = my_chessboard -> get_whose(x, y);
            if (now_color == my_last_color) {
                my_color = now_color;
                status_play = 1;
            }
            else
                my_last_color = now_color;
            if (my_color == 0)
                ui ->msg_color_and_hints -> setText("You are the red player.");
            else if (my_color != -1)
                ui ->msg_color_and_hints -> setText("You are the blue player.");
            send("1 " + QString::number(x) + " " + QString::number(y));
            check_win_or_lose();
            change_turn();
            return;
        }
    }
    if (status_play == 1) {
        if (bef_click[0] == -1) {
            if (my_chessboard -> empty(x, y)) {
                QMessageBox box(this);
                box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
                box.setWindowTitle("Error");
                box.setText("There's no chess piece here.");
                box.setStandardButtons(QMessageBox::Ok);
                if(box.exec() == QMessageBox::Ok)
                    return;
            }
            if (my_chessboard -> turn_over(x, y)) {
                find_button(x, y) -> setIcon(find_icon_image(my_chessboard -> get_type(x, y), my_chessboard -> get_whose(x, y)));
                send("1 " + QString::number(x) + " " + QString::number(y));
                check_win_or_lose();
                change_turn();
                return;
            }
            else {
                if (my_chessboard -> get_whose(x, y) != my_color){
                    QMessageBox box(this);
                    box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
                    box.setWindowTitle("Error");
                    box.setText("This is not your chess piece.");
                    box.setStandardButtons(QMessageBox::Ok);
                    if(box.exec() == QMessageBox::Ok)
                        return;
                }
                bef_click[0] = x;
                bef_click[1] = y;
                find_button(x, y) -> setEnabled(false);
                return;
            }
        }
        else {
            if (my_chessboard -> can_move(bef_click[0], bef_click[1], x, y)) {
                int x1 = bef_click[0], y1 = bef_click[1];
                int x2 = x, y2 = y;
                QIcon my_icon;
                my_icon.addFile(":/pics/png/touming.png");
                find_button(x1, y1) -> setIcon(my_icon);
                if (my_chessboard ->empty(x2, y2)) {
                    find_button(x2, y2) -> setIcon(find_icon_image(my_chessboard -> get_type(x1, y1), my_chessboard -> get_whose(x1, y1)));
                }
                else if (my_chessboard -> get_type(x1, y1) == 9 || my_chessboard -> get_type(x2, y2) == 9) {
                    find_button(x2, y2) -> setIcon(my_icon);
                }
                else if (my_chessboard -> get_type(x1, y1) == my_chessboard -> get_type(x2, y2)) {
                    find_button(x2, y2) -> setIcon(my_icon);
                }
                else {
                    find_button(x2, y2) -> setIcon(find_icon_image(my_chessboard -> get_type(x1, y1), my_chessboard -> get_whose(x1, y1)));
                }
                my_chessboard -> go_chess(x1, y1, x2, y2);
                send("2 " + QString::number(x1) + " " + QString::number(y1) + " " + QString::number(x2) + " " + QString::number(y2));
                find_button(x1, y1) ->setEnabled(true);
                check_win_or_lose();
                change_turn();
                return;
            }
            find_button(bef_click[0], bef_click[1]) ->setEnabled(true);
            QMessageBox box(this);
            box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
            box.setWindowTitle("Error");
            box.setText("Invalid move.");
            box.setStandardButtons(QMessageBox::Ok);
            bef_click[0] = -1;
            if(box.exec() == QMessageBox::Ok)
                return;
        }
    }
}

void MainWindow::on_actionAdmit_Defeat_triggered() {
    if (cnt_turn < 20) {
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
        box.setWindowTitle("Adimit Defeat");
        box.setText("Please admit defeat 20 steps after the game started.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            return;
    }
    send("You win. Your opponent admitted defeat.");
    my_timer -> stop();
    check_connect -> stop();
    connection_timer -> stop();
    QMessageBox box(this);
    box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
    box.setWindowTitle("Game End");
    box.setText("You lose. You admitted defeat.");
    box.setStandardButtons(QMessageBox::Ok);
    if(box.exec() == QMessageBox::Ok)
        this -> close();
    return;
}

void MainWindow::on_actionCreate_the_Connection_triggered() {
    QList <QHostAddress> list = QNetworkInterface::allAddresses();
    QString my_msg;
    QHostAddress chosen_address;
    foreach (QHostAddress address, list) {
        if (address.protocol() == QAbstractSocket::IPv4Protocol){
            my_msg = address.toString();
            chosen_address = address;
            break;
        }
    }
    QMessageBox box(this);
    box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
    box.setWindowTitle("Create the Connection");
    box.setText("Host IP:  " + my_msg);
    box.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);

    if(box.exec() == QMessageBox::Ok) {
        init();
        my_chessboard = new Chessboard(0);
        server = new QTcpServer(this);
        is_server = true;
        ui ->centralwidget -> setVisible(true);
        if (!server->listen(chosen_address, 6666)) {
             QMessageBox::information(this, "Create the Connection", "failed to listen.");
             return;
        }
        connect(server, &QTcpServer::newConnection, this, [&]() {this -> get_connect();});
    }
}

void MainWindow::get_connect() {
    client = server -> nextPendingConnection();
    connected = true;
    connect(client, SIGNAL(connected()), this, SLOT(onClientConnected));
    onClientConnected();
    connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected));
    connect(client, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));
}

void MainWindow::send(QString msg) {
    QByteArray str = msg.toUtf8();
    str.append('\n');
    client -> write(str);
}

void MainWindow::onClientConnected() {
    connection_timer = new QTimer(this);
    connect(connection_timer, SIGNAL(timeout()), this, SLOT(test_connect()));
    connection_timer ->start(400);
    check_connect = new QTimer(this);
    connect(check_connect, SIGNAL(timeout()), this, SLOT(check_if_connect()));
    check_connect ->start(500);
    for (int i = 1; i < 13; i++) {
        QString msg = "";
        for (int j = 1; j < 6; j++) {
            msg = msg + (my_chessboard -> get_msg(i, j));
        }
        send(msg);
    }
    ui -> msg_turn -> setText("Connected.");
    ui -> msg_color_and_hints -> setText("Click start to play.");
}

void MainWindow::onClientDisconnected() {
    QMessageBox box(this);
    box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
    box.setWindowTitle("Connect error");
    box.setText("Client socket disconnected.");
    box.setStandardButtons(QMessageBox::Ok);
    if(box.exec() == QMessageBox::Ok) {
        if (server != nullptr) {
            server -> close();
            server ->deleteLater();
        }
        if (client != nullptr) {
            client -> close();
            client ->deleteLater();
        }
        if (my_timer != nullptr) {
            my_timer ->stop();
            my_timer ->deleteLater();
        }
        connected = false;
        if (connection_timer != nullptr) {
            connection_timer ->stop();
            connection_timer ->deleteLater();
        }
        if (check_connect != nullptr) {
            check_connect ->stop();
            check_connect ->deleteLater();
        }
        ui ->msg_turn ->setText("Disconnected.");
        ui ->msg_color_and_hints ->setText("Please wait for connection and start game.");
        ui ->msg_timing ->setText("Game timer: Off");
        ui ->centralwidget ->setVisible(false);
        for (int i = 1; i < 13; i++)
            for (int j = 1; j < 6; j++)
                if (my_chessboard ->node(i, j) == 0) {
                    find_button(i, j) ->setIcon(find_icon_image(-1, -1));
                }
                else {
                    find_button(i, j) ->setIcon(find_icon_image(-2, -2));
                }
        if (my_chessboard != nullptr) {
            delete my_chessboard;
            my_chessboard = nullptr;
        }
        return;
    }
}

void MainWindow::onSocketReadyRead() {
    while (client -> canReadLine()) {
        QString msg = client -> readLine();
        if (msg[0] == QChar('C') && msg[1] == QChar('o')) {
            pulse = true;
            continue;
        }
        if (is_server == false && status_play == -1 && msg[0] != QChar('G')) {
            int line = 1, pt = 0;
            while (!my_chessboard -> empty(line, 1))
                line++;
            for (int col = 1, whose, which; col < 6; col++) {
                if (my_chessboard -> is_xingying(line, col)) {
                    pt += 4;
                    continue;
                }
                whose = which = 0;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    whose = whose * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    which = which * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                my_chessboard -> set_chess(line, col, which, whose);
            }
            continue;
        }
        if (is_server == true && status_play == -1) {
            ready_num++;
            if (ready_num == 2)
                game_start();
            continue;
        }
        if (is_server == false && click_start == true && status_play == -1) {
            int pt = 0;
            while (msg[pt] < QChar('0') || msg[pt] > QChar('9'))
                pt++;
            turn = msg[pt].unicode() - QChar('0').unicode();
            client_game_start();
            continue;
        }
        if (status_play == 0 && msg[0] != QChar('I') && msg[0] != QChar('Y')) {
            int tim = msg[0].unicode() - QChar('0').unicode();
            if (tim == 1) {
                int x = 0, y = 0;
                int pt = 2;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    x = x * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    y = y * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                oppnent_turn_over(x, y);
            }
            continue;
        }
        if (status_play == 1 && msg[0] != QChar('I') && msg[0] != QChar('Y')) {
            int tim = msg[0].unicode() - QChar('0').unicode();
            if (tim == 1) {
                int x = 0, y = 0;
                int pt = 2;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    x = x * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    y = y * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                my_chessboard -> turn_over(x, y);
                find_button(x, y) -> setIcon(find_icon_image(my_chessboard -> get_type(x, y), my_chessboard -> get_whose(x, y)));
                change_turn();
            }
            else {
                int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
                int pt = 2;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    x1 = x1 * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    y1 = y1 * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    x2 = x2 * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                pt++;
                while (msg[pt] >= QChar('0') && msg[pt] <= QChar('9')) {
                    y2 = y2 * 10 + msg[pt].unicode() - QChar('0').unicode();
                    pt++;
                }
                my_chessboard -> can_move(x1, y1, x2, y2);
                QIcon my_icon;
                my_icon.addFile(":/pics/png/touming.png");
                find_button(x1, y1) -> setIcon(my_icon);
                if (my_chessboard ->empty(x2, y2)) {
                    find_button(x2, y2) -> setIcon(find_icon_image(my_chessboard -> get_type(x1, y1), my_chessboard -> get_whose(x1, y1)));
                }
                else if (my_chessboard -> get_type(x1, y1) == 9 || my_chessboard -> get_type(x2, y2) == 9) {
                    find_button(x2, y2) -> setIcon(my_icon);
                }
                else if (my_chessboard -> get_type(x1, y1) == my_chessboard -> get_type(x2, y2)) {
                    find_button(x2, y2) -> setIcon(my_icon);
                }
                else {
                    find_button(x2, y2) -> setIcon(find_icon_image(my_chessboard -> get_type(x1, y1), my_chessboard -> get_whose(x1, y1)));
                }
                my_chessboard -> go_chess(x1, y1, x2, y2);
                change_turn();
            }
            continue;
        }
        if (msg[0] == QChar('Y')) {
            check_connect ->stop();
            connection_timer ->stop();
            msg.chop(1);
            my_timer ->stop();
            QMessageBox box(this);
            box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
            box.setWindowTitle("Game end.");
            box.setText(msg);
            box.setStandardButtons(QMessageBox::Ok);
            if(box.exec() == QMessageBox::Ok)
                this -> close();
            continue;
        }
    }
}

void MainWindow::onConnected() {
    my_chessboard = new Chessboard(1);
    is_server = false;
    connected = true;
    connection_timer = new QTimer(this);
    connect(connection_timer, SIGNAL(timeout()), this, SLOT(test_connect()));
    connection_timer ->start(400);
    check_connect = new QTimer(this);
    connect(check_connect, SIGNAL(timeout()), this, SLOT(check_if_connect()));
    check_connect ->start(500);
    QMessageBox box(this);
    box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
    box.setWindowTitle("Connect to Server");
    box.setText("Success.");
    box.setStandardButtons(QMessageBox::Ok);
    if(box.exec() == QMessageBox::Ok) {
        ui ->centralwidget -> setVisible(true);
        ui -> msg_turn -> setText("Connected.");
        ui -> msg_color_and_hints -> setText("Click start to play.");
        return;
    }
}

void MainWindow::onDisconnected() {
    QMessageBox box(this);
    box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
    box.setWindowTitle("disconnect to Server");
    box.setText("Disconnected.");
    box.setStandardButtons(QMessageBox::Ok);
    if(box.exec() == QMessageBox::Ok) {
        if (server != nullptr) {
            server -> close();
            server ->deleteLater();
        }
        if (client != nullptr) {
            client -> close();
            client ->deleteLater();
        }
        if (my_timer != nullptr) {
            my_timer ->stop();
            my_timer ->deleteLater();
        }
        connected = false;
        if (connection_timer != nullptr) {
            connection_timer ->stop();
            connection_timer ->deleteLater();
        }
        if (check_connect != nullptr) {
            check_connect ->stop();
            check_connect ->deleteLater();
        }
        ui ->msg_turn ->setText("Disconnected.");
        ui ->msg_color_and_hints ->setText("Please wait for connection and start game.");
        ui ->msg_timing ->setText("Game timer: Off");
        ui ->centralwidget ->setVisible(false);
        for (int i = 1; i < 13; i++)
            for (int j = 1; j < 6; j++)
                if (my_chessboard ->node(i, j) == 0) {
                    find_button(i, j) ->setIcon(find_icon_image(-1, -1));
                }
                else {
                    find_button(i, j) ->setIcon(find_icon_image(-2, -2));
                }
        delete my_chessboard;
        my_chessboard = nullptr;
    }
}

void MainWindow::test_connect() {
    send("Connection.");
}

void MainWindow::check_if_connect() {
    if (pulse == false) {
        if (is_server == true)
            onClientDisconnected();
        else
            onDisconnected();
    }
    pulse = false;
}

void MainWindow::on_actionConnect_to_Server_triggered() {
    if (connected) {
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
        box.setWindowTitle("Error");
        box.setText("You are the Host.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            return;
    }
    Connect_to_Server_Dialog diag(this);
    if (diag.exec() == Connect_to_Server_Dialog::Accepted) {
        init();
        client = new QTcpSocket(this);
        connect(client, SIGNAL(connected()), this, SLOT(onConnected()));
        connect(client, SIGNAL(disconnected()), this, SLOT(onDisconnnected()));
        connect(client, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));
        QString m_address = diag.m_address;
        client -> connectToHost(m_address, 6666);
        if (client -> waitForConnected(2000))
            return;
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
        box.setWindowTitle("Connect to Server failed.");
        box.setText(client -> errorString());
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            return;
    }
}

void MainWindow::on_actionDisconnect_triggered() {
    if (is_server == false) {
        if (client->state() == QAbstractSocket::ConnectedState) {
            client ->disconnectFromHost();
            ui ->centralwidget -> setVisible(false);
            if (server != nullptr) {
                server -> close();
                server->deleteLater();
            }
            if (client != nullptr) {
                client -> close();
                client ->deleteLater();
            }
            if (my_timer != nullptr) {
                my_timer ->stop();
                my_timer ->deleteLater();
            }
            connected = false;
            if (connection_timer != nullptr) {
                connection_timer ->stop();
                connection_timer ->deleteLater();
            }
            if (check_connect != nullptr) {
                check_connect ->stop();
                check_connect ->deleteLater();
            }
            ui ->msg_turn ->setText("Disconnected.");
            ui ->msg_color_and_hints ->setText("Please wait for connection and start game.");
            ui ->msg_timing ->setText("Game timer: Off");
            for (int i = 1; i < 13; i++)
                for (int j = 1; j < 6; j++)
                    if (my_chessboard ->node(i, j) == 0) {
                        find_button(i, j) ->setIcon(find_icon_image(-1, -1));
                    }
                    else {
                        find_button(i, j) ->setIcon(find_icon_image(-2, -2));
                    }
            delete my_chessboard;
            my_chessboard = nullptr;

        }
        else {
            QMessageBox box(this);
            box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
            box.setWindowTitle("Disconnect");
            box.setText("You've already disconnected.");
            box.setStandardButtons(QMessageBox::Ok);
            if(box.exec() == QMessageBox::Ok)
                return;
        }
    }
    else {
        if (server ->isListening()) {
            server -> close();
            ui ->centralwidget -> setVisible(false);
            if (server != nullptr) {
                server -> close();
                server ->deleteLater();
            }
            if (client != nullptr) {
                client -> close();
                client ->deleteLater();
            }
            if (my_timer != nullptr) {
                my_timer ->stop();
                my_timer ->deleteLater();
            }
            connected = false;
            if (connection_timer != nullptr) {
                connection_timer ->stop();
                connection_timer ->deleteLater();
            }
            if (check_connect != nullptr) {
                check_connect ->stop();
                check_connect ->deleteLater();
            }
            ui ->msg_turn ->setText("Disconnected.");
            ui ->msg_color_and_hints ->setText("Please wait for connection and start game.");
            ui ->msg_timing ->setText("Game timer: Off");
            for (int i = 1; i < 13; i++)
                for (int j = 1; j < 6; j++)
                    if (my_chessboard ->node(i, j) == 0) {
                        find_button(i, j) ->setIcon(find_icon_image(-1, -1));
                    }
                    else {
                        find_button(i, j) ->setIcon(find_icon_image(-2, -2));
                    }
            delete my_chessboard;
            my_chessboard = nullptr;
        }
        else {
            QMessageBox box(this);
            box.setStyleSheet("QLabel{""min-width: 200px;""min-height: 50px; ""}");
            box.setWindowTitle("Disconnect");
            box.setText("You've already disconnected.");
            box.setStandardButtons(QMessageBox::Ok);
            if(box.exec() == QMessageBox::Ok)
                return;
        }
    }
}

void MainWindow::my_timer_down() {
    ui -> msg_timing ->setText("Game timer: " + QString::number(timer_cnt) + " second(s) left.");
    timer_cnt--;
    if (timer_cnt == -1) {
        time_out_time[now_turn]++;
    }
    if (time_out_time[now_turn] == 3 && now_turn == turn) {
        my_timer ->stop();
        check_connect ->stop();
        connection_timer ->stop();
        send("You win. Your opponent ran out of time.");
        QMessageBox box(this);
        box.setStyleSheet("QLabel{""min-width: 300px;""min-height: 50px; ""}");
        box.setWindowTitle("Game end.");
        box.setText("You lose. Your time is out.");
        box.setStandardButtons(QMessageBox::Ok);
        if(box.exec() == QMessageBox::Ok)
            this -> close();
        return;
    }
    if (timer_cnt == -1) {
        change_turn();
    }
}
