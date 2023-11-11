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

QT_BEGIN_NAMESPACE

class Ui_listViewElement
{
public:

    void setupUi(QDialog *listViewElement)
    {
        if (listViewElement->objectName().isEmpty())
            listViewElement->setObjectName("listViewElement");
        listViewElement->resize(470, 390);

        retranslateUi(listViewElement);

        QMetaObject::connectSlotsByName(listViewElement);
    } // setupUi

    void retranslateUi(QDialog *listViewElement)
    {
        listViewElement->setWindowTitle(QCoreApplication::translate("listViewElement", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listViewElement: public Ui_listViewElement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEWELEMENT_H
