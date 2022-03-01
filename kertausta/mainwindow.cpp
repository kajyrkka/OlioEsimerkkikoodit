#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "baseclass.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pchildClass = new childClass;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pchildClass;
}


void MainWindow::on_create1_clicked()
{
    BaseClass oBaseClass;
    oBaseClass.setPassword("Base");
    ui->listWidget->addItem(oBaseClass.getPassword());
}


void MainWindow::on_create2_clicked()
{
    oChild.setPassword("Child");
    ui->listWidget->addItem(oChild.getPassword());
    QString result = oChild.guessPassword();
    ui->listWidget->addItem("Child olion guesspassword = " + result);
}

