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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *addExpence;
    QPushButton *editExpence;
    QPushButton *evaluateExpence;
    QPushButton *deleteExpence;
    QPushButton *listExpence;
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
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(34, 27, 721, 361));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../../Users/aboba/Downloads/calcicon.png")));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addExpence = new QPushButton(verticalLayoutWidget_2);
        addExpence->setObjectName("addExpence");

        verticalLayout->addWidget(addExpence);

        editExpence = new QPushButton(verticalLayoutWidget_2);
        editExpence->setObjectName("editExpence");

        verticalLayout->addWidget(editExpence);

        evaluateExpence = new QPushButton(verticalLayoutWidget_2);
        evaluateExpence->setObjectName("evaluateExpence");

        verticalLayout->addWidget(evaluateExpence);

        deleteExpence = new QPushButton(verticalLayoutWidget_2);
        deleteExpence->setObjectName("deleteExpence");

        verticalLayout->addWidget(deleteExpence);

        listExpence = new QPushButton(verticalLayoutWidget_2);
        listExpence->setObjectName("listExpence");

        verticalLayout->addWidget(listExpence);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

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
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Welcome to Expenses Tracker!", nullptr));
        addExpence->setText(QCoreApplication::translate("MainWindow", "Add expence", nullptr));
        editExpence->setText(QCoreApplication::translate("MainWindow", "Edit expence", nullptr));
        evaluateExpence->setText(QCoreApplication::translate("MainWindow", "Evaluate expence", nullptr));
        deleteExpence->setText(QCoreApplication::translate("MainWindow", "Delete expence", nullptr));
        listExpence->setText(QCoreApplication::translate("MainWindow", "List expence", nullptr));
        menuTransactions->setTitle(QCoreApplication::translate("MainWindow", "Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
