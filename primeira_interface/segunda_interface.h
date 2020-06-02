#ifndef SEGUNDA_INTERFACE_H
#define SEGUNDA_INTERFACE_H

#include <QDialog>

namespace Ui {
class segunda_interface;
}

class segunda_interface : public QDialog
{
    Q_OBJECT

public:
    explicit segunda_interface(QWidget *parent = 0);
    ~segunda_interface();

private:
    Ui::segunda_interface *ui;
};

#endif // SEGUNDA_INTERFACE_H
