#include "listviewelement.h"
#include "ui_listviewelement.h"

listViewElement::listViewElement(QWidget *parent, int a) : QDialog(parent), ui(new Ui::listViewElement)
{
    ui->setupUi(this);
    setID(a);
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

    effect = new QSoundEffect;
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

    QSqlQuery query(db);
    query.prepare("update Expense set Label = :Label, Category = :Category, Description = :Description, Price = :Price, DateTime = :DateTime where id = :id");
    query.bindValue(":Label", ui->Label->text());
    query.bindValue(":Category", ui->Category->text());
    query.bindValue(":Description", ui->Description->text());
    query.bindValue(":Price", ui->Price->text());
    query.bindValue(":DateTime", ui->DateTime->text());
    query.bindValue(":id", getID());

    if(ui->Label->text() == "" or ui->Category->text() == "")
    {
        effect->setSource(QUrl("file:///C:/QT project/WindowsError.wav"));
        effect->play();
        QMessageBox::information(this, tr("Add"), tr("You can't add expense without label or category"));
    }
    else
    {
        if (query.exec()) {
            QMessageBox::information(this, tr("Edit"), tr("Updated"));
            emit refreshClicked();
            accept();
        } else {
            QMessageBox::critical(this, tr("Error:"), query.lastError().text());
        }
    }
    db.close();
}


void listViewElement::on_deleteButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();

    QSqlQuery query(db);
    query.prepare("delete from Expense where id = :id");
    query.bindValue(":id", getID());

    if (query.exec()) {
        QSqlQuery updateIdQuery(db);
        updateIdQuery.prepare("UPDATE Expense SET id = id - 1 WHERE id > :deletedId");
        updateIdQuery.bindValue(":deletedId", getID());
        if (updateIdQuery.exec()) {
            QSqlQuery updateSeqQuery(db);
            updateSeqQuery.prepare("UPDATE sqlite_sequence SET seq = seq - 1 WHERE name = 'Expense'");
            if(updateSeqQuery.exec())
            {
                QMessageBox::information(this, tr("Delete"), tr("Deleted"));
                emit refreshClicked();
            }
            else{
                QMessageBox::critical(this, tr("Error:"), updateIdQuery.lastError().text());
            }
        }
        else{
            QMessageBox::critical(this, tr("Error:"), updateIdQuery.lastError().text());
        }
    }
    else {
        QMessageBox::critical(this, tr("Error:"), query.lastError().text());
    }
    db.close();
    accept();
}
