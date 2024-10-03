/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "cedatank.h"
#include "led.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    Led *v1_led;
    QLabel *label;
    Led *s11_led;
    Led *s12_led;
    QLabel *label_2;
    QLabel *label_3;
    cedaTank *tank1;
    Led *s21_led;
    Led *s22_led;
    QLabel *label_4;
    Led *b1_led;
    QLabel *label_5;
    QLabel *label_6;
    cedaTank *tank2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    cedaTank *tank3;
    QFrame *line_5;
    QFrame *line_6;
    Led *v2_led;
    QLabel *label_7;
    QLabel *label_8;
    Led *s31_led;
    QLabel *label_9;
    Led *s32_led;
    QLabel *label_10;
    QLabel *temp_1;
    Led *h1;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(391, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        v1_led = new Led(centralwidget);
        v1_led->setObjectName(QString::fromUtf8("v1_led"));
        v1_led->setGeometry(QRect(10, 270, 21, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 290, 21, 16));
        label->setAlignment(Qt::AlignCenter);
        s11_led = new Led(centralwidget);
        s11_led->setObjectName(QString::fromUtf8("s11_led"));
        s11_led->setGeometry(QRect(110, 250, 21, 21));
        s12_led = new Led(centralwidget);
        s12_led->setObjectName(QString::fromUtf8("s12_led"));
        s12_led->setGeometry(QRect(110, 220, 21, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 250, 21, 16));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 220, 21, 16));
        label_3->setAlignment(Qt::AlignCenter);
        tank1 = new cedaTank(centralwidget);
        tank1->setObjectName(QString::fromUtf8("tank1"));
        tank1->setGeometry(QRect(40, 220, 61, 81));
        s21_led = new Led(centralwidget);
        s21_led->setObjectName(QString::fromUtf8("s21_led"));
        s21_led->setGeometry(QRect(270, 140, 21, 21));
        s22_led = new Led(centralwidget);
        s22_led->setObjectName(QString::fromUtf8("s22_led"));
        s22_led->setGeometry(QRect(270, 90, 21, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 90, 21, 16));
        label_4->setAlignment(Qt::AlignCenter);
        b1_led = new Led(centralwidget);
        b1_led->setObjectName(QString::fromUtf8("b1_led"));
        b1_led->setGeometry(QRect(160, 290, 21, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 140, 21, 16));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 310, 21, 16));
        label_6->setAlignment(Qt::AlignCenter);
        tank2 = new cedaTank(centralwidget);
        tank2->setObjectName(QString::fromUtf8("tank2"));
        tank2->setGeometry(QRect(200, 90, 61, 81));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(160, 150, 20, 151));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(100, 290, 71, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Gothic"));
        font.setPointSize(16);
        line_2->setFont(font);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(170, 140, 31, 20));
        line_3->setFont(font);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(260, 160, 81, 16));
        line_4->setFont(font);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tank3 = new cedaTank(centralwidget);
        tank3->setObjectName(QString::fromUtf8("tank3"));
        tank3->setGeometry(QRect(200, 200, 31, 51));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(230, 240, 111, 20));
        line_5->setFont(font);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(330, 170, 20, 81));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        v2_led = new Led(centralwidget);
        v2_led->setObjectName(QString::fromUtf8("v2_led"));
        v2_led->setGeometry(QRect(330, 200, 21, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 200, 21, 16));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 220, 21, 16));
        label_8->setAlignment(Qt::AlignCenter);
        s31_led = new Led(centralwidget);
        s31_led->setObjectName(QString::fromUtf8("s31_led"));
        s31_led->setGeometry(QRect(230, 221, 20, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 199, 21, 16));
        label_9->setAlignment(Qt::AlignCenter);
        s32_led = new Led(centralwidget);
        s32_led->setObjectName(QString::fromUtf8("s32_led"));
        s32_led->setGeometry(QRect(230, 200, 20, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(190, 260, 41, 16));
        label_10->setAlignment(Qt::AlignCenter);
        temp_1 = new QLabel(centralwidget);
        temp_1->setObjectName(QString::fromUtf8("temp_1"));
        temp_1->setGeometry(QRect(210, 190, 47, 13));
        h1 = new Led(centralwidget);
        h1->setObjectName(QString::fromUtf8("h1"));
        h1->setGeometry(QRect(200, 240, 21, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(220, 250, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        line_2->raise();
        v1_led->raise();
        label->raise();
        s11_led->raise();
        s12_led->raise();
        label_2->raise();
        label_3->raise();
        tank1->raise();
        s21_led->raise();
        s22_led->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        tank2->raise();
        line->raise();
        line_3->raise();
        line_4->raise();
        tank3->raise();
        line_5->raise();
        line_6->raise();
        b1_led->raise();
        v2_led->raise();
        label_7->raise();
        label_8->raise();
        s31_led->raise();
        label_9->raise();
        s32_led->raise();
        label_10->raise();
        temp_1->raise();
        h1->raise();
        label_11->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 391, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        v1_led->setText(QString());
        label->setText(QApplication::translate("MainWindow", "v1", nullptr));
        s11_led->setText(QString());
        s12_led->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "S11", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "S12", nullptr));
        tank1->setText(QApplication::translate("MainWindow", "tank1", nullptr));
        s21_led->setText(QString());
        s22_led->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "S22", nullptr));
        b1_led->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "S21", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "b1", nullptr));
        tank2->setText(QApplication::translate("MainWindow", "tank2", nullptr));
        tank3->setText(QString());
        v2_led->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "v2", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "S31", nullptr));
        s31_led->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "S32", nullptr));
        s32_led->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "tank3", nullptr));
        temp_1->setText(QApplication::translate("MainWindow", "0", nullptr));
        h1->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "heater", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
