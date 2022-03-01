#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>

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
    void on_setPlayTime_clicked();
    void on_player2_clicked();
    void on_player1_clicked();
public slots:
    void handleTimeout();

private:
    Ui::MainWindow *ui;
    QTimer timer;
    int player1Time = 0;
    int player2Time = 0;
    short activePlayer = -1;

};
#endif // MAINWINDOW_H
