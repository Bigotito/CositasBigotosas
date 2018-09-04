#ifndef OPCIONES_H
#define OPCIONES_H

#include <QWidget>

namespace Ui {
class opciones;
}

class opciones : public QWidget
{
    Q_OBJECT

public:
    explicit opciones(QWidget *parent = nullptr);
    void inic (int opc);
    int leer_valor (bool sel);
    void cargar_valor (int avalor1);
    void cargar_valor (int avalor1, int avalor2);
    ~opciones();

private slots:
    void on_Sl2_valueChanged(int value);

    void on_Sl1_valueChanged(int value);

    void on_pushButton_clicked();

signals:
    void valor_cambiado (int mact);

private:
    Ui::opciones *ui;
    int valor1;
    int valor2;
    int mod_act;
};

#endif // OPCIONES_H
