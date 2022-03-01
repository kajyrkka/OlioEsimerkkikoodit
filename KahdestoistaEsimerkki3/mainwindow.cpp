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


void MainWindow::on_button1_clicked()
{
    ui->button1->setText("Uusi Nimi");
    ui->laatikko1->setText("teksti laatikkoon");
}


void MainWindow::on_button1_destroyed()
{

}

