#include "opciones.h"
#include "ui_opciones.h"

opciones::opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::opciones)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowTitleHint | Qt::WindowMinimizeButtonHint);
}

opciones::~opciones()
{
    delete ui;
}
