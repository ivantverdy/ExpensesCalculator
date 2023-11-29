#include "cannotadd.h"
#include "ui_cannotadd.h"

CanNotAdd::CanNotAdd(QWidget *parent) : QDialog(parent), ui(new Ui::CanNotAdd)
{
    ui->setupUi(this);
}

CanNotAdd::~CanNotAdd()
{
    delete ui;
}
