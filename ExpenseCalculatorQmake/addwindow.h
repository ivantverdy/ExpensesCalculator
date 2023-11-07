#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <QtSql>


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
private slots:
    void saveClick();
    void cancelClick();
};

#endif // ADDWINDOW_H
