/********************************************************************************
** Form generated from reading UI file 'cannotadd.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANNOTADD_H
#define UI_CANNOTADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CanNotAdd
{
public:
    QLabel *label;

    void setupUi(QDialog *CanNotAdd)
    {
        if (CanNotAdd->objectName().isEmpty())
            CanNotAdd->setObjectName("CanNotAdd");
        CanNotAdd->resize(400, 300);
        label = new QLabel(CanNotAdd);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 100, 381, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(CanNotAdd);

        QMetaObject::connectSlotsByName(CanNotAdd);
    } // setupUi

    void retranslateUi(QDialog *CanNotAdd)
    {
        CanNotAdd->setWindowTitle(QCoreApplication::translate("CanNotAdd", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CanNotAdd", "Expenses without label or category can't be added", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CanNotAdd: public Ui_CanNotAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANNOTADD_H
