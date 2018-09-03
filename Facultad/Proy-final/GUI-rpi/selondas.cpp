#include "selondas.h"
#include "ui_selondas.h"

selOndas::selOndas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selOndas)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::WindowTitleHint);
}

selOndas::~selOndas()
{
    delete ui;
}
