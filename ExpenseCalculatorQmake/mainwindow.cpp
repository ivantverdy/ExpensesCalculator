#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QListWidgetItem>
#include <QAbstractItemModel>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Expenses calculator");
    setWindowIcon(QIcon("C:/QT project/calcicon.png"));
    onRefreshClicked();
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(onRefreshClicked()));
    connect(ui->addExpense, SIGNAL(clicked()), this, SLOT(addExpense()));
    connect(ui->listView, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(onListViewDoubleClicked(const QModelIndex&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onRefreshClicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery addQuery(db);

    addQuery.prepare("select Label from Expense");
    addQuery.exec();
    model->setQuery(addQuery);
    ui->listView->setModel(model);
    db.close();
}

void MainWindow::addExpense() {
    addWindowExp = new addWindow(this);
    connect(addWindowExp, SIGNAL(refreshClicked()), this, SLOT(onRefreshClicked()));
    addWindowExp->show();
}

void MainWindow::onListViewDoubleClicked(const QModelIndex &index)
{
        int a = index.row() + 1;
        listOne = new listViewElement(this, a);
        connect(listOne, SIGNAL(refreshClicked()), this, SLOT(onRefreshClicked()));
        listOne->show();
}



