#include "addwindow.h"
#include "ui_addwindow.h"

addWindow::addWindow(QWidget *parent) : QDialog(parent), ui(new Ui::addWindow)
{
    ui->setupUi(this);

    setWindowTitle("Add expense");
    connect(ui->save, SIGNAL(clicked()), this, SLOT(saveClick()));
    connect(ui->cancel,  SIGNAL(clicked()), this, SLOT(cancelClick()));
}

addWindow::~addWindow()
{
    delete ui;
}

void addWindow::saveClick()
{

    connectionOpen();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsertData(db);
    QueryInsertData.prepare("INSERT INTO Expense(Label, Category, Description, Price, DateTime) VALUES(:label, :category, :description, :price, :DateTime)");

    QueryInsertData.bindValue(":label", ui->label->text());
    QueryInsertData.bindValue(":category", ui->category->text());
    QueryInsertData.bindValue(":description", ui->description->text());
    QueryInsertData.bindValue(":price", ui->price->value());
    QueryInsertData.bindValue(":date_time", ui->dateTime->text());
    QueryInsertData.exec();

    QSqlDatabase::database().commit();
    db.close();
    accept();
}


void addWindow::cancelClick()
{
     reject();
}




