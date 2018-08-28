/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QPushButton *pBVpp;
    QPushButton *pBfreq;
    QPushButton *pBond;
    QPushButton *pBdivX;
    QPushButton *pBdivY;
    QPushButton *pBopc;
    QCustomPlot *grafico;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setToolTipDuration(-1);
        MainWindow->setStyleSheet(QStringLiteral("background-color: black"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 431, 600, 4));
        line->setStyleSheet(QStringLiteral("color: white"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(528, 433, 3, 49));
        line_4->setStyleSheet(QStringLiteral("color: white"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(438, 433, 3, 49));
        line_5->setStyleSheet(QStringLiteral("color: white"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::VLine);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(348, 433, 3, 49));
        line_6->setStyleSheet(QStringLiteral("color: white"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::VLine);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(240, 433, 3, 49));
        line_7->setStyleSheet(QStringLiteral("color: white"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setLineWidth(2);
        line_7->setFrameShape(QFrame::VLine);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(120, 433, 3, 49));
        line_8->setStyleSheet(QStringLiteral("color: white"));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setLineWidth(2);
        line_8->setFrameShape(QFrame::VLine);
        pBVpp = new QPushButton(centralWidget);
        pBVpp->setObjectName(QStringLiteral("pBVpp"));
        pBVpp->setGeometry(QRect(5, 436, 110, 41));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBVpp->setPalette(palette);
        pBVpp->setAutoFillBackground(false);
        pBVpp->setFlat(true);
        pBfreq = new QPushButton(centralWidget);
        pBfreq->setObjectName(QStringLiteral("pBfreq"));
        pBfreq->setGeometry(QRect(126, 436, 110, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush3(QColor(238, 238, 236, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBfreq->setPalette(palette1);
        pBfreq->setAutoFillBackground(false);
        pBfreq->setFlat(true);
        pBond = new QPushButton(centralWidget);
        pBond->setObjectName(QStringLiteral("pBond"));
        pBond->setGeometry(QRect(250, 436, 91, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBond->setPalette(palette2);
        pBond->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/seno.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBond->setIcon(icon);
        pBond->setIconSize(QSize(70, 60));
        pBond->setFlat(true);
        pBdivX = new QPushButton(centralWidget);
        pBdivX->setObjectName(QStringLiteral("pBdivX"));
        pBdivX->setGeometry(QRect(353, 436, 81, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBdivX->setPalette(palette3);
        pBdivX->setAutoFillBackground(false);
        pBdivX->setFlat(true);
        pBdivY = new QPushButton(centralWidget);
        pBdivY->setObjectName(QStringLiteral("pBdivY"));
        pBdivY->setGeometry(QRect(444, 436, 81, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pBdivY->setPalette(palette4);
        pBdivY->setAutoFillBackground(false);
        pBdivY->setFlat(true);
        pBopc = new QPushButton(centralWidget);
        pBopc->setObjectName(QStringLiteral("pBopc"));
        pBopc->setGeometry(QRect(534, 436, 61, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/opc.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBopc->setIcon(icon1);
        pBopc->setIconSize(QSize(30, 30));
        pBopc->setFlat(true);
        grafico = new QCustomPlot(centralWidget);
        grafico->setObjectName(QStringLiteral("grafico"));
        grafico->setGeometry(QRect(1, 1, 598, 430));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-2, 434, 611, 46));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("background: rgb(40,40,40)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(241, 433, 106, 46));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        label_2->raise();
        line->raise();
        line_4->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        line_8->raise();
        pBVpp->raise();
        pBfreq->raise();
        pBond->raise();
        pBdivX->raise();
        pBdivY->raise();
        pBopc->raise();
        grafico->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pBVpp->setText(QApplication::translate("MainWindow", "Vpp = \n"
"Offset = ", nullptr));
        pBfreq->setText(QApplication::translate("MainWindow", "Freq = ", nullptr));
        pBond->setText(QString());
        pBdivX->setText(QApplication::translate("MainWindow", "10 ms/div", nullptr));
        pBdivY->setText(QApplication::translate("MainWindow", "5 V/div", nullptr));
        pBopc->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
