#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Database.db");
    if (!db.open()) {
        qDebug() << "Failed to open the database: " << db.lastError().text();
    }
    setWindowTitle("Expenses calculator");
    resize(500, 400);


    connect(ui->addExpence, SIGNAL(clicked()), this, SLOT(addExpence()));
    connect(ui->deleteExpence, SIGNAL(clicked()), this, SLOT(deleteExpence()));
    connect(ui->editExpence, SIGNAL(clicked()), this, SLOT(editExpence()));
    connect(ui->listExpence, SIGNAL(clicked()), this, SLOT(listExpence()));
    connect(ui->evaluateExpence, SIGNAL(clicked()), this, SLOT(evaluateExpence()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addExpence() {
    addWindowExp = new addWindow(this);
    addWindowExp->show();
}

void MainWindow::deleteExpence(){

}

void MainWindow::editExpence(){

}

void MainWindow::listExpences(){

}

void MainWindow::evaluateExpences(){

}


