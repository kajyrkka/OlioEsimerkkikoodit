#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "childclass.h"

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
    void on_create1_clicked();

    void on_create2_clicked();

private:
    Ui::MainWindow *ui;
    childClass oChild;          // Kooste olio pinosta
    childClass * pchildClass;   // Kooste olion pointteri, joka saa arvon konstructorissa.
};
#endif // MAINWINDOW_H
