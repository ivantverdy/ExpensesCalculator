#include "oneexpense.h"
#include "ui_oneexpense.h"

OneExpense::OneExpense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OneExpense)
{
    ui->setupUi(this);
}

OneExpense::~OneExpense()
{
    delete ui;
}
