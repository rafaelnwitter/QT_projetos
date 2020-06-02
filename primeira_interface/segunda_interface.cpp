#include "segunda_interface.h"
#include "ui_segunda_interface.h"

segunda_interface::segunda_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::segunda_interface)
{
    ui->setupUi(this);
}

segunda_interface::~segunda_interface()
{
    delete ui;
}
