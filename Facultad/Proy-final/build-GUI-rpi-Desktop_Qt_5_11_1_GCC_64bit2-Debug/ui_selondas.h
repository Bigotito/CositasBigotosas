/********************************************************************************
** Form generated from reading UI file 'selondas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELONDAS_H
#define UI_SELONDAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selOndas
{
public:
    QGroupBox *gbondas;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pBond_3;
    QPushButton *pBond_4;
    QPushButton *pBond_2;
    QPushButton *pBond_5;

    void setupUi(QWidget *selOndas)
    {
        if (selOndas->objectName().isEmpty())
            selOndas->setObjectName(QStringLiteral("selOndas"));
        selOndas->resize(108, 363);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selOndas->sizePolicy().hasHeightForWidth());
        selOndas->setSizePolicy(sizePolicy);
        selOndas->setStyleSheet(QStringLiteral("background: black"));
        gbondas = new QGroupBox(selOndas);
        gbondas->setObjectName(QStringLiteral("gbondas"));
        gbondas->setGeometry(QRect(0, 0, 106, 361));
        verticalLayoutWidget = new QWidget(gbondas);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(4, 20, 101, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pBond_3 = new QPushButton(verticalLayoutWidget);
        pBond_3->setObjectName(QStringLiteral("pBond_3"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBond_3->setPalette(palette);
        pBond_3->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/seno.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBond_3->setIcon(icon);
        pBond_3->setIconSize(QSize(70, 60));
        pBond_3->setFlat(true);

        verticalLayout->addWidget(pBond_3);

        pBond_4 = new QPushButton(verticalLayoutWidget);
        pBond_4->setObjectName(QStringLiteral("pBond_4"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBond_4->setPalette(palette1);
        pBond_4->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cuadrada.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBond_4->setIcon(icon1);
        pBond_4->setIconSize(QSize(70, 60));
        pBond_4->setFlat(true);

        verticalLayout->addWidget(pBond_4);

        pBond_2 = new QPushButton(verticalLayoutWidget);
        pBond_2->setObjectName(QStringLiteral("pBond_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBond_2->setPalette(palette2);
        pBond_2->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/triangular.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBond_2->setIcon(icon2);
        pBond_2->setIconSize(QSize(70, 60));
        pBond_2->setFlat(true);

        verticalLayout->addWidget(pBond_2);

        pBond_5 = new QPushButton(verticalLayoutWidget);
        pBond_5->setObjectName(QStringLiteral("pBond_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBond_5->setPalette(palette3);
        pBond_5->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/arb.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBond_5->setIcon(icon3);
        pBond_5->setIconSize(QSize(70, 60));
        pBond_5->setFlat(true);

        verticalLayout->addWidget(pBond_5);


        retranslateUi(selOndas);

        QMetaObject::connectSlotsByName(selOndas);
    } // setupUi

    void retranslateUi(QWidget *selOndas)
    {
        selOndas->setWindowTitle(QApplication::translate("selOndas", "Onda", nullptr));
        gbondas->setTitle(QString());
        pBond_3->setText(QString());
        pBond_4->setText(QString());
        pBond_2->setText(QString());
        pBond_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selOndas: public Ui_selOndas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELONDAS_H
