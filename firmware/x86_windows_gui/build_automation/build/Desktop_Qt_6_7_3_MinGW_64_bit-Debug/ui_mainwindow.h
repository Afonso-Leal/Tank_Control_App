/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QRadioButton *auto_run;
    QPushButton *case_1;
    QPushButton *case_2;
    QPushButton *case_3;
    QPushButton *case_4;
    QPushButton *case_5;
    QPushButton *case_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(391, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        v1_led = new Led(centralwidget);
        v1_led->setObjectName("v1_led");
        v1_led->setGeometry(QRect(10, 270, 21, 21));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 290, 21, 16));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        s11_led = new Led(centralwidget);
        s11_led->setObjectName("s11_led");
        s11_led->setGeometry(QRect(110, 250, 21, 21));
        s12_led = new Led(centralwidget);
        s12_led->setObjectName("s12_led");
        s12_led->setGeometry(QRect(110, 220, 21, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 250, 21, 16));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 220, 21, 16));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tank1 = new cedaTank(centralwidget);
        tank1->setObjectName("tank1");
        tank1->setGeometry(QRect(40, 220, 61, 81));
        s21_led = new Led(centralwidget);
        s21_led->setObjectName("s21_led");
        s21_led->setGeometry(QRect(270, 140, 21, 21));
        s22_led = new Led(centralwidget);
        s22_led->setObjectName("s22_led");
        s22_led->setGeometry(QRect(270, 90, 21, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 90, 21, 16));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        b1_led = new Led(centralwidget);
        b1_led->setObjectName("b1_led");
        b1_led->setGeometry(QRect(160, 290, 21, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 140, 21, 16));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 310, 21, 16));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tank2 = new cedaTank(centralwidget);
        tank2->setObjectName("tank2");
        tank2->setGeometry(QRect(200, 90, 61, 81));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(160, 150, 20, 151));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(100, 290, 71, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Gothic")});
        font.setPointSize(16);
        line_2->setFont(font);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(170, 140, 31, 20));
        line_3->setFont(font);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(260, 160, 81, 16));
        line_4->setFont(font);
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        tank3 = new cedaTank(centralwidget);
        tank3->setObjectName("tank3");
        tank3->setGeometry(QRect(200, 200, 31, 51));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(230, 240, 111, 20));
        line_5->setFont(font);
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(330, 170, 20, 81));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        v2_led = new Led(centralwidget);
        v2_led->setObjectName("v2_led");
        v2_led->setGeometry(QRect(330, 200, 21, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(350, 200, 21, 16));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 220, 21, 16));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        s31_led = new Led(centralwidget);
        s31_led->setObjectName("s31_led");
        s31_led->setGeometry(QRect(230, 221, 20, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(250, 199, 21, 16));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        s32_led = new Led(centralwidget);
        s32_led->setObjectName("s32_led");
        s32_led->setGeometry(QRect(230, 200, 20, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(190, 260, 41, 16));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        temp_1 = new QLabel(centralwidget);
        temp_1->setObjectName("temp_1");
        temp_1->setGeometry(QRect(210, 190, 47, 13));
        h1 = new Led(centralwidget);
        h1->setObjectName("h1");
        h1->setGeometry(QRect(200, 240, 21, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(220, 250, 47, 13));
        auto_run = new QRadioButton(centralwidget);
        auto_run->setObjectName("auto_run");
        auto_run->setGeometry(QRect(10, 10, 112, 26));
        case_1 = new QPushButton(centralwidget);
        case_1->setObjectName("case_1");
        case_1->setGeometry(QRect(10, 40, 83, 29));
        case_2 = new QPushButton(centralwidget);
        case_2->setObjectName("case_2");
        case_2->setGeometry(QRect(10, 80, 83, 29));
        case_3 = new QPushButton(centralwidget);
        case_3->setObjectName("case_3");
        case_3->setGeometry(QRect(10, 120, 83, 29));
        case_4 = new QPushButton(centralwidget);
        case_4->setObjectName("case_4");
        case_4->setGeometry(QRect(10, 160, 83, 29));
        case_5 = new QPushButton(centralwidget);
        case_5->setObjectName("case_5");
        case_5->setGeometry(QRect(110, 40, 83, 29));
        case_6 = new QPushButton(centralwidget);
        case_6->setObjectName("case_6");
        case_6->setGeometry(QRect(110, 80, 83, 29));
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
        auto_run->raise();
        case_1->raise();
        case_2->raise();
        case_3->raise();
        case_4->raise();
        case_5->raise();
        case_6->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 391, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        v1_led->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "v1", nullptr));
        s11_led->setText(QString());
        s12_led->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "S11", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "S12", nullptr));
        tank1->setText(QCoreApplication::translate("MainWindow", "tank1", nullptr));
        s21_led->setText(QString());
        s22_led->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "S22", nullptr));
        b1_led->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "S21", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "b1", nullptr));
        tank2->setText(QCoreApplication::translate("MainWindow", "tank2", nullptr));
        tank3->setText(QString());
        v2_led->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "v2", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "S31", nullptr));
        s31_led->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "S32", nullptr));
        s32_led->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "tank3", nullptr));
        temp_1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        h1->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "heater", nullptr));
        auto_run->setText(QCoreApplication::translate("MainWindow", "Automatic Run", nullptr));
        case_1->setText(QCoreApplication::translate("MainWindow", "Test case 1", nullptr));
        case_2->setText(QCoreApplication::translate("MainWindow", "Test case 2", nullptr));
        case_3->setText(QCoreApplication::translate("MainWindow", "Test case 3", nullptr));
        case_4->setText(QCoreApplication::translate("MainWindow", "Test case 4", nullptr));
        case_5->setText(QCoreApplication::translate("MainWindow", "Test case 5", nullptr));
        case_6->setText(QCoreApplication::translate("MainWindow", "set all 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
