#ifndef LISTVIEWELEMENT_H
#define LISTVIEWELEMENT_H

#include <QDialog>

namespace Ui {
class listViewElement;
}

class listViewElement : public QDialog
{
    Q_OBJECT

public:
    explicit listViewElement(QWidget *parent = nullptr);
    ~listViewElement();

private:
    Ui::listViewElement *ui;
};

#endif // LISTVIEWELEMENT_H
