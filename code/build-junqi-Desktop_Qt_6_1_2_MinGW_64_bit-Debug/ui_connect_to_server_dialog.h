/********************************************************************************
** Form generated from reading UI file 'connect_to_server_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_TO_SERVER_DIALOG_H
#define UI_CONNECT_TO_SERVER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Connect_to_Server_Dialog
{
public:
    QLineEdit *IP_input;
    QLabel *illustration;
    QPushButton *Cancel_Button;
    QPushButton *Ok_Button;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_0;
    QPushButton *Button_Delete;
    QPushButton *Button_dot;

    void setupUi(QDialog *Connect_to_Server_Dialog)
    {
        if (Connect_to_Server_Dialog->objectName().isEmpty())
            Connect_to_Server_Dialog->setObjectName(QString::fromUtf8("Connect_to_Server_Dialog"));
        Connect_to_Server_Dialog->resize(220, 300);
        IP_input = new QLineEdit(Connect_to_Server_Dialog);
        IP_input->setObjectName(QString::fromUtf8("IP_input"));
        IP_input->setGeometry(QRect(89, 20, 101, 20));
        illustration = new QLabel(Connect_to_Server_Dialog);
        illustration->setObjectName(QString::fromUtf8("illustration"));
        illustration->setGeometry(QRect(20, 20, 71, 20));
        Cancel_Button = new QPushButton(Connect_to_Server_Dialog);
        Cancel_Button->setObjectName(QString::fromUtf8("Cancel_Button"));
        Cancel_Button->setGeometry(QRect(20, 50, 80, 22));
        Ok_Button = new QPushButton(Connect_to_Server_Dialog);
        Ok_Button->setObjectName(QString::fromUtf8("Ok_Button"));
        Ok_Button->setGeometry(QRect(110, 50, 80, 22));
        Button_1 = new QPushButton(Connect_to_Server_Dialog);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(20, 90, 45, 30));
        Button_2 = new QPushButton(Connect_to_Server_Dialog);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(83, 90, 45, 30));
        Button_3 = new QPushButton(Connect_to_Server_Dialog);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(145, 90, 45, 30));
        Button_4 = new QPushButton(Connect_to_Server_Dialog);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(20, 130, 45, 30));
        Button_5 = new QPushButton(Connect_to_Server_Dialog);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(83, 130, 45, 30));
        Button_6 = new QPushButton(Connect_to_Server_Dialog);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(145, 130, 45, 30));
        Button_7 = new QPushButton(Connect_to_Server_Dialog);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(20, 170, 45, 30));
        Button_8 = new QPushButton(Connect_to_Server_Dialog);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(83, 170, 45, 30));
        Button_9 = new QPushButton(Connect_to_Server_Dialog);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(145, 170, 45, 30));
        Button_0 = new QPushButton(Connect_to_Server_Dialog);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(83, 210, 45, 30));
        Button_Delete = new QPushButton(Connect_to_Server_Dialog);
        Button_Delete->setObjectName(QString::fromUtf8("Button_Delete"));
        Button_Delete->setGeometry(QRect(20, 210, 45, 30));
        Button_dot = new QPushButton(Connect_to_Server_Dialog);
        Button_dot->setObjectName(QString::fromUtf8("Button_dot"));
        Button_dot->setGeometry(QRect(145, 210, 45, 30));

        retranslateUi(Connect_to_Server_Dialog);

        QMetaObject::connectSlotsByName(Connect_to_Server_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Connect_to_Server_Dialog)
    {
        Connect_to_Server_Dialog->setWindowTitle(QCoreApplication::translate("Connect_to_Server_Dialog", "Dialog", nullptr));
        illustration->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "Enter IP: ", nullptr));
        Cancel_Button->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "Cancel", nullptr));
        Ok_Button->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "OK", nullptr));
        Button_1->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "1", nullptr));
        Button_2->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "3", nullptr));
        Button_4->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "4", nullptr));
        Button_5->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "5", nullptr));
        Button_6->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "6", nullptr));
        Button_7->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "7", nullptr));
        Button_8->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "8", nullptr));
        Button_9->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "9", nullptr));
        Button_0->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "0", nullptr));
        Button_Delete->setText(QCoreApplication::translate("Connect_to_Server_Dialog", "Delete", nullptr));
        Button_dot->setText(QCoreApplication::translate("Connect_to_Server_Dialog", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connect_to_Server_Dialog: public Ui_Connect_to_Server_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_TO_SERVER_DIALOG_H
