/********************************************************************************
** Form generated from reading UI file 'tableviewelement.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEVIEWELEMENT_H
#define UI_TABLEVIEWELEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listViewElement
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *listViewElement)
    {
        if (listViewElement->objectName().isEmpty())
            listViewElement->setObjectName("listViewElement");
        listViewElement->resize(550, 452);
        widget = new QWidget(listViewElement);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 521, 421));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);


        retranslateUi(listViewElement);

        QMetaObject::connectSlotsByName(listViewElement);
    } // setupUi

    void retranslateUi(QDialog *listViewElement)
    {
        listViewElement->setWindowTitle(QCoreApplication::translate("listViewElement", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("listViewElement", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listViewElement", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listViewElement: public Ui_listViewElement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEVIEWELEMENT_H
