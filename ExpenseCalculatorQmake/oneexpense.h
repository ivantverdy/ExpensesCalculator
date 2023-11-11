#ifndef ONEEXPENSE_H
#define ONEEXPENSE_H

#include <QDialog>

namespace Ui {
class OneExpense;
}

class OneExpense : public QDialog
{
    Q_OBJECT

public:
    explicit OneExpense(QWidget *parent = nullptr);
    ~OneExpense();

private:
    Ui::OneExpense *ui;
};

#endif // ONEEXPENSE_H
