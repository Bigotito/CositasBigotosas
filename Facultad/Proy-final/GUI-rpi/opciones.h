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
    ~opciones();

private:
    Ui::opciones *ui;
};

#endif // OPCIONES_H
