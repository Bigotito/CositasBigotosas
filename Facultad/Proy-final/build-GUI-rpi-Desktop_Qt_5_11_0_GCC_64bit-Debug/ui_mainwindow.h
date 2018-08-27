/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QPushButton *pBVpp;
    QPushButton *pushButton_2;

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
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 400, 572, 4));
        line_2->setStyleSheet(QStringLiteral("color: white"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(570, 0, 3, 402));
        line_3->setStyleSheet(QStringLiteral("color: white"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(528, 433, 3, 49));
        line_4->setStyleSheet(QStringLiteral("color: white"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(438, 433, 3, 49));
        line_5->setStyleSheet(QStringLiteral("color: white"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::VLine);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(348, 433, 3, 49));
        line_6->setStyleSheet(QStringLiteral("color: white"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setFrameShape(QFrame::VLine);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(240, 433, 3, 49));
        line_7->setStyleSheet(QStringLiteral("color: white"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setFrameShape(QFrame::VLine);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(120, 433, 3, 49));
        line_8->setStyleSheet(QStringLiteral("color: white"));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setFrameShape(QFrame::VLine);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(30, 403, 3, 30));
        line_9->setStyleSheet(QStringLiteral("color: white"));
        line_9->setFrameShadow(QFrame::Plain);
        line_9->setFrameShape(QFrame::VLine);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(573, 30, 30, 4));
        line_10->setStyleSheet(QStringLiteral("color: white"));
        line_10->setFrameShadow(QFrame::Plain);
        line_10->setFrameShape(QFrame::HLine);
        pBVpp = new QPushButton(centralWidget);
        pBVpp->setObjectName(QStringLiteral("pBVpp"));
        pBVpp->setGeometry(QRect(6, 438, 110, 41));
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
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(126, 438, 110, 41));
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
        pushButton_2->setPalette(palette1);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pBVpp->setText(QApplication::translate("MainWindow", "Vpp = 15 V", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Freq = 25 Hz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
