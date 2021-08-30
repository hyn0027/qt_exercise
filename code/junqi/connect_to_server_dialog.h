#ifndef CONNECT_TO_SERVER_DIALOG_H
#define CONNECT_TO_SERVER_DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

namespace Ui {
class Connect_to_Server_Dialog;
}

class Connect_to_Server_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Connect_to_Server_Dialog(QWidget *parent = nullptr);
    ~Connect_to_Server_Dialog();
    QString m_address;

private slots:
    void on_Cancel_Button_clicked();
    void on_Ok_Button_clicked();

private:
    void keyPressed(QString x);
    void m_del();

private:
    Ui::Connect_to_Server_Dialog *ui;
};

#endif // CONNECT_TO_SERVER_DIALOG_H
