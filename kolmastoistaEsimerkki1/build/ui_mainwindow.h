/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *player2;
    QPushButton *player1;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *player1Label;
    QLineEdit *player1TimeLeft;
    QLabel *player2Label;
    QLineEdit *player2TimeLeft;
    QPushButton *setPlayTime;
    QLineEdit *setPlayTimeLineEdit;
    QMenuBar *menubar;
    QMenu *menuShakkikello_sovellus;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(409, 212);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        player2 = new QPushButton(widget);
        player2->setObjectName(QString::fromUtf8("player2"));

        horizontalLayout->addWidget(player2);

        player1 = new QPushButton(widget);
        player1->setObjectName(QString::fromUtf8("player1"));

        horizontalLayout->addWidget(player1);

        splitter->addWidget(widget);
        formLayoutWidget = new QWidget(splitter);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        player1Label = new QLabel(formLayoutWidget);
        player1Label->setObjectName(QString::fromUtf8("player1Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, player1Label);

        player1TimeLeft = new QLineEdit(formLayoutWidget);
        player1TimeLeft->setObjectName(QString::fromUtf8("player1TimeLeft"));

        formLayout->setWidget(1, QFormLayout::FieldRole, player1TimeLeft);

        player2Label = new QLabel(formLayoutWidget);
        player2Label->setObjectName(QString::fromUtf8("player2Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, player2Label);

        player2TimeLeft = new QLineEdit(formLayoutWidget);
        player2TimeLeft->setObjectName(QString::fromUtf8("player2TimeLeft"));

        formLayout->setWidget(2, QFormLayout::FieldRole, player2TimeLeft);

        setPlayTime = new QPushButton(formLayoutWidget);
        setPlayTime->setObjectName(QString::fromUtf8("setPlayTime"));

        formLayout->setWidget(0, QFormLayout::LabelRole, setPlayTime);

        setPlayTimeLineEdit = new QLineEdit(formLayoutWidget);
        setPlayTimeLineEdit->setObjectName(QString::fromUtf8("setPlayTimeLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, setPlayTimeLineEdit);

        splitter->addWidget(formLayoutWidget);

        horizontalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 409, 25));
        menuShakkikello_sovellus = new QMenu(menubar);
        menuShakkikello_sovellus->setObjectName(QString::fromUtf8("menuShakkikello_sovellus"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuShakkikello_sovellus->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        player2->setText(QCoreApplication::translate("MainWindow", "Player2", nullptr));
        player1->setText(QCoreApplication::translate("MainWindow", "Player1", nullptr));
        player1Label->setText(QCoreApplication::translate("MainWindow", "Player1 time left", nullptr));
        player2Label->setText(QCoreApplication::translate("MainWindow", "Player2 time left", nullptr));
        setPlayTime->setText(QCoreApplication::translate("MainWindow", "SetPlayTime", nullptr));
        menuShakkikello_sovellus->setTitle(QCoreApplication::translate("MainWindow", "Shakkikello sovellus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
