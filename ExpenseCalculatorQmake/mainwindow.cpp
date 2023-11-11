#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Expenses calculator");
    setWindowIcon(QIcon("C:/QT project/calcicon.png"));
    on_loadData_clicked();
    connect(ui->addExpense, SIGNAL(clicked()), this, SLOT(addExpense()));
    connect(ui->listView, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(on_listView_doubleClicked(const QModelIndex&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addExpense() {
    addWindowExp = new addWindow(this);
    addWindowExp->show();
}

void MainWindow::on_loadData_clicked()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/QT project/databases/addWindowDB.db");
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery addQuery(db);

    addQuery.prepare("select Description from Expense");
    addQuery.exec();
    model->setQuery(addQuery);
    ui->listView->setModel(model);
    db.close();
    qDebug() << "Number of columns in the model: " << model->columnCount();
    qDebug() << "Query: " << addQuery.lastQuery();
}

void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{

}



