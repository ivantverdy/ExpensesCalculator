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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listViewElement
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *Label;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *Category;
    QLabel *label_10;
    QLineEdit *Description;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *edit;
    QPushButton *deleteButton;
    QLineEdit *Price;
    QLineEdit *DateTime;

    void setupUi(QDialog *listViewElement)
    {
        if (listViewElement->objectName().isEmpty())
            listViewElement->setObjectName("listViewElement");
        listViewElement->resize(540, 273);
        verticalLayoutWidget_2 = new QWidget(listViewElement);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 501, 221));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setBold(true);
        label_6->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        Label = new QLineEdit(verticalLayoutWidget_2);
        Label->setObjectName("Label");

        formLayout->setWidget(0, QFormLayout::FieldRole, Label);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_9);

        Category = new QLineEdit(verticalLayoutWidget_2);
        Category->setObjectName("Category");

        formLayout->setWidget(2, QFormLayout::FieldRole, Category);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_10);

        Description = new QLineEdit(verticalLayoutWidget_2);
        Description->setObjectName("Description");

        formLayout->setWidget(3, QFormLayout::FieldRole, Description);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        edit = new QPushButton(verticalLayoutWidget_2);
        edit->setObjectName("edit");
        edit->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 127);\n"
"font: 12pt \"Segoe UI\";\n"
"min-width: 10px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius:10px;\n"
"border-color: white;\n"
"color: white;\n"
"pedding: 6px;"));

        horizontalLayout_4->addWidget(edit);

        deleteButton = new QPushButton(verticalLayoutWidget_2);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 127);\n"
"font: 12pt \"Segoe UI\";\n"
"min-width: 10px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius:10px;\n"
"border-color: white;\n"
"color: white;\n"
"pedding: 6px;"));

        horizontalLayout_4->addWidget(deleteButton);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_4);

        Price = new QLineEdit(verticalLayoutWidget_2);
        Price->setObjectName("Price");

        formLayout->setWidget(1, QFormLayout::FieldRole, Price);

        DateTime = new QLineEdit(verticalLayoutWidget_2);
        DateTime->setObjectName("DateTime");

        formLayout->setWidget(4, QFormLayout::FieldRole, DateTime);


        verticalLayout_4->addLayout(formLayout);


        retranslateUi(listViewElement);

        QMetaObject::connectSlotsByName(listViewElement);
    } // setupUi

    void retranslateUi(QDialog *listViewElement)
    {
        listViewElement->setWindowTitle(QCoreApplication::translate("listViewElement", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("listViewElement", "Label:", nullptr));
        label_8->setText(QCoreApplication::translate("listViewElement", "Price:", nullptr));
        label_9->setText(QCoreApplication::translate("listViewElement", "Category:", nullptr));
        label_10->setText(QCoreApplication::translate("listViewElement", "Description:", nullptr));
        label_11->setText(QCoreApplication::translate("listViewElement", "Date and time of purchase:", nullptr));
        edit->setText(QCoreApplication::translate("listViewElement", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("listViewElement", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listViewElement: public Ui_listViewElement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEWELEMENT_H
