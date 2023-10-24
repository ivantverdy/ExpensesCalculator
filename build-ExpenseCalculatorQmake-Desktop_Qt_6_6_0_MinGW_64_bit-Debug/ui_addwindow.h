/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addWindow
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *label;
    QLabel *label_3;
    QDoubleSpinBox *price;
    QLabel *label_4;
    QLineEdit *description;
    QLabel *label_5;
    QLineEdit *category;
    QLabel *label_6;
    QDateTimeEdit *dateTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QDialog *addWindow)
    {
        if (addWindow->objectName().isEmpty())
            addWindow->setObjectName("addWindow");
        addWindow->resize(525, 373);
        verticalLayoutWidget_2 = new QWidget(addWindow);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 501, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setBold(true);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label = new QLineEdit(verticalLayoutWidget_2);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        price = new QDoubleSpinBox(verticalLayoutWidget_2);
        price->setObjectName("price");
        price->setDecimals(2);
        price->setMaximum(99999999999999997748809823456034029568.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, price);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        description = new QLineEdit(verticalLayoutWidget_2);
        description->setObjectName("description");

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        category = new QLineEdit(verticalLayoutWidget_2);
        category->setObjectName("category");

        formLayout->setWidget(3, QFormLayout::FieldRole, category);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        dateTime = new QDateTimeEdit(verticalLayoutWidget_2);
        dateTime->setObjectName("dateTime");

        formLayout->setWidget(4, QFormLayout::FieldRole, dateTime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        save = new QPushButton(verticalLayoutWidget_2);
        save->setObjectName("save");

        horizontalLayout->addWidget(save);

        cancel = new QPushButton(verticalLayoutWidget_2);
        cancel->setObjectName("cancel");

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addLayout(formLayout);


        retranslateUi(addWindow);

        QMetaObject::connectSlotsByName(addWindow);
    } // setupUi

    void retranslateUi(QDialog *addWindow)
    {
        addWindow->setWindowTitle(QCoreApplication::translate("addWindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("addWindow", "Label:", nullptr));
        label_3->setText(QCoreApplication::translate("addWindow", "Price:", nullptr));
        label_4->setText(QCoreApplication::translate("addWindow", "Category:", nullptr));
        label_5->setText(QCoreApplication::translate("addWindow", "Description:", nullptr));
        label_6->setText(QCoreApplication::translate("addWindow", "Date and time of purchase:", nullptr));
        save->setText(QCoreApplication::translate("addWindow", "Save", nullptr));
        cancel->setText(QCoreApplication::translate("addWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addWindow: public Ui_addWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
