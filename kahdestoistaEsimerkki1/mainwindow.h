#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QTimer>
#include <QDebug>
#include "worker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

signals:
    void startJob1(short);
    void startJob2(short);

public slots:
    void showTime1(short);
    void showTime2(short);
    void stopProgram();
private:
    Ui::MainWindow *ui;
    QThread thread1;
    QThread thread2;
    Worker job1;
    Worker job2;

};
#endif // MAINWINDOW_H
