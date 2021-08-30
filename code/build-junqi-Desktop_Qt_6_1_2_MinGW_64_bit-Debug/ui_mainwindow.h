/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate_the_Connection;
    QAction *actionConnect_to_Server;
    QAction *actionStart;
    QAction *actionAdmit_Defeat;
    QAction *actionDisconnect;
    QWidget *centralwidget;
    QLabel *chessboard;
    QLabel *msg_turn;
    QLabel *msg_timing;
    QLabel *msg_color_and_hints;
    QPushButton *chess_1_1;
    QPushButton *chess_1_2;
    QPushButton *chess_1_3;
    QPushButton *chess_1_4;
    QPushButton *chess_1_5;
    QPushButton *chess_2_1;
    QPushButton *chess_2_2;
    QPushButton *chess_2_3;
    QPushButton *chess_2_4;
    QPushButton *chess_2_5;
    QPushButton *chess_3_1;
    QPushButton *chess_3_2;
    QPushButton *chess_3_3;
    QPushButton *chess_3_4;
    QPushButton *chess_3_5;
    QPushButton *chess_4_1;
    QPushButton *chess_4_2;
    QPushButton *chess_4_3;
    QPushButton *chess_4_4;
    QPushButton *chess_4_5;
    QPushButton *chess_5_1;
    QPushButton *chess_5_2;
    QPushButton *chess_5_3;
    QPushButton *chess_5_4;
    QPushButton *chess_5_5;
    QPushButton *chess_6_1;
    QPushButton *chess_6_2;
    QPushButton *chess_6_3;
    QPushButton *chess_6_4;
    QPushButton *chess_6_5;
    QPushButton *chess_7_1;
    QPushButton *chess_7_2;
    QPushButton *chess_7_3;
    QPushButton *chess_7_4;
    QPushButton *chess_7_5;
    QPushButton *chess_8_1;
    QPushButton *chess_8_2;
    QPushButton *chess_8_3;
    QPushButton *chess_8_4;
    QPushButton *chess_8_5;
    QPushButton *chess_9_1;
    QPushButton *chess_9_2;
    QPushButton *chess_9_3;
    QPushButton *chess_9_4;
    QPushButton *chess_9_5;
    QPushButton *chess_10_1;
    QPushButton *chess_10_2;
    QPushButton *chess_10_3;
    QPushButton *chess_10_4;
    QPushButton *chess_10_5;
    QPushButton *chess_11_1;
    QPushButton *chess_11_2;
    QPushButton *chess_11_3;
    QPushButton *chess_11_4;
    QPushButton *chess_11_5;
    QPushButton *chess_12_1;
    QPushButton *chess_12_2;
    QPushButton *chess_12_3;
    QPushButton *chess_12_4;
    QPushButton *chess_12_5;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuConnect;
    QMenu *menuPlay;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 570);
        actionCreate_the_Connection = new QAction(MainWindow);
        actionCreate_the_Connection->setObjectName(QString::fromUtf8("actionCreate_the_Connection"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        actionCreate_the_Connection->setFont(font);
        actionConnect_to_Server = new QAction(MainWindow);
        actionConnect_to_Server->setObjectName(QString::fromUtf8("actionConnect_to_Server"));
        actionConnect_to_Server->setFont(font);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setFont(font);
        actionAdmit_Defeat = new QAction(MainWindow);
        actionAdmit_Defeat->setObjectName(QString::fromUtf8("actionAdmit_Defeat"));
        actionAdmit_Defeat->setFont(font);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionDisconnect->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chessboard = new QLabel(centralwidget);
        chessboard->setObjectName(QString::fromUtf8("chessboard"));
        chessboard->setGeometry(QRect(10, 60, 326, 466));
        chessboard->setFrameShape(QFrame::NoFrame);
        chessboard->setPixmap(QPixmap(QString::fromUtf8(":/pics/png/chessboardnew.png")));
        chessboard->setScaledContents(true);
        msg_turn = new QLabel(centralwidget);
        msg_turn->setObjectName(QString::fromUtf8("msg_turn"));
        msg_turn->setGeometry(QRect(13, 2, 191, 18));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        msg_turn->setFont(font1);
        msg_timing = new QLabel(centralwidget);
        msg_timing->setObjectName(QString::fromUtf8("msg_timing"));
        msg_timing->setGeometry(QRect(13, 38, 291, 18));
        msg_timing->setFont(font1);
        msg_color_and_hints = new QLabel(centralwidget);
        msg_color_and_hints->setObjectName(QString::fromUtf8("msg_color_and_hints"));
        msg_color_and_hints->setGeometry(QRect(13, 20, 401, 18));
        msg_color_and_hints->setFont(font1);
        chess_1_1 = new QPushButton(centralwidget);
        chess_1_1->setObjectName(QString::fromUtf8("chess_1_1"));
        chess_1_1->setGeometry(QRect(15, 65, 55, 28));
        chess_1_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_1_1->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pics/png/unknown.png"), QSize(), QIcon::Normal, QIcon::On);
        chess_1_1->setIcon(icon);
        chess_1_1->setIconSize(QSize(55, 28));
        chess_1_1->setCheckable(false);
        chess_1_1->setAutoExclusive(false);
        chess_1_1->setAutoDefault(false);
        chess_1_1->setFlat(true);
        chess_1_2 = new QPushButton(centralwidget);
        chess_1_2->setObjectName(QString::fromUtf8("chess_1_2"));
        chess_1_2->setGeometry(QRect(80, 65, 55, 28));
        chess_1_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_1_2->setText(QString::fromUtf8(""));
        chess_1_2->setIcon(icon);
        chess_1_2->setIconSize(QSize(55, 28));
        chess_1_2->setAutoDefault(false);
        chess_1_2->setFlat(true);
        chess_1_3 = new QPushButton(centralwidget);
        chess_1_3->setObjectName(QString::fromUtf8("chess_1_3"));
        chess_1_3->setGeometry(QRect(145, 65, 55, 28));
        chess_1_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_1_3->setText(QString::fromUtf8(""));
        chess_1_3->setIcon(icon);
        chess_1_3->setIconSize(QSize(55, 28));
        chess_1_3->setAutoDefault(false);
        chess_1_3->setFlat(true);
        chess_1_4 = new QPushButton(centralwidget);
        chess_1_4->setObjectName(QString::fromUtf8("chess_1_4"));
        chess_1_4->setGeometry(QRect(210, 65, 55, 28));
        chess_1_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_1_4->setText(QString::fromUtf8(""));
        chess_1_4->setIcon(icon);
        chess_1_4->setIconSize(QSize(55, 28));
        chess_1_4->setAutoDefault(false);
        chess_1_4->setFlat(true);
        chess_1_5 = new QPushButton(centralwidget);
        chess_1_5->setObjectName(QString::fromUtf8("chess_1_5"));
        chess_1_5->setGeometry(QRect(275, 65, 55, 28));
        chess_1_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_1_5->setText(QString::fromUtf8(""));
        chess_1_5->setIcon(icon);
        chess_1_5->setIconSize(QSize(55, 28));
        chess_1_5->setAutoDefault(false);
        chess_1_5->setFlat(true);
        chess_2_1 = new QPushButton(centralwidget);
        chess_2_1->setObjectName(QString::fromUtf8("chess_2_1"));
        chess_2_1->setGeometry(QRect(15, 97, 55, 28));
        chess_2_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_2_1->setText(QString::fromUtf8(""));
        chess_2_1->setIcon(icon);
        chess_2_1->setIconSize(QSize(55, 28));
        chess_2_1->setAutoDefault(false);
        chess_2_1->setFlat(true);
        chess_2_2 = new QPushButton(centralwidget);
        chess_2_2->setObjectName(QString::fromUtf8("chess_2_2"));
        chess_2_2->setGeometry(QRect(80, 97, 55, 28));
        chess_2_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_2_2->setText(QString::fromUtf8(""));
        chess_2_2->setIcon(icon);
        chess_2_2->setIconSize(QSize(55, 28));
        chess_2_2->setAutoDefault(false);
        chess_2_2->setFlat(true);
        chess_2_3 = new QPushButton(centralwidget);
        chess_2_3->setObjectName(QString::fromUtf8("chess_2_3"));
        chess_2_3->setGeometry(QRect(145, 97, 55, 28));
        chess_2_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_2_3->setText(QString::fromUtf8(""));
        chess_2_3->setIcon(icon);
        chess_2_3->setIconSize(QSize(55, 28));
        chess_2_3->setAutoDefault(false);
        chess_2_3->setFlat(true);
        chess_2_4 = new QPushButton(centralwidget);
        chess_2_4->setObjectName(QString::fromUtf8("chess_2_4"));
        chess_2_4->setGeometry(QRect(210, 97, 55, 28));
        chess_2_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_2_4->setText(QString::fromUtf8(""));
        chess_2_4->setIcon(icon);
        chess_2_4->setIconSize(QSize(55, 28));
        chess_2_4->setAutoDefault(false);
        chess_2_4->setFlat(true);
        chess_2_5 = new QPushButton(centralwidget);
        chess_2_5->setObjectName(QString::fromUtf8("chess_2_5"));
        chess_2_5->setGeometry(QRect(275, 97, 55, 28));
        chess_2_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_2_5->setText(QString::fromUtf8(""));
        chess_2_5->setIcon(icon);
        chess_2_5->setIconSize(QSize(55, 28));
        chess_2_5->setAutoDefault(false);
        chess_2_5->setFlat(true);
        chess_3_1 = new QPushButton(centralwidget);
        chess_3_1->setObjectName(QString::fromUtf8("chess_3_1"));
        chess_3_1->setGeometry(QRect(15, 130, 55, 28));
        chess_3_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_3_1->setText(QString::fromUtf8(""));
        chess_3_1->setIcon(icon);
        chess_3_1->setIconSize(QSize(55, 28));
        chess_3_1->setAutoDefault(false);
        chess_3_1->setFlat(true);
        chess_3_2 = new QPushButton(centralwidget);
        chess_3_2->setObjectName(QString::fromUtf8("chess_3_2"));
        chess_3_2->setGeometry(QRect(80, 130, 55, 28));
        chess_3_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_3_2->setText(QString::fromUtf8(""));
        chess_3_2->setIconSize(QSize(55, 28));
        chess_3_2->setAutoDefault(false);
        chess_3_2->setFlat(true);
        chess_3_3 = new QPushButton(centralwidget);
        chess_3_3->setObjectName(QString::fromUtf8("chess_3_3"));
        chess_3_3->setGeometry(QRect(145, 130, 55, 28));
        chess_3_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_3_3->setText(QString::fromUtf8(""));
        chess_3_3->setIcon(icon);
        chess_3_3->setIconSize(QSize(55, 28));
        chess_3_3->setAutoDefault(false);
        chess_3_3->setFlat(true);
        chess_3_4 = new QPushButton(centralwidget);
        chess_3_4->setObjectName(QString::fromUtf8("chess_3_4"));
        chess_3_4->setGeometry(QRect(210, 130, 55, 28));
        chess_3_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_3_4->setText(QString::fromUtf8(""));
        chess_3_4->setIconSize(QSize(55, 28));
        chess_3_4->setAutoDefault(false);
        chess_3_4->setFlat(true);
        chess_3_5 = new QPushButton(centralwidget);
        chess_3_5->setObjectName(QString::fromUtf8("chess_3_5"));
        chess_3_5->setGeometry(QRect(275, 130, 55, 28));
        chess_3_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_3_5->setText(QString::fromUtf8(""));
        chess_3_5->setIcon(icon);
        chess_3_5->setIconSize(QSize(55, 28));
        chess_3_5->setAutoDefault(false);
        chess_3_5->setFlat(true);
        chess_4_1 = new QPushButton(centralwidget);
        chess_4_1->setObjectName(QString::fromUtf8("chess_4_1"));
        chess_4_1->setGeometry(QRect(15, 162, 55, 28));
        chess_4_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_4_1->setText(QString::fromUtf8(""));
        chess_4_1->setIcon(icon);
        chess_4_1->setIconSize(QSize(55, 28));
        chess_4_1->setAutoDefault(false);
        chess_4_1->setFlat(true);
        chess_4_2 = new QPushButton(centralwidget);
        chess_4_2->setObjectName(QString::fromUtf8("chess_4_2"));
        chess_4_2->setGeometry(QRect(80, 162, 55, 28));
        chess_4_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_4_2->setText(QString::fromUtf8(""));
        chess_4_2->setIcon(icon);
        chess_4_2->setIconSize(QSize(55, 28));
        chess_4_2->setAutoDefault(false);
        chess_4_2->setFlat(true);
        chess_4_3 = new QPushButton(centralwidget);
        chess_4_3->setObjectName(QString::fromUtf8("chess_4_3"));
        chess_4_3->setGeometry(QRect(145, 162, 55, 28));
        chess_4_3->setCursor(QCursor(Qt::ArrowCursor));
        chess_4_3->setText(QString::fromUtf8(""));
        chess_4_3->setIconSize(QSize(55, 28));
        chess_4_3->setAutoDefault(false);
        chess_4_3->setFlat(true);
        chess_4_4 = new QPushButton(centralwidget);
        chess_4_4->setObjectName(QString::fromUtf8("chess_4_4"));
        chess_4_4->setGeometry(QRect(210, 162, 55, 28));
        chess_4_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_4_4->setText(QString::fromUtf8(""));
        chess_4_4->setIcon(icon);
        chess_4_4->setIconSize(QSize(55, 28));
        chess_4_4->setAutoDefault(false);
        chess_4_4->setFlat(true);
        chess_4_5 = new QPushButton(centralwidget);
        chess_4_5->setObjectName(QString::fromUtf8("chess_4_5"));
        chess_4_5->setGeometry(QRect(275, 162, 55, 28));
        chess_4_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_4_5->setText(QString::fromUtf8(""));
        chess_4_5->setIcon(icon);
        chess_4_5->setIconSize(QSize(55, 28));
        chess_4_5->setAutoDefault(false);
        chess_4_5->setFlat(true);
        chess_5_1 = new QPushButton(centralwidget);
        chess_5_1->setObjectName(QString::fromUtf8("chess_5_1"));
        chess_5_1->setGeometry(QRect(15, 194, 55, 28));
        chess_5_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_5_1->setText(QString::fromUtf8(""));
        chess_5_1->setIcon(icon);
        chess_5_1->setIconSize(QSize(55, 28));
        chess_5_1->setAutoDefault(false);
        chess_5_1->setFlat(true);
        chess_5_2 = new QPushButton(centralwidget);
        chess_5_2->setObjectName(QString::fromUtf8("chess_5_2"));
        chess_5_2->setGeometry(QRect(80, 194, 55, 28));
        chess_5_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_5_2->setText(QString::fromUtf8(""));
        chess_5_2->setIconSize(QSize(55, 28));
        chess_5_2->setAutoDefault(false);
        chess_5_2->setFlat(true);
        chess_5_3 = new QPushButton(centralwidget);
        chess_5_3->setObjectName(QString::fromUtf8("chess_5_3"));
        chess_5_3->setGeometry(QRect(145, 194, 55, 28));
        chess_5_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_5_3->setText(QString::fromUtf8(""));
        chess_5_3->setIcon(icon);
        chess_5_3->setIconSize(QSize(55, 28));
        chess_5_3->setAutoDefault(false);
        chess_5_3->setFlat(true);
        chess_5_4 = new QPushButton(centralwidget);
        chess_5_4->setObjectName(QString::fromUtf8("chess_5_4"));
        chess_5_4->setGeometry(QRect(210, 194, 55, 28));
        chess_5_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_5_4->setText(QString::fromUtf8(""));
        chess_5_4->setIconSize(QSize(55, 28));
        chess_5_4->setAutoDefault(false);
        chess_5_4->setFlat(true);
        chess_5_5 = new QPushButton(centralwidget);
        chess_5_5->setObjectName(QString::fromUtf8("chess_5_5"));
        chess_5_5->setGeometry(QRect(275, 194, 55, 28));
        chess_5_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_5_5->setText(QString::fromUtf8(""));
        chess_5_5->setIcon(icon);
        chess_5_5->setIconSize(QSize(55, 28));
        chess_5_5->setAutoDefault(false);
        chess_5_5->setFlat(true);
        chess_6_1 = new QPushButton(centralwidget);
        chess_6_1->setObjectName(QString::fromUtf8("chess_6_1"));
        chess_6_1->setGeometry(QRect(15, 227, 55, 28));
        chess_6_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_6_1->setText(QString::fromUtf8(""));
        chess_6_1->setIcon(icon);
        chess_6_1->setIconSize(QSize(55, 28));
        chess_6_1->setAutoDefault(false);
        chess_6_1->setFlat(true);
        chess_6_2 = new QPushButton(centralwidget);
        chess_6_2->setObjectName(QString::fromUtf8("chess_6_2"));
        chess_6_2->setGeometry(QRect(80, 227, 55, 28));
        chess_6_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_6_2->setText(QString::fromUtf8(""));
        chess_6_2->setIcon(icon);
        chess_6_2->setIconSize(QSize(55, 28));
        chess_6_2->setAutoDefault(false);
        chess_6_2->setFlat(true);
        chess_6_3 = new QPushButton(centralwidget);
        chess_6_3->setObjectName(QString::fromUtf8("chess_6_3"));
        chess_6_3->setGeometry(QRect(145, 227, 55, 28));
        chess_6_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_6_3->setText(QString::fromUtf8(""));
        chess_6_3->setIcon(icon);
        chess_6_3->setIconSize(QSize(55, 28));
        chess_6_3->setAutoDefault(false);
        chess_6_3->setFlat(true);
        chess_6_4 = new QPushButton(centralwidget);
        chess_6_4->setObjectName(QString::fromUtf8("chess_6_4"));
        chess_6_4->setGeometry(QRect(210, 227, 55, 28));
        chess_6_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_6_4->setText(QString::fromUtf8(""));
        chess_6_4->setIcon(icon);
        chess_6_4->setIconSize(QSize(55, 28));
        chess_6_4->setAutoDefault(false);
        chess_6_4->setFlat(true);
        chess_6_5 = new QPushButton(centralwidget);
        chess_6_5->setObjectName(QString::fromUtf8("chess_6_5"));
        chess_6_5->setGeometry(QRect(275, 227, 55, 28));
        chess_6_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_6_5->setText(QString::fromUtf8(""));
        chess_6_5->setIcon(icon);
        chess_6_5->setIconSize(QSize(55, 28));
        chess_6_5->setAutoDefault(false);
        chess_6_5->setFlat(true);
        chess_7_1 = new QPushButton(centralwidget);
        chess_7_1->setObjectName(QString::fromUtf8("chess_7_1"));
        chess_7_1->setGeometry(QRect(15, 328, 55, 28));
        chess_7_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_7_1->setText(QString::fromUtf8(""));
        chess_7_1->setIcon(icon);
        chess_7_1->setIconSize(QSize(55, 28));
        chess_7_1->setAutoDefault(false);
        chess_7_1->setFlat(true);
        chess_7_2 = new QPushButton(centralwidget);
        chess_7_2->setObjectName(QString::fromUtf8("chess_7_2"));
        chess_7_2->setGeometry(QRect(80, 328, 55, 28));
        chess_7_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_7_2->setText(QString::fromUtf8(""));
        chess_7_2->setIcon(icon);
        chess_7_2->setIconSize(QSize(55, 28));
        chess_7_2->setAutoDefault(false);
        chess_7_2->setFlat(true);
        chess_7_3 = new QPushButton(centralwidget);
        chess_7_3->setObjectName(QString::fromUtf8("chess_7_3"));
        chess_7_3->setGeometry(QRect(145, 328, 55, 28));
        chess_7_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_7_3->setText(QString::fromUtf8(""));
        chess_7_3->setIcon(icon);
        chess_7_3->setIconSize(QSize(55, 28));
        chess_7_3->setAutoDefault(false);
        chess_7_3->setFlat(true);
        chess_7_4 = new QPushButton(centralwidget);
        chess_7_4->setObjectName(QString::fromUtf8("chess_7_4"));
        chess_7_4->setGeometry(QRect(210, 328, 55, 28));
        chess_7_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_7_4->setText(QString::fromUtf8(""));
        chess_7_4->setIcon(icon);
        chess_7_4->setIconSize(QSize(55, 28));
        chess_7_4->setAutoDefault(false);
        chess_7_4->setFlat(true);
        chess_7_5 = new QPushButton(centralwidget);
        chess_7_5->setObjectName(QString::fromUtf8("chess_7_5"));
        chess_7_5->setGeometry(QRect(275, 328, 55, 28));
        chess_7_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_7_5->setText(QString::fromUtf8(""));
        chess_7_5->setIcon(icon);
        chess_7_5->setIconSize(QSize(55, 28));
        chess_7_5->setAutoDefault(false);
        chess_7_5->setFlat(true);
        chess_8_1 = new QPushButton(centralwidget);
        chess_8_1->setObjectName(QString::fromUtf8("chess_8_1"));
        chess_8_1->setGeometry(QRect(15, 360, 55, 28));
        chess_8_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_8_1->setText(QString::fromUtf8(""));
        chess_8_1->setIcon(icon);
        chess_8_1->setIconSize(QSize(55, 28));
        chess_8_1->setAutoDefault(false);
        chess_8_1->setFlat(true);
        chess_8_2 = new QPushButton(centralwidget);
        chess_8_2->setObjectName(QString::fromUtf8("chess_8_2"));
        chess_8_2->setGeometry(QRect(80, 360, 55, 28));
        chess_8_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_8_2->setText(QString::fromUtf8(""));
        chess_8_2->setIconSize(QSize(55, 28));
        chess_8_2->setAutoDefault(false);
        chess_8_2->setFlat(true);
        chess_8_3 = new QPushButton(centralwidget);
        chess_8_3->setObjectName(QString::fromUtf8("chess_8_3"));
        chess_8_3->setGeometry(QRect(145, 360, 55, 28));
        chess_8_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_8_3->setText(QString::fromUtf8(""));
        chess_8_3->setIcon(icon);
        chess_8_3->setIconSize(QSize(55, 28));
        chess_8_3->setAutoDefault(false);
        chess_8_3->setFlat(true);
        chess_8_4 = new QPushButton(centralwidget);
        chess_8_4->setObjectName(QString::fromUtf8("chess_8_4"));
        chess_8_4->setGeometry(QRect(210, 360, 55, 28));
        chess_8_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_8_4->setText(QString::fromUtf8(""));
        chess_8_4->setIconSize(QSize(55, 28));
        chess_8_4->setAutoDefault(false);
        chess_8_4->setFlat(true);
        chess_8_5 = new QPushButton(centralwidget);
        chess_8_5->setObjectName(QString::fromUtf8("chess_8_5"));
        chess_8_5->setGeometry(QRect(275, 360, 55, 28));
        chess_8_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_8_5->setText(QString::fromUtf8(""));
        chess_8_5->setIcon(icon);
        chess_8_5->setIconSize(QSize(55, 28));
        chess_8_5->setAutoDefault(false);
        chess_8_5->setFlat(true);
        chess_9_1 = new QPushButton(centralwidget);
        chess_9_1->setObjectName(QString::fromUtf8("chess_9_1"));
        chess_9_1->setGeometry(QRect(15, 392, 55, 28));
        chess_9_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_9_1->setText(QString::fromUtf8(""));
        chess_9_1->setIcon(icon);
        chess_9_1->setIconSize(QSize(55, 28));
        chess_9_1->setAutoDefault(false);
        chess_9_1->setFlat(true);
        chess_9_2 = new QPushButton(centralwidget);
        chess_9_2->setObjectName(QString::fromUtf8("chess_9_2"));
        chess_9_2->setGeometry(QRect(80, 392, 55, 28));
        chess_9_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_9_2->setText(QString::fromUtf8(""));
        chess_9_2->setIcon(icon);
        chess_9_2->setIconSize(QSize(55, 28));
        chess_9_2->setAutoDefault(false);
        chess_9_2->setFlat(true);
        chess_9_3 = new QPushButton(centralwidget);
        chess_9_3->setObjectName(QString::fromUtf8("chess_9_3"));
        chess_9_3->setGeometry(QRect(145, 392, 55, 28));
        chess_9_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_9_3->setText(QString::fromUtf8(""));
        chess_9_3->setIconSize(QSize(55, 28));
        chess_9_3->setAutoDefault(false);
        chess_9_3->setFlat(true);
        chess_9_4 = new QPushButton(centralwidget);
        chess_9_4->setObjectName(QString::fromUtf8("chess_9_4"));
        chess_9_4->setGeometry(QRect(210, 392, 55, 28));
        chess_9_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_9_4->setText(QString::fromUtf8(""));
        chess_9_4->setIcon(icon);
        chess_9_4->setIconSize(QSize(55, 28));
        chess_9_4->setAutoDefault(false);
        chess_9_4->setFlat(true);
        chess_9_5 = new QPushButton(centralwidget);
        chess_9_5->setObjectName(QString::fromUtf8("chess_9_5"));
        chess_9_5->setGeometry(QRect(275, 392, 55, 28));
        chess_9_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_9_5->setText(QString::fromUtf8(""));
        chess_9_5->setIcon(icon);
        chess_9_5->setIconSize(QSize(55, 28));
        chess_9_5->setAutoDefault(false);
        chess_9_5->setFlat(true);
        chess_10_1 = new QPushButton(centralwidget);
        chess_10_1->setObjectName(QString::fromUtf8("chess_10_1"));
        chess_10_1->setGeometry(QRect(15, 424, 55, 28));
        chess_10_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_10_1->setText(QString::fromUtf8(""));
        chess_10_1->setIcon(icon);
        chess_10_1->setIconSize(QSize(55, 28));
        chess_10_1->setAutoDefault(false);
        chess_10_1->setFlat(true);
        chess_10_2 = new QPushButton(centralwidget);
        chess_10_2->setObjectName(QString::fromUtf8("chess_10_2"));
        chess_10_2->setGeometry(QRect(80, 424, 55, 28));
        chess_10_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_10_2->setText(QString::fromUtf8(""));
        chess_10_2->setIconSize(QSize(55, 28));
        chess_10_2->setAutoDefault(false);
        chess_10_2->setFlat(true);
        chess_10_3 = new QPushButton(centralwidget);
        chess_10_3->setObjectName(QString::fromUtf8("chess_10_3"));
        chess_10_3->setGeometry(QRect(145, 424, 55, 28));
        chess_10_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_10_3->setText(QString::fromUtf8(""));
        chess_10_3->setIcon(icon);
        chess_10_3->setIconSize(QSize(55, 28));
        chess_10_3->setAutoDefault(false);
        chess_10_3->setFlat(true);
        chess_10_4 = new QPushButton(centralwidget);
        chess_10_4->setObjectName(QString::fromUtf8("chess_10_4"));
        chess_10_4->setGeometry(QRect(210, 424, 55, 28));
        chess_10_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_10_4->setText(QString::fromUtf8(""));
        chess_10_4->setIconSize(QSize(55, 28));
        chess_10_4->setAutoDefault(false);
        chess_10_4->setFlat(true);
        chess_10_5 = new QPushButton(centralwidget);
        chess_10_5->setObjectName(QString::fromUtf8("chess_10_5"));
        chess_10_5->setGeometry(QRect(275, 424, 55, 28));
        chess_10_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_10_5->setText(QString::fromUtf8(""));
        chess_10_5->setIcon(icon);
        chess_10_5->setIconSize(QSize(55, 28));
        chess_10_5->setAutoDefault(false);
        chess_10_5->setFlat(true);
        chess_11_1 = new QPushButton(centralwidget);
        chess_11_1->setObjectName(QString::fromUtf8("chess_11_1"));
        chess_11_1->setGeometry(QRect(15, 457, 55, 28));
        chess_11_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_11_1->setText(QString::fromUtf8(""));
        chess_11_1->setIcon(icon);
        chess_11_1->setIconSize(QSize(55, 28));
        chess_11_1->setAutoDefault(false);
        chess_11_1->setFlat(true);
        chess_11_2 = new QPushButton(centralwidget);
        chess_11_2->setObjectName(QString::fromUtf8("chess_11_2"));
        chess_11_2->setGeometry(QRect(80, 457, 55, 28));
        chess_11_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_11_2->setText(QString::fromUtf8(""));
        chess_11_2->setIcon(icon);
        chess_11_2->setIconSize(QSize(55, 28));
        chess_11_2->setAutoDefault(false);
        chess_11_2->setFlat(true);
        chess_11_3 = new QPushButton(centralwidget);
        chess_11_3->setObjectName(QString::fromUtf8("chess_11_3"));
        chess_11_3->setGeometry(QRect(145, 457, 55, 28));
        chess_11_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_11_3->setText(QString::fromUtf8(""));
        chess_11_3->setIcon(icon);
        chess_11_3->setIconSize(QSize(55, 28));
        chess_11_3->setAutoDefault(false);
        chess_11_3->setFlat(true);
        chess_11_4 = new QPushButton(centralwidget);
        chess_11_4->setObjectName(QString::fromUtf8("chess_11_4"));
        chess_11_4->setGeometry(QRect(210, 457, 55, 28));
        chess_11_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_11_4->setText(QString::fromUtf8(""));
        chess_11_4->setIcon(icon);
        chess_11_4->setIconSize(QSize(55, 28));
        chess_11_4->setAutoDefault(false);
        chess_11_4->setFlat(true);
        chess_11_5 = new QPushButton(centralwidget);
        chess_11_5->setObjectName(QString::fromUtf8("chess_11_5"));
        chess_11_5->setGeometry(QRect(275, 457, 55, 28));
        chess_11_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_11_5->setText(QString::fromUtf8(""));
        chess_11_5->setIcon(icon);
        chess_11_5->setIconSize(QSize(55, 28));
        chess_11_5->setAutoDefault(false);
        chess_11_5->setFlat(true);
        chess_12_1 = new QPushButton(centralwidget);
        chess_12_1->setObjectName(QString::fromUtf8("chess_12_1"));
        chess_12_1->setGeometry(QRect(15, 489, 55, 28));
        chess_12_1->setCursor(QCursor(Qt::PointingHandCursor));
        chess_12_1->setText(QString::fromUtf8(""));
        chess_12_1->setIcon(icon);
        chess_12_1->setIconSize(QSize(55, 28));
        chess_12_1->setAutoDefault(false);
        chess_12_1->setFlat(true);
        chess_12_2 = new QPushButton(centralwidget);
        chess_12_2->setObjectName(QString::fromUtf8("chess_12_2"));
        chess_12_2->setGeometry(QRect(80, 489, 55, 28));
        chess_12_2->setCursor(QCursor(Qt::PointingHandCursor));
        chess_12_2->setText(QString::fromUtf8(""));
        chess_12_2->setIcon(icon);
        chess_12_2->setIconSize(QSize(55, 28));
        chess_12_2->setAutoDefault(false);
        chess_12_2->setFlat(true);
        chess_12_3 = new QPushButton(centralwidget);
        chess_12_3->setObjectName(QString::fromUtf8("chess_12_3"));
        chess_12_3->setGeometry(QRect(145, 489, 55, 28));
        chess_12_3->setCursor(QCursor(Qt::PointingHandCursor));
        chess_12_3->setText(QString::fromUtf8(""));
        chess_12_3->setIcon(icon);
        chess_12_3->setIconSize(QSize(55, 28));
        chess_12_3->setAutoDefault(false);
        chess_12_3->setFlat(true);
        chess_12_4 = new QPushButton(centralwidget);
        chess_12_4->setObjectName(QString::fromUtf8("chess_12_4"));
        chess_12_4->setGeometry(QRect(210, 489, 55, 28));
        chess_12_4->setCursor(QCursor(Qt::PointingHandCursor));
        chess_12_4->setText(QString::fromUtf8(""));
        chess_12_4->setIcon(icon);
        chess_12_4->setIconSize(QSize(55, 28));
        chess_12_4->setAutoDefault(false);
        chess_12_4->setFlat(true);
        chess_12_5 = new QPushButton(centralwidget);
        chess_12_5->setObjectName(QString::fromUtf8("chess_12_5"));
        chess_12_5->setGeometry(QRect(275, 489, 55, 28));
        chess_12_5->setCursor(QCursor(Qt::PointingHandCursor));
        chess_12_5->setText(QString::fromUtf8(""));
        chess_12_5->setIcon(icon);
        chess_12_5->setIconSize(QSize(55, 28));
        chess_12_5->setAutoDefault(false);
        chess_12_5->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        menuConnect = new QMenu(menubar);
        menuConnect->setObjectName(QString::fromUtf8("menuConnect"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        menuConnect->setFont(font2);
        menuPlay = new QMenu(menubar);
        menuPlay->setObjectName(QString::fromUtf8("menuPlay"));
        menuPlay->setFont(font2);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuConnect->menuAction());
        menubar->addAction(menuPlay->menuAction());
        menuConnect->addAction(actionCreate_the_Connection);
        menuConnect->addAction(actionConnect_to_Server);
        menuConnect->addAction(actionDisconnect);
        menuPlay->addAction(actionStart);
        menuPlay->addAction(actionAdmit_Defeat);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate_the_Connection->setText(QCoreApplication::translate("MainWindow", "Create the Connection", nullptr));
        actionConnect_to_Server->setText(QCoreApplication::translate("MainWindow", "Connect to Server", nullptr));
        actionStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        actionAdmit_Defeat->setText(QCoreApplication::translate("MainWindow", "Admit Defeat", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        chessboard->setText(QString());
        msg_turn->setText(QCoreApplication::translate("MainWindow", "Disconnected.", nullptr));
        msg_timing->setText(QCoreApplication::translate("MainWindow", "Game timer: Off", nullptr));
        msg_color_and_hints->setText(QCoreApplication::translate("MainWindow", "Please wait for connection and start game.", nullptr));
#if QT_CONFIG(shortcut)
        chess_1_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_1_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_1_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_1_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_1_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_2_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_2_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_2_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_2_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_2_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_3_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_3_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_3_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_3_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_3_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_4_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_4_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_4_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_4_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_4_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_5_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_5_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_5_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_5_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_5_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_6_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_6_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_6_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_6_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_6_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_7_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_7_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_7_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_7_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_7_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_8_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_8_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_8_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_8_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_8_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_9_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_9_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_9_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_9_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_9_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_10_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_10_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_10_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_10_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_10_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_11_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_11_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_11_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_11_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_11_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_12_1->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_12_2->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_12_3->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_12_4->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
        chess_12_5->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        menuConnect->setTitle(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        menuPlay->setTitle(QCoreApplication::translate("MainWindow", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
