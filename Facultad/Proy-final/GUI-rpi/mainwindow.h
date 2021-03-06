﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define PI 3.14159265
#define c_muestras 1000

#include <QMainWindow>
#include <QMouseEvent>
#include "opciones.h"
#include "selondas.h"

typedef struct str_config {
    float vpp;
    float offset;
    float freq;
    int freq_mult;
    int onda; //0=seno,1=cuadrada,2=triangular,3=arbitraria
    QVector<double> valores_arb;

    str_config(float def_vpp=0,float def_offset=0,float def_freq=0,int def_freq_mult=0,int def_onda=0) {
        vpp=def_vpp;
        offset=def_offset;
        freq=def_freq;
        onda=def_onda;
        freq_mult=def_freq_mult;
    }

    struct str_config leer_mem(void);
    void escribir_mem(struct str_config *actual);
} config;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    config configuracion_act;
    float limx;
    float limy;
    opciones opcVppOffset;
    opciones opcFreq;
    opciones opcdivx;
    opciones opcdivy;
    selOndas sOndas;


    //double c_muestras;
    void actualizar(void);
    void acomodar_limx(void);
    void acomodar_limy(void);
    //void normalizar_conf(config* c_norm);

private slots:
    void on_pBVpp_clicked();

    void on_pBfreq_clicked();

    void on_pBond_clicked();

    void on_MainWindow_destroyed();

    void mouseReleaseEvent(QMouseEvent *event);

public slots:
    void leer_valores(int sel);
    void enfocar(void);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
