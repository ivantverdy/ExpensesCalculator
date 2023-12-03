#ifndef LISTVIEWELEMENT_H
#define LISTVIEWELEMENT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QFile>
#include <QSoundEffect>
#include <QMessageBox>
#include "cannotadd.h"

namespace Ui {
class listViewElement;
}

class listViewElement : public QDialog
{
    Q_OBJECT

public:
    explicit listViewElement(QWidget *parent = nullptr, int a = 0);
    ~listViewElement();
    void setID(int &a){
        id = a;
    }
    int getID(){
        return id;
    }
private slots:
    void on_edit_clicked();
private:
    Ui::listViewElement *ui;
    QSqlDatabase db;
    CanNotAdd *newWindow;
    QSoundEffect *effect;
    int id;
signals:
    void refreshClicked();
};

#endif // LISTVIEWELEMENT_H
