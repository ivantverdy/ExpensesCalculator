/********************************************************************************
** Form generated from reading UI file 'listviewelement.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTVIEWELEMENT_H
#define UI_LISTVIEWELEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listViewElement
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Label;
    QLineEdit *Category;
    QLineEdit *Description;
    QLineEdit *Price;
    QLineEdit *DateTime;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *listViewElement)
    {
        if (listViewElement->objectName().isEmpty())
            listViewElement->setObjectName("listViewElement");
        listViewElement->resize(550, 452);
        layoutWidget = new QWidget(listViewElement);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 391, 221));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        Label = new QLineEdit(layoutWidget);
        Label->setObjectName("Label");

        verticalLayout_2->addWidget(Label);

        Category = new QLineEdit(layoutWidget);
        Category->setObjectName("Category");

        verticalLayout_2->addWidget(Category);

        Description = new QLineEdit(layoutWidget);
        Description->setObjectName("Description");

        verticalLayout_2->addWidget(Description);

        Price = new QLineEdit(layoutWidget);
        Price->setObjectName("Price");

        verticalLayout_2->addWidget(Price);

        DateTime = new QLineEdit(layoutWidget);
        DateTime->setObjectName("DateTime");

        verticalLayout_2->addWidget(DateTime);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(listViewElement);

        QMetaObject::connectSlotsByName(listViewElement);
    } // setupUi

    void retranslateUi(QDialog *listViewElement)
    {
        listViewElement->setWindowTitle(QCoreApplication::translate("listViewElement", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("listViewElement", "Label", nullptr));
        label_2->setText(QCoreApplication::translate("listViewElement", "Category", nullptr));
        label_3->setText(QCoreApplication::translate("listViewElement", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("listViewElement", "Price", nullptr));
        label_5->setText(QCoreApplication::translate("listViewElement", "Date and time", nullptr));
        pushButton->setText(QCoreApplication::translate("listViewElement", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listViewElement", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listViewElement: public Ui_listViewElement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEWELEMENT_H
