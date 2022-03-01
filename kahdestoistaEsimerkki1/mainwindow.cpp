#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this,SIGNAL(startJob1(short)),
            &job1,SLOT(doWork(short)));

    connect(&job1,SIGNAL(sendTime(short)),
            this,SLOT(showTime1(short)));

    connect(this,SIGNAL(startJob2(short)),
            &job2,SLOT(doWork(short)));

    connect(&job2,SIGNAL(sendTime(short)),
            this,SLOT(showTime2(short)));


    connect(&thread1,SIGNAL(finished()),
            this, SLOT(stopProgram()));
}

MainWindow::~MainWindow()
{
    disconnect(this,SIGNAL(startJob1(short)),
            &job1,SLOT(doWork(short)));

    disconnect(&job1,SIGNAL(sendTime(short)),
            this,SLOT(showTime1(short)));
    thread1.wait();
    thread2.wait();

    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    job1.moveToThread(&thread1);
    thread1.start();
    emit startJob1(100);
}


void MainWindow::on_pushButton_2_clicked()
{
    job2.moveToThread(&thread2);
    thread2.start();
    emit startJob2(1000);
}

void MainWindow::showTime1(short time)
{
    qDebug()<<"showTime1 slot!!";
    ui->lineEdit->setText(QString::number(time));
    if(time==1000)
    {
        thread1.exit();
    }
}

void MainWindow::showTime2(short time)
{
    qDebug()<<"showTime2 slot!!";
    ui->lineEdit_2->setText(QString::number(time));
    if(time==5)
    {
        thread2.exit();
    }
}

void MainWindow::stopProgram()
{
    qDebug()<<"stopProgram slot!!";
    this->close();
}


void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

