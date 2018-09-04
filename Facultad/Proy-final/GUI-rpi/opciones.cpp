#include "opciones.h"
#include "ui_opciones.h"

opciones::opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::opciones)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::WindowTitleHint);
    setWindowTitle(" ");
}

void opciones::inic(int opc)
{
    mod_act=opc;

    switch (opc) {
    case 0: {
        ui->lbSl1->setText("Vpp");
        ui->lbSl2->setText("Offset");
        ui->Sl1->setRange(0,200);
        ui->Sl2->setRange(-100,100);
        ui->Sl1->setValue(valor1);
        ui->Sl2->setValue(valor2);
        break;
    }
    case 1: {
        ui->lbSl1->setText("Freq");
        ui->Sl1->setRange(0,999);
        ui->lbSl2->setVisible(false);
        ui->Sl2->setVisible(false);
        ui->pushButton->setVisible(false);
        setFixedWidth(80);
        break;
    }
    case 2: {
        ui->lbSl1->setText("tmax");
        ui->lbSl2->setVisible(false);
        ui->Sl2->setVisible(false);
        setFixedWidth(80);
        break;
    }
    case 3: {
        ui->lbSl1->setText("Vmax");
        ui->lbSl2->setVisible(false);
        ui->Sl2->setVisible(false);
        setFixedWidth(80);
        break;
    }
    }
}

int opciones::leer_valor(bool sel)
{
    if(sel==0)
        return ui->Sl1->value();

    return ui->Sl2->value();
}

void opciones::cargar_valor(int avalor1)
{
    valor1=avalor1;

    ui->Sl1->setValue(valor1);
}

void opciones::cargar_valor(int avalor1, int avalor2)
{
    valor1=avalor1;
    valor2=avalor2;

    ui->Sl1->setValue(valor1);
    ui->Sl2->setValue(valor2);
}

opciones::~opciones()
{
    delete ui;
}

void opciones::on_Sl2_valueChanged(int value)
{
    valor2=value;

    emit valor_cambiado(mod_act);
}

void opciones::on_Sl1_valueChanged(int value)
{
    valor1=value;

    emit valor_cambiado(mod_act);
}

void opciones::on_pushButton_clicked()
{
    ui->Sl2->setValue(0);
}
