#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&timer,&QTimer::timeout,this,&MainWindow::handleTimeout);
}

MainWindow::~MainWindow()
{
    disconnect(&timer,&QTimer::timeout,this,&MainWindow::handleTimeout);
    delete ui;
}


void MainWindow::on_setPlayTime_clicked()
{
     // Let's read what time user has given into lineEdit
     // and store it as a starting value for each player
     QString playTime = ui->setPlayTimeLineEdit->text();
     player1Time = playTime.toInt();
     if(player1Time==0)
     {
         ui->setPlayTimeLineEdit->setText("give playtime in seconds!!!");
         playTime = "";
         return;
     }
     qDebug()<< player1Time;
     player2Time = player1Time;
     ui->setPlayTimeLineEdit->setText("PlayTime is now set = "+playTime);
     ui->player1TimeLeft->clear();
     ui->player2TimeLeft->clear();
}


void MainWindow::on_player2_clicked()
{
    if(player2Time<0)
    {
        ui->player1TimeLeft->setText("Player 2 time = 0!!!!");
        timer.stop();
        return;
    }
    activePlayer = 2;
    timer.start(1000);
}


void MainWindow::on_player1_clicked()
{
    if(player1Time<0)
    {
        ui->player1TimeLeft->setText("Player 1 time = 0!!!!");
        timer.stop();
        return;
    }
    activePlayer = 1;
    timer.start(1000);
}

void MainWindow::handleTimeout()
{
    int time;
    QLineEdit * pQlineEdit;

    if(activePlayer == 1)
    {
        player1Time--;
        time = player1Time;
        pQlineEdit = ui->player1TimeLeft;
    }
    else
    {
        player2Time--;
        time = player2Time;
        pQlineEdit = ui->player2TimeLeft;
    }

    if(time<=0)
    {
        timer.stop();
        pQlineEdit->setText("Player"+QString::number(activePlayer)+" time = 0");
    }
    else
    {
        pQlineEdit->setText(QString::number(time));
    }


}

