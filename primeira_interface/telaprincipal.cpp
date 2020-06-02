#include "telaprincipal.h"
#include "ui_telaprincipal.h"
#include<QMessageBox>
#include<segunda_interface.h>
TelaPrincipal::TelaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

void TelaPrincipal::on_pushButton_clicked()
{
    ui->label->setText("Hello World!!!");
}

void TelaPrincipal::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Verificação","A versão é a mais nova.");
}

void TelaPrincipal::on_pushButton_3_clicked()
{
    segunda_interface segunda_interface;
    segunda_interface.setModal(true);
    segunda_interface.exec();
    //segunda_interface = new segunda_interface(this);
    //segunda_interface->show();
}
