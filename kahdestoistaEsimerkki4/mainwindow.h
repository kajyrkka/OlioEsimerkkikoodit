#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

    void on_pushButton_clicked();

    void on_luku1_textChanged(const QString &arg1);

    void on_luku2_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    double number1,number2,result;
};
#endif // MAINWINDOW_H
