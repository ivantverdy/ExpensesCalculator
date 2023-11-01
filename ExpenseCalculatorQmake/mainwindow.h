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


private slots:
    void addExpence();
    void deleteExpence();
    void editExpence();
    void listExpences();
    void evaluateExpences();
};

#endif // MAINWINDOW_H
