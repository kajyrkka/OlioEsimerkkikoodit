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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *subButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *luku1;
    QLabel *label_2;
    QLineEdit *luku2;
    QLabel *label_3;
    QLineEdit *tulos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(438, 195);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        subButton = new QPushButton(verticalLayoutWidget);
        subButton->setObjectName(QString::fromUtf8("subButton"));

        verticalLayout->addWidget(subButton);

        mulButton = new QPushButton(verticalLayoutWidget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));

        verticalLayout->addWidget(mulButton);

        divButton = new QPushButton(verticalLayoutWidget);
        divButton->setObjectName(QString::fromUtf8("divButton"));

        verticalLayout->addWidget(divButton);

        splitter->addWidget(verticalLayoutWidget);
        formLayoutWidget = new QWidget(splitter);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        luku1 = new QLineEdit(formLayoutWidget);
        luku1->setObjectName(QString::fromUtf8("luku1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, luku1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        luku2 = new QLineEdit(formLayoutWidget);
        luku2->setObjectName(QString::fromUtf8("luku2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, luku2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        tulos = new QLineEdit(formLayoutWidget);
        tulos->setObjectName(QString::fromUtf8("tulos"));

        formLayout->setWidget(2, QFormLayout::FieldRole, tulos);

        splitter->addWidget(formLayoutWidget);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 438, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        subButton->setText(QCoreApplication::translate("MainWindow", "SUB", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "MUL", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "DIV", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Luku1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "luku2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "tulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
