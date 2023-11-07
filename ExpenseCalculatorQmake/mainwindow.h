#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase db;
    void connectionClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connectionOpen(){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/MyDatabase.db");
        if(db.open())
        {
            qDebug() << "Database is connected";
            return true;
        }
        else
        {
            qDebug() << "Database is not connected";
            qDebug() << "Error: " << db.lastError();
            return false;
        }
    }

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    addWindow *addWindowExp;

private slots:
    void addExpense();
    void deleteExpense();
    void editExpense();
    void listExpenses();
    void evaluateExpenses();
};

#endif // MAINWINDOW_H
