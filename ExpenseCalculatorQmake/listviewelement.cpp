#include "listviewelement.h"
#include "ui_listviewelement.h"

listViewElement::listViewElement(QWidget *parent, QVariant index) : QDialog(parent), ui(new Ui::listViewElement)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();
    QSqlQuery queryShow(db);
    queryShow.prepare("select * from Expense where id=:id");
    queryShow.bindValue(":id", index);
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
}

listViewElement::~listViewElement()
{
    delete ui;
}


