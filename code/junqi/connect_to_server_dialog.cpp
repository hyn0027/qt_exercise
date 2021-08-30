#include "connect_to_server_dialog.h"
#include "ui_connect_to_server_dialog.h"

Connect_to_Server_Dialog::Connect_to_Server_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connect_to_Server_Dialog) {
    ui->setupUi(this);
    connect(ui -> Button_0, &QPushButton::clicked, this, [&](){keyPressed("0");});
    connect(ui -> Button_1, &QPushButton::clicked, this, [&](){keyPressed("1");});
    connect(ui -> Button_2, &QPushButton::clicked, this, [&](){keyPressed("2");});
    connect(ui -> Button_3, &QPushButton::clicked, this, [&](){keyPressed("3");});
    connect(ui -> Button_4, &QPushButton::clicked, this, [&](){keyPressed("4");});
    connect(ui -> Button_5, &QPushButton::clicked, this, [&](){keyPressed("5");});
    connect(ui -> Button_6, &QPushButton::clicked, this, [&](){keyPressed("6");});
    connect(ui -> Button_7, &QPushButton::clicked, this, [&](){keyPressed("7");});
    connect(ui -> Button_8, &QPushButton::clicked, this, [&](){keyPressed("8");});
    connect(ui -> Button_9, &QPushButton::clicked, this, [&](){keyPressed("9");});
    connect(ui -> Button_dot, &QPushButton::clicked, this, [&](){keyPressed(".");});
    connect(ui -> Button_Delete, &QPushButton::clicked, this, [&](){m_del();});
}

Connect_to_Server_Dialog::~Connect_to_Server_Dialog() {
    delete ui;
}

void Connect_to_Server_Dialog::keyPressed(QString x) {
    ui -> IP_input -> insert(x);
}

void Connect_to_Server_Dialog::m_del() {
    ui -> IP_input -> backspace();
}

void Connect_to_Server_Dialog::on_Cancel_Button_clicked() {
    this -> reject();
    this -> close();
}

void Connect_to_Server_Dialog::on_Ok_Button_clicked() {
    m_address = ui -> IP_input -> text();
    this -> accept();
}

