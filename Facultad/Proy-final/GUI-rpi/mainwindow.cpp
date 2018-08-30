#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    vppoffset.show();
    vppoffset.hide();

    QBrush fondo;
    fondo.setColor(QColor(0,0,0));
    ui->grafico->setBackground(fondo);
    ui->grafico->xAxis->setBasePen(QPen(Qt::blue,1));
    ui->grafico->yAxis->setBasePen(QPen(Qt::blue,1));
    ui->grafico->xAxis->setTickPen(QPen(Qt::blue, 1));
    ui->grafico->yAxis->setTickPen(QPen(Qt::blue, 1));
    ui->grafico->xAxis->setSubTickPen(QPen(Qt::blue, 1));
    ui->grafico->yAxis->setSubTickPen(QPen(Qt::blue, 1));
    ui->grafico->xAxis->setTickLabelColor(Qt::white);
    ui->grafico->yAxis->setTickLabelColor(Qt::white);
    ui->grafico->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    ui->grafico->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    ui->grafico->xAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    ui->grafico->yAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    ui->grafico->xAxis->grid()->setSubGridVisible(true);
    ui->grafico->yAxis->grid()->setSubGridVisible(true);
    ui->grafico->xAxis->grid()->setZeroLinePen(Qt::NoPen);
    ui->grafico->yAxis->grid()->setZeroLinePen(Qt::NoPen);
    ui->grafico->xAxis->setLabel("[ms]");
    ui->grafico->xAxis->setLabelColor(Qt::yellow);
    ui->grafico->yAxis->setLabel("[V]");
    ui->grafico->yAxis->setLabelColor(Qt::yellow);

    //Carga de valores anteriores guardados en memoria

    ui->grafico->addGraph();
    ui->grafico->graph(0)->setPen(QPen(QColor(255,0,0),3));
    ui->grafico->yAxis->ticker()->setTickCount(10);

    configuracion_act=configuracion_act.leer_mem();
    acomodar_limx();
    acomodar_limy();
    actualizar();

//    ui->grafico->xAxis->setRange(0,20);
//    ui->grafico->yAxis->setRange(-1.3,1.3);
//    ui->grafico->addGraph();
//    ui->grafico->graph(0)->setData(x,y);
//    ui->grafico->graph(0)->setPen(QPen(QColor(255,0,0),3));
//    ui->grafico->replot();

//    ui->pBVpp->setText("Vpp = 2 V\nOffset = 0 V");
//    ui->pBfreq->setText("Freq = 50 Hz");
//    ui->pBdivX->setText("10 ms/div");
//    ui->pBdivY->setText("0.5 V/div");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actualizar()
{
    float lim_sup1,lim_sup2;
    double c1;
    int c2;
    QString qtemp,qtemp2;

    configuracion_act.escribir_mem(&configuracion_act);

    lim_sup1=1000/configuracion_act.freq;
    ui->grafico->xAxis->setRange(0,limx);
    c2=configuracion_act.freq_mult+3;

    qtemp.clear();
    qtemp+="Freq = ";
    qtemp+=QString::number(configuracion_act.freq);

    qtemp2.clear();

    if(((int)limx)%20 == 0)
        qtemp2+=QString::number(limx/4);
    else
        qtemp2+=QString::number(limx/5);

    switch (c2) {
    case 3: {
        ui->grafico->xAxis->setLabel("[ms]");
        qtemp+=" Hz";
        qtemp2+=" ms/div";
        break;
    }
    case 6: {
        ui->grafico->xAxis->setLabel("[µs]");
        qtemp+=" KHz";
        qtemp2+=" µs/div";
        break;
    }
    case 9: {
        ui->grafico->xAxis->setLabel("[ns]");
        qtemp+=" MHz";
        qtemp2+=" ns/div";
        break;
    }
    case 12: {
        ui->grafico->xAxis->setLabel("[ps]");
        qtemp+=" GHz";
        qtemp2+=" ps/div";
        break;
    }
    }

    ui->pBdivX->setText(qtemp2);
    ui->pBfreq->setText(qtemp);

    qtemp.clear();
    qtemp+="Vpp = ";
    qtemp+=QString::number(configuracion_act.vpp);
    qtemp+=" V\nOffset = ";
    qtemp+=QString::number(configuracion_act.offset);
    qtemp+=" V";
    ui->pBVpp->setText(qtemp);

    lim_sup2=limy;

    switch (configuracion_act.onda) {
    case 0: {
        ui->grafico->yAxis->setRange(-lim_sup2,lim_sup2);

        qtemp.clear();
        qtemp+=QString::number(lim_sup2/5);
        qtemp+=" V/div";
        ui->pBdivY->setText(qtemp);

        QVector<double> x(c_muestras+1),y(c_muestras+1);

        for(unsigned int i=0;i<c_muestras+1;i++) {
            x[i]=limx*i/c_muestras;
            c1=2*PI*configuracion_act.freq*qPow(10,configuracion_act.freq_mult);
            y[i]=((configuracion_act.vpp)/2)*qSin(c1*(x[i])*qPow(10,-(configuracion_act.freq_mult+3)))+configuracion_act.offset;
        }

        ui->grafico->graph(0)->setData(x,y);
        break;
    }
    case 1: {
        ui->grafico->yAxis->setRange(-lim_sup2,lim_sup2);

        qtemp.clear();
        qtemp+=QString::number(lim_sup2/5);
        qtemp+=" V/div";
        ui->pBdivY->setText(qtemp);

        QVector<double> x(c_muestras+1),y(c_muestras+1);
        double xt;

        for(unsigned int i=0;i<c_muestras+1;i++) {
            x[i]=limx*i/c_muestras;

            xt=x[i]-lim_sup1*(int)((x[i])/lim_sup1);

            if(xt<=lim_sup1/2)
                y[i]=((configuracion_act.vpp)/2)+configuracion_act.offset;
            else
                y[i]=-((configuracion_act.vpp)/2)+configuracion_act.offset;
        }

        ui->grafico->graph(0)->setData(x,y);
        break;
    }
    case 2: {
        ui->grafico->yAxis->setRange(-lim_sup2,lim_sup2);

        qtemp.clear();
        qtemp+=QString::number(lim_sup2/5);
        qtemp+=" V/div";
        ui->pBdivY->setText(qtemp);

        QVector<double> x(c_muestras+1),y(c_muestras+1);
        double xt;

        for(unsigned int i=0;i<c_muestras;i++) {
            x[i]=limx*i/c_muestras;

            xt=x[i]-lim_sup1*(int)((x[i])/lim_sup1);

            if(xt<=lim_sup1/4)
                y[i]=(configuracion_act.vpp*2)*xt*qPow(10,-(configuracion_act.freq_mult+3))*configuracion_act.freq*qPow(10,configuracion_act.freq_mult)+configuracion_act.offset;
            else if (xt<=lim_sup1*3/4)
                y[i]=-(configuracion_act.vpp*2)*xt*qPow(10,-(configuracion_act.freq_mult+3))*configuracion_act.freq*qPow(10,configuracion_act.freq_mult)+configuracion_act.vpp+configuracion_act.offset;
            else
                y[i]=(configuracion_act.vpp*2)*xt*qPow(10,-(configuracion_act.freq_mult+3))*configuracion_act.freq*qPow(10,configuracion_act.freq_mult)-2*configuracion_act.vpp+configuracion_act.offset;

        }

        ui->grafico->graph(0)->setData(x,y);
        break;
    }
    }

}

void MainWindow::acomodar_limx()
{
    limx=1000/(configuracion_act.freq);

    for(int i=0;i*5<1000;i++) {
        if(limx <= i*5) {
            limx = i*5;
            break;
            }
    }
}

void MainWindow::acomodar_limy()
{
    limy=(((configuracion_act.vpp)/2)+qAbs(configuracion_act.offset))*1.5;

    for(int i=0;i*5<1000;i++) {
        if(limy <= i*5) {
            limy = i*5;
            break;
            }
    }
}

str_config str_config::leer_mem()
{
    config cfg_def(2,0,50,0,0);
    QFile arch_conf("config.cfg");

    if(!arch_conf.open(QIODevice::ReadOnly | QIODevice::Text))
        return cfg_def;

    QString lect;
    QTextStream in(&arch_conf);

    lect=in.readLine();
    cfg_def.vpp=lect.toFloat();

    lect=in.readLine();
    cfg_def.offset=lect.toFloat();

    lect=in.readLine();
    cfg_def.freq=lect.toFloat();

    lect=in.readLine();
    cfg_def.freq_mult=lect.toInt();

    lect=in.readLine();
    cfg_def.onda=lect.toInt();

    if(cfg_def.onda == 3) {
        cfg_def.valores_arb.clear();
        while(!in.atEnd()) {
            lect=in.readLine();

            if(!in.atEnd())
                cfg_def.valores_arb.append(lect.toDouble());
        }
    }

    arch_conf.close();

    return cfg_def;
}

void str_config::escribir_mem(str_config *actual)
{
    QFile arch_conf("config.cfg");
    arch_conf.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out(&arch_conf);
    out<<actual->vpp<<endl<<actual->offset<<endl<<actual->freq<<endl<<actual->freq_mult<<endl<<actual->onda<<endl;

    if(actual->onda==3) {
        for(int i=0;i<actual->valores_arb.size();i++) {
            out<<actual->valores_arb[i];
        }
        out<<endl;
    }

    arch_conf.close();
}

void MainWindow::on_pBVpp_clicked()
{
    if(vppoffset.isVisible() == false)
        vppoffset.show();
    else
        vppoffset.hide();
}

void MainWindow::on_pBfreq_clicked()
{
    if(ui->lbSlFreq->isVisible() == false) {

    }
    else {

    }
}

void MainWindow::on_pBond_clicked()
{
    if(ui->gbondas->isVisible() == false) {

    }
    else{

    }
}
