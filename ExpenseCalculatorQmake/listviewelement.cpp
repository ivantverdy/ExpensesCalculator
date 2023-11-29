#include "listviewelement.h"
#include "ui_listviewelement.h"

listViewElement::listViewElement(QWidget *parent, int a) : QDialog(parent), ui(new Ui::listViewElement)
{
    setID(a);
    ui->setupUi(this);
    setWindowTitle("Edit/Delete");
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();
    QSqlQuery queryShow(db);
    queryShow.prepare("select * from Expense where id=:id");
    queryShow.bindValue(":id", getID());
    if(queryShow.exec())
    {
        while(queryShow.next()){
            ui->Label->setText(queryShow.value(0).toString());
            ui->Category->setText(queryShow.value(1).toString());
            ui->Description->setText(queryShow.value(2).toString());
            ui->Price->setText(queryShow.value(3).toString());
            ui->DateTime->setText(queryShow.value(4).toString());
        }
        db.close();
    }
    else{
        qDebug() << queryShow.lastError().text();
    }
    connect(ui->edit, SIGNAL(clicked()), this, SLOT(on_edit_clicked(int a)));
}

listViewElement::~listViewElement()
{
    delete ui;
}

void listViewElement::on_edit_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();

    if(ui->Label->text() == "" or ui->Category->text() == "")
    {
        newWindow = new CanNotAdd(this);
        effect->setSource(QUrl("file:///C:/QT project/WindowsError.wav"));
        effect->play();
        reject();
        newWindow->show();
    }
    else
    {
        QSqlQuery query(db);
        query.prepare("update Expense set Label = :Label, Category = :Category, Description = :Description, Price = :Price, DateTime = :DateTime where id = :id");
        query.bindValue(":Label", ui->Label->text());
        query.bindValue(":Category", ui->Category->text());
        query.bindValue(":Description", ui->Description->text());
        query.bindValue(":Price", ui->Price->text());
        query.bindValue(":DateTime", ui->DateTime->text());
        query.bindValue(":id", getID());

        if (query.exec()) {
            QMessageBox::critical(this, tr("Edit"), tr("Updated"));

        } else {
            QMessageBox::critical(this, tr("Error:"), query.lastError().text());
        }
    }
    db.close();
    accept();
}

