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

namespace Ui {
class listViewElement;
}

class listViewElement : public QDialog
{
    Q_OBJECT

public:
    explicit listViewElement(QWidget *parent = nullptr, QVariant index = 0);
    ~listViewElement();
private slots:

private:
    Ui::listViewElement *ui;
    QSqlDatabase db;
    qint64 id;
};

#endif // LISTVIEWELEMENT_H
