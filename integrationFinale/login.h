#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include"employes.h"
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

public slots:
    bool on_pushButton_login_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
