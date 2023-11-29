#ifndef CANNOTADD_H
#define CANNOTADD_H

#include <QDialog>

namespace Ui {
class CanNotAdd;
}

class CanNotAdd : public QDialog
{
    Q_OBJECT

public:
    explicit CanNotAdd(QWidget *parent = nullptr);
    ~CanNotAdd();

private:
    Ui::CanNotAdd *ui;
};

#endif // CANNOTADD_H
