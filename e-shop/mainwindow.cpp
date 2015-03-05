#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    registration m;
    m.show();
    delete ui;
}

void MainWindow::on_Exit_clicked()
{
    close();
}

void MainWindow::on_Enter_clicked()
{
    QSqlQuery qr;
    QString str = ui->comboBox->currentText();
    if (str == "Покупець")
        qr.exec("SELECT Login, Password FROM buyers;");
    else  qr.exec("SELECT Login, Password FROM administrators;");
    QString login, password;
    bool flag = 0;
    while (qr.next())
    {
        login = qr.value(0).toString();
        password = qr.value(1).toString();
        if (login == ui->TLogin->text() && password == ui->TPassword->text())
        {
             QMessageBox::information(this,"ОК","Авторизація пройшла успішно");
             flag = 1;
        }
        qDebug() << login;
        qDebug() << "-------->" << password;
    }
    if (0 == flag) QMessageBox::critical(this,"Помилка","Неправильний логін чи пароль");
}

void MainWindow::on_pushButton_clicked()
{
    registration *m = new registration;
    m->show();
}
