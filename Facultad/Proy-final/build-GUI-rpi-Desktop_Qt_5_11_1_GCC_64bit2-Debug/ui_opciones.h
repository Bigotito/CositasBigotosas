/********************************************************************************
** Form generated from reading UI file 'opciones.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opciones
{
public:
    QSlider *Sl1;
    QSlider *Sl2;
    QLabel *lbSl1;
    QLabel *lbSl2;
    QPushButton *pushButton;
    QSpinBox *sBmult;

    void setupUi(QWidget *opciones)
    {
        if (opciones->objectName().isEmpty())
            opciones->setObjectName(QStringLiteral("opciones"));
        opciones->resize(160, 301);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(opciones->sizePolicy().hasHeightForWidth());
        opciones->setSizePolicy(sizePolicy);
        opciones->setFocusPolicy(Qt::StrongFocus);
        opciones->setStyleSheet(QStringLiteral("background: black"));
        Sl1 = new QSlider(opciones);
        Sl1->setObjectName(QStringLiteral("Sl1"));
        Sl1->setGeometry(QRect(32, 42, 15, 259));
        Sl1->setStyleSheet(QStringLiteral("background: rgb(70,0,0)"));
        Sl1->setOrientation(Qt::Vertical);
        Sl2 = new QSlider(opciones);
        Sl2->setObjectName(QStringLiteral("Sl2"));
        Sl2->setGeometry(QRect(111, 42, 15, 259));
        Sl2->setStyleSheet(QStringLiteral("background: rgb(70,0,0)"));
        Sl2->setOrientation(Qt::Vertical);
        lbSl1 = new QLabel(opciones);
        lbSl1->setObjectName(QStringLiteral("lbSl1"));
        lbSl1->setGeometry(QRect(12, 1, 53, 39));
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lbSl1->setPalette(palette);
        lbSl1->setAlignment(Qt::AlignCenter);
        lbSl2 = new QLabel(opciones);
        lbSl2->setObjectName(QStringLiteral("lbSl2"));
        lbSl2->setGeometry(QRect(93, 1, 52, 39));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lbSl2->setPalette(palette1);
        lbSl2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(opciones);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 157, 30, 30));
        QPalette palette2;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        pushButton->setPalette(palette2);
        pushButton->setFlat(true);
        sBmult = new QSpinBox(opciones);
        sBmult->setObjectName(QStringLiteral("sBmult"));
        sBmult->setGeometry(QRect(57, 43, 48, 26));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(70, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        sBmult->setPalette(palette3);

        retranslateUi(opciones);

        QMetaObject::connectSlotsByName(opciones);
    } // setupUi

    void retranslateUi(QWidget *opciones)
    {
        opciones->setWindowTitle(QApplication::translate("opciones", "Vpp - Offset", nullptr));
        lbSl1->setText(QApplication::translate("opciones", "Vpp", nullptr));
        lbSl2->setText(QApplication::translate("opciones", "Offset", nullptr));
        pushButton->setText(QApplication::translate("opciones", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opciones: public Ui_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCIONES_H
