#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QFile>
#include <QSoundEffect>
#include <QMessageBox>
#include "cannotadd.h"

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
    CanNotAdd *newWindow;
    QSoundEffect *effect;

private slots:
    void saveClick();
    void cancelClick();
signals:
    void refreshClicked();
};

#endif // ADDWINDOW_H
