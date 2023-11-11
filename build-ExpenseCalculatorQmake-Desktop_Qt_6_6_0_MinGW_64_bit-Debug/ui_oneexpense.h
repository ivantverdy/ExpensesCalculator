/********************************************************************************
** Form generated from reading UI file 'oneexpense.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEEXPENSE_H
#define UI_ONEEXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_OneExpense
{
public:

    void setupUi(QDialog *OneExpense)
    {
        if (OneExpense->objectName().isEmpty())
            OneExpense->setObjectName("OneExpense");
        OneExpense->resize(400, 300);

        retranslateUi(OneExpense);

        QMetaObject::connectSlotsByName(OneExpense);
    } // setupUi

    void retranslateUi(QDialog *OneExpense)
    {
        OneExpense->setWindowTitle(QCoreApplication::translate("OneExpense", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OneExpense: public Ui_OneExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEEXPENSE_H
