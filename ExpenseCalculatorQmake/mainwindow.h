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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    addWindow *addWindowExp;
    QSqlQueryModel* model;
    QSqlDatabase db;
private slots:
    void addExpense();
    void on_loadData_clicked();
    void on_listView_doubleClicked(const QModelIndex &index);
};

#endif // MAINWINDOW_H
