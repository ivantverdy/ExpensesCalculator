#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QVector>
#include <QTableWidgetItem>
#include <QtWidgets>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

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