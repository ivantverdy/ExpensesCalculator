#include "addwindow.h"
#include "ui_addwindow.h"

addWindow::addWindow(QWidget *parent) : QDialog(parent), ui(new Ui::addWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/MyDatabase.db");
    if(db.open())
    {
        qDebug() << "Database is connected";
    }
    else
    {
        qDebug() << "Database is not connected";
        qDebug() << "Error: " << db.lastError();
    }
    setWindowTitle("Add expense");
    resize(500, 400);
    connect(ui->save, SIGNAL(clicked()), this, SLOT(saveClick()));
    connect(ui->cancel,  SIGNAL(clicked()), this, SLOT(cancelClick()));
}

addWindow::~addWindow()
{
    delete ui;
}

void addWindow::saveClick()
{
    /*QFile file("ExpensesCalculator.txt");
    if(file.open(QIODevice::Append | QIODevice::ReadWrite))
    {
        QTextStream stream(&file);

        stream << "Label: " << ui->label->text() << "\n";
        stream << "Category: " <<  ui->category->text() << "\n";
        stream << "Description: " << ui->description->text() << "\n";
        stream << "Price: " << ui->price->value() << "$\n";
        stream << "Date and Time: " << ui->dateTime->dateTime().toString("dd.MM.yyyy hh.mm.ss") << "\n";
        stream << " - - - - - - - - - - - - - - - - " << "\n";
        file.close();
        accept();
    }*/

    db.open();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsertData(db);
    QueryInsertData.prepare("INSERT INTO Expense(Label, Category, Description, Price, DateTime) VALUES(:label, :category, :description, :price, :DateTime)");

    QueryInsertData.bindValue(":label", ui->label->text());
    QueryInsertData.bindValue(":category", ui->category->text());
    QueryInsertData.bindValue(":description", ui->description->text());
    QueryInsertData.bindValue(":price", ui->price->value());
    QueryInsertData.bindValue(":date_time", ui->dateTime->dateTime().toString("yyyy-MM-dd hh:mm:ss"));
    QueryInsertData.exec();

    QSqlDatabase::database().commit();
    db.close();
    accept();
}


void addWindow::cancelClick()
{
     reject();
}




