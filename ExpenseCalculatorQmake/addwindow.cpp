#include "addwindow.h"
#include "ui_addwindow.h"

addWindow::addWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addWindow)
{
    ui->setupUi(this);
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

    QSqlQuery query(db);

    query.prepare("INSERT INTO expenses (label, category, description, price, date_time) "
                  "VALUES (:label, :category, :description, :price, :date_time)");
    query.bindValue(":label", ui->label->text());
    query.bindValue(":category", ui->category->text());
    query.bindValue(":description", ui->description->text());
    query.bindValue(":price", ui->price->value());
    query.bindValue(":date_time", ui->dateTime->dateTime().toString("yyyy-MM-dd hh:mm:ss"));

    accept();
}


void addWindow::cancelClick()
{
     reject();
}




