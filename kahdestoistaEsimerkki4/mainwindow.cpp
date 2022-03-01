#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked() // Oikeasti ADD button
{
    result = number1+number2;
    qDebug()<<"Summa = "<<result;
    QString tulos = QString::number(result);
    qDebug()<<"Tulos QStringina = "<<tulos;
    ui->tulos->setText(tulos);

}


void MainWindow::on_luku1_textChanged(const QString &arg1)
{
    qDebug()<<"luettu QString = "<<arg1;
    number1 = arg1.toDouble();
    qDebug()<<"numeroksi muutettu luku = "<< number1;
}


void MainWindow::on_luku2_textChanged(const QString &arg1)
{
    qDebug()<<"luettu QString = "<<arg1;
    number2 = arg1.toDouble();
    qDebug()<<"numeroksi muutettu luku = "<< number2;
}

