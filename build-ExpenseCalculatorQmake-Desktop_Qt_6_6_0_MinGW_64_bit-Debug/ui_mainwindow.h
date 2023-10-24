/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addExpence;
    QPushButton *editExpence;
    QPushButton *evaluateExpence;
    QPushButton *deleteExpence;
    QPushButton *listExpence;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuTransactions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 150, 160, 146));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addExpence = new QPushButton(verticalLayoutWidget);
        addExpence->setObjectName("addExpence");

        verticalLayout->addWidget(addExpence);

        editExpence = new QPushButton(verticalLayoutWidget);
        editExpence->setObjectName("editExpence");

        verticalLayout->addWidget(editExpence);

        evaluateExpence = new QPushButton(verticalLayoutWidget);
        evaluateExpence->setObjectName("evaluateExpence");

        verticalLayout->addWidget(evaluateExpence);

        deleteExpence = new QPushButton(verticalLayoutWidget);
        deleteExpence->setObjectName("deleteExpence");

        verticalLayout->addWidget(deleteExpence);

        listExpence = new QPushButton(verticalLayoutWidget);
        listExpence->setObjectName("listExpence");

        verticalLayout->addWidget(listExpence);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 10, 571, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../../Users/aboba/Downloads/calcicon.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuTransactions = new QMenu(menubar);
        menuTransactions->setObjectName("menuTransactions");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTransactions->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addExpence->setText(QCoreApplication::translate("MainWindow", "Add expence", nullptr));
        editExpence->setText(QCoreApplication::translate("MainWindow", "Edit expence", nullptr));
        evaluateExpence->setText(QCoreApplication::translate("MainWindow", "Evaluate expence", nullptr));
        deleteExpence->setText(QCoreApplication::translate("MainWindow", "Delete expence", nullptr));
        listExpence->setText(QCoreApplication::translate("MainWindow", "List expence", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Welcome to Expenses Tracker!", nullptr));
        menuTransactions->setTitle(QCoreApplication::translate("MainWindow", "Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
