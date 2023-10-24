#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addwindow.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    struct Entry {
        QDate date;
        QString description;
        QString category;
        double price;
        QString label;
    };

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    std::vector<Entry> expenses;
    addWindow *addWindowExp;
    QSqlDatabase db;

private slots:
    void addExpence();
    void deleteExpence();
    void editExpence();
    void listExpences();
    void evaluateExpences();
};

#endif // MAINWINDOW_H
