#include "listviewelement.h"
#include "ui_listviewelement.h"

listViewElement::listViewElement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listViewElement)
{
    ui->setupUi(this);
}

listViewElement::~listViewElement()
{
    delete ui;
}
