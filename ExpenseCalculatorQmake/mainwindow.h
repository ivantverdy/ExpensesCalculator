#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addwindow.h"
#include "listviewelement.h"

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
    listViewElement * listOne;
    QSqlQueryModel* model;
    QSqlDatabase db;
private slots:
    void addExpense();
    void onRefreshClicked();
    void onListViewDoubleClicked(const QModelIndex &index);
};

#endif // MAINWINDOW_H
