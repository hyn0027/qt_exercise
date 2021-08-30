//mainwindow.h
//hyn0027

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Chessboard.h"
#include "connect_to_server_dialog.h"

#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>
#include <QTcpServer>
#include <QHostInfo>
#include <QList>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QString>
#include <QTcpSocket>
#include <QIcon>
#include <QPainter>
#include <QPixmap>
#include <vector>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
     Chessboard* my_chessboard = nullptr;
     int turn;//0 first 1 second
     int now_turn = 0;
     int cnt_turn = 0;
     int status_play = -1;//-1 0 1 2
     int my_color = -1;//red 0 blue 1
     int my_last_color = -2;
     int opponent_last_color = -2;
     int ready_num = 0;
     const int x_axis[7] = {0, 15, 80, 145, 210, 275};
     const int y_axis[15] = {0, 65, 97, 130, 162, 194, 227, 328, 360, 392, 424, 457, 489};
     const int x_length = 55;
     const int y_length = 28;
     QTcpServer* server = nullptr;
     QTimer* my_timer = nullptr;
     QTimer* connection_timer = nullptr;
     QTimer* check_connect = nullptr;
     int timer_cnt;
     int time_out_time[2] = {0, 0};
     QTcpSocket* client = nullptr;
     bool is_server = false;
     bool click_start = false;
     bool pulse = true;
     QPushButton* find_button(int x, int y);
     QIcon find_icon_image(int type, int whose);
     void change_turn();
     void check_win_or_lose();
     void send(QString msg);
     bool connected = false;
     void click(int x, int y);
     void get_connect();
     void game_start();
     void client_game_start();
     void oppnent_turn_over(int x, int y);
     int bef_click[4] = {-1, -1};
     void init() {
         now_turn = 0;
         cnt_turn = 0;
         status_play = -1;
         my_color = -1;
         my_last_color = -2;
         opponent_last_color = -2;
         ready_num = 0;
         server = nullptr;
         client = nullptr;
         my_timer = nullptr;
         connection_timer = nullptr;
         check_connect = nullptr;
         memset(time_out_time, 0, sizeof(time_out_time));
         is_server = false;
         click_start = false;
         pulse = true;
         connected = false;
     }

private slots:
    void on_actionStart_triggered();
    void on_actionAdmit_Defeat_triggered();
    void on_actionCreate_the_Connection_triggered();
    void on_actionConnect_to_Server_triggered();
    void onClientConnected();
    void onClientDisconnected();
    void onSocketReadyRead();
    void onConnected();
    void onDisconnected();
    void my_timer_down();
    void on_actionDisconnect_triggered();
    void test_connect();
    void check_if_connect();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
