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
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/build-ExpenseCalculatorQmake-Desktop_Qt_6_6_0_MinGW_64_bit-Debug/addWindowDB.db");

    if(QFile::exists("C:/QT project/build-ExpenseCalculatorQmake-Desktop_Qt_6_6_0_MinGW_64_bit-Debug/addWindowDB.db"))
    {
        qDebug() << "exists";
    }
    else
    {
        qDebug() << "doesn't";
        qDebug() << "Error: " << db.lastError();
    }

    if(db.open())
    {
        qDebug() << "Database is connected";
    }
    else
    {
        qDebug() << "Database is not connected";
        qDebug() << "Error: " << db.lastError();
    }

    //qDebug()<< ui->label->text()<<ui->category->text()<< ui->description->text()<<ui->price->text()<<ui->dateTime->text();

    QSqlQuery query(db);
    query.prepare("insert into Expense(Label, Category, Description, Price, DateTime) values(:Label, :Category, :Description, :Price, :DateTime)");
    query.bindValue(":Label", QVariant(ui->label->text()));
    query.bindValue(":Category", QVariant(ui->category->text()));
    query.bindValue(":Description", QVariant(ui->description->text()));
    query.bindValue(":Price", QVariant(ui->price->text()));
    query.bindValue(":DateTime", QVariant(ui->dateTime->text()));
    if (query.exec()) {
        qDebug() << "Data saved successfully!";
    } else {
        qDebug() << "Error saving data: " << query.lastError();
    }
    query.lastError().text();
    db.close();
    accept();

}


void addWindow::cancelClick()
{
     reject();
}




