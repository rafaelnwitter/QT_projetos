#include "telaprincipal.h"
#include "ui_telaprincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

void TelaPrincipal::on_pushButton_clicked()
{
    ui->label->setText("Hello World!!!");
}
