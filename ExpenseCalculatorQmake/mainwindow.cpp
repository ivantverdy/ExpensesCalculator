#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Expenses calculator");

    if(db.open())
    {
        qDebug() << "Database is connected";
    }
    else
    {
        qDebug() << "Database is not connected";
        qDebug() << "Error: " << db.lastError();
    }

    connect(ui->addExpence, SIGNAL(clicked()), this, SLOT(addExpense()));
    connect(ui->deleteExpence, SIGNAL(clicked()), this, SLOT(deleteExpense()));
    connect(ui->editExpence, SIGNAL(clicked()), this, SLOT(editExpense()));
    connect(ui->listExpence, SIGNAL(clicked()), this, SLOT(listExpenses()));
    connect(ui->evaluateExpence, SIGNAL(clicked()), this, SLOT(evaluateExpenses()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addExpense() {
    addWindowExp = new addWindow(this);
    addWindowExp->show();
}

void MainWindow::deleteExpense(){

}

void MainWindow::editExpense(){

}

void MainWindow::listExpenses(){

}

void MainWindow::evaluateExpenses(){

}
