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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *refresh;
    QSpacerItem *horizontalSpacer;
    QPushButton *addExpense;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 771, 561));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(layoutWidget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        refresh = new QPushButton(layoutWidget);
        refresh->setObjectName("refresh");
        refresh->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 127);\n"
"font: 12pt \"Segoe UI\";\n"
"min-width: 10px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius:10px;\n"
"border-color: white;\n"
"color: white;\n"
"pedding: 6px;"));

        horizontalLayout->addWidget(refresh);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addExpense = new QPushButton(layoutWidget);
        addExpense->setObjectName("addExpense");
        addExpense->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"font: 12pt \"Segoe UI\";\n"
"min-width: 10px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius:10px;\n"
"border-color: white;\n"
"color: white;\n"
"pedding: 6px;"));

        horizontalLayout->addWidget(addExpense);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        refresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        addExpense->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
