#ifndef SELONDAS_H
#define SELONDAS_H

#include <QWidget>

namespace Ui {
class selOndas;
}

class selOndas : public QWidget
{
    Q_OBJECT

public:
    explicit selOndas(QWidget *parent = nullptr);
    ~selOndas();

private:
    Ui::selOndas *ui;
};

#endif // SELONDAS_H
