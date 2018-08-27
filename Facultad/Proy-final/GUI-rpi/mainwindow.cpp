#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    ui->grafico->yAxis->setLabel("[mV]");
    ui->grafico->yAxis->setLabelColor(Qt::yellow);

    //Carga de valores anteriores guardados en memoria

    ui->grafico->addGraph();
    ui->grafico->graph(0)->setPen(QPen(QColor(255,0,0),3));

    configuracion_act=configuracion_act.leer_mem();
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
    float lim_sup;

    normalizar_conf(&configuracion_act);
    configuracion_act.escribir_mem(&configuracion_act);

    lim_sup=100/configuracion_act.freq;
    ui->grafico->xAxis->setRange(0,lim_sup);

    switch (configuracion_act.freq_mult) {
    case 3: {
        ui->grafico->xAxis->setLabel("[ms]");
        break;
    }
    case 6: {
        ui->grafico->xAxis->setLabel("[µs]");
        break;
    }
    case 9: {
        ui->grafico->xAxis->setLabel("[ns]");
        break;
    }
    }

    switch (configuracion_act.onda) {
    case 0: {
        lim_sup=((configuracion_act.vpp)/2)+qAbs(configuracion_act.offset);
        ui->grafico->yAxis->setRange(-lim_sup,lim_sup);

        c_muestras=50*cmr50hz/((configuracion_act.freq)*qPow(10,configuracion_act.freq_mult));

        QVector<double> x(c_muestras+1),y(c_muestras+1);

        for(int i=0;i<c_muestras+1;i++) {
            x[i]=(i*(configuracion_act.freq)/c_muestras);
            y[i]=qSin(PI/10*x[i]);
        }
    }
    }
}

void MainWindow::normalizar_conf(config *c_norm)
{
    int c1;

    c1=-((c_norm->freq_mult)+2);

    switch (c1) {
    case -2: {
        c_norm->freq=(c_norm->freq)/10;
        c_norm->freq_mult=(c_norm->freq_mult)+1;
        break;
    }
    case -3: {
        c_norm->freq=(c_norm->freq);
        c_norm->freq_mult=(c_norm->freq_mult);
        break;
    }
    case -4: {
        c_norm->freq=(c_norm->freq)/100;
        c_norm->freq_mult=(c_norm->freq_mult)+2;
        break;
    }
    case -5: {
        c_norm->freq=(c_norm->freq)/10;
        c_norm->freq_mult=(c_norm->freq_mult)+1;
        break;
    }
    case -6: {
        c_norm->freq=(c_norm->freq);
        c_norm->freq_mult=(c_norm->freq_mult);
        break;
    }
    case -7: {
        c_norm->freq=(c_norm->freq)/100;
        c_norm->freq_mult=(c_norm->freq_mult)+2;
        break;
    }
    case -8: {
        c_norm->freq=(c_norm->freq)/10;
        c_norm->freq_mult=(c_norm->freq_mult)+1;
        break;
    }
    case -9: {
        c_norm->freq=(c_norm->freq);
        c_norm->freq_mult=(c_norm->freq_mult);
        break;
    }
    case -10: {
        c_norm->freq=(c_norm->freq)/100;
        c_norm->freq_mult=(c_norm->freq_mult)+2;
        break;
    }
    case -11: {
        c_norm->freq=(c_norm->freq)/10;
        c_norm->freq_mult=(c_norm->freq_mult)+1;
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
