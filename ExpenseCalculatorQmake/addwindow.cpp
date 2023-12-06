#include "addwindow.h"
#include "ui_addwindow.h"

addWindow::addWindow(QWidget *parent) : QDialog(parent), ui(new Ui::addWindow)
{
    ui->setupUi(this);

    setWindowTitle("Add expense");
    connect(ui->save, SIGNAL(clicked()), this, SLOT(saveClick()));
    connect(ui->cancel,  SIGNAL(clicked()), this, SLOT(cancelClick()));
    effect = new QSoundEffect;
}

addWindow::~addWindow()
{
    delete ui;
}

void addWindow::saveClick()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();
    if(ui->label->text() == "" or ui->category->text() == "")
    {
        effect->setSource(QUrl("file:///C:/QT project/WindowsError.wav"));
        effect->play();
        QMessageBox::information(this, tr("Add"), tr("You can't add expense without label or category"));
    }
    else
    {
    QSqlQuery query(db);
    query.prepare("insert into Expense(Label, Category, Description, Price, DateTime) values(:Label, :Category, :Description, :Price, :DateTime)");
    query.bindValue(":Label", ui->label->text());
    query.bindValue(":Category", ui->category->text());
    query.bindValue(":Description", ui->description->text());
    query.bindValue(":Price", ui->price->value());
    query.bindValue(":DateTime", ui->dateTime->text());

    if (query.exec()) {
        QMessageBox::information(this, tr("Edit"), tr("Updated"));
        emit refreshClicked();
        accept();
    }
    else {
        QMessageBox::critical(this, tr("Error:"), query.lastError().text());
    }
    }
    db.close();
}


void addWindow::cancelClick()
{
     reject();
}




