#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QFile>

namespace Ui {
class addWindow;
}

class addWindow : public QDialog
{
    Q_OBJECT

public:
    explicit addWindow(QWidget *parent = nullptr);
    ~addWindow();

private:
    Ui::addWindow *ui;
    QSqlDatabase db;
private slots:
    void saveClick();
    void cancelClick();
};

#endif // ADDWINDOW_H
