#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->auto_run->setChecked(1);
    connect(&ui_update_timer,
            SIGNAL(timeout()),
            this,
            SLOT(UpdateUi()));

    ui_update_timer.start(33);

    connect(&physical_process_timer,
            SIGNAL(timeout()),
            this,
            SLOT(PhysicalProcess()));


    connect(ui->case_1,SIGNAL(clicked(bool)),this,SLOT(Case1()));
    connect(ui->case_2,SIGNAL(clicked(bool)),this,SLOT(Case2()));
    connect(ui->case_3,SIGNAL(clicked(bool)),this,SLOT(Case3()));
    connect(ui->case_4,SIGNAL(clicked(bool)),this,SLOT(Case4()));
    connect(ui->case_5,SIGNAL(clicked(bool)),this,SLOT(Case5()));
    connect(ui->case_6,SIGNAL(clicked(bool)),this,SLOT(Case6()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

extern uint8_t pin_v1;
extern uint8_t pin_s11;
extern uint8_t pin_s12;
extern uint8_t pin_b1;
extern uint8_t pin_s21;
extern uint8_t pin_s22;
extern uint8_t pin_v2;
extern uint8_t pin_s31;
extern uint8_t pin_s32;
extern uint8_t pin_h1;
extern uint8_t temp_1;


float tank1_level = 0;
float tank2_level = 0;
float tank3_level = 0;
float temperature = 30;

void MainWindow::UpdateUi(){
    ui->v1_led->setPower(pin_v1);
    ui->s11_led->setPower(pin_s11);
    ui->s12_led->setPower(pin_s12);

    ui->tank1->setValue((int)tank1_level);

    ui->b1_led->setPower(pin_b1);
    ui->s21_led->setPower(pin_s21);
    ui->s22_led->setPower(pin_s22);

    ui->tank2->setValue((int)tank2_level);

    ui->v2_led->setPower(pin_v2);
    ui->s31_led->setPower(pin_s31);
    ui->s32_led->setPower(pin_s32);

    ui->tank3->setValue((int)tank3_level);

    ui->h1->setPower(pin_h1);
    ui->temp_1->setText(QString::number(temperature));

    if (!(ui->auto_run->isChecked())){
        behavior_thread.start();
        physical_process_timer.start(10);
    }else if (ui->auto_run->isChecked()){
        behavior_thread.terminate();
        physical_process_timer.stop();
    }

}

void MainWindow::PhysicalProcess(){
    if(pin_v1){
        tank1_level += .21;
        if(tank1_level > 100){
            tank1_level = 100;
        }
    }
    if(pin_b1){
        tank2_level += .2;
        tank1_level -= .2;
        if(tank2_level > 100){
            tank2_level = 100;
        }
    }
    if(pin_v2){
        if((tank2_level*2)>tank3_level){
            tank2_level -= .2;
            tank3_level += ((.2/4)*100)/25;
            if(tank2_level > 100){
                tank2_level = 100;
            }
            if(tank3_level > 100){
                tank3_level = 100;
            }
        }
        if((tank2_level*2)<tank3_level){
            tank2_level += .2;
            tank3_level -= ((.2/4)*100)/25;
            if(tank2_level > 100){
                tank2_level = 100;
            }
            if(tank3_level > 100){
                tank3_level = 100;
            }
        }
    }
    if(pin_h1) temperature+=.02;
    if(!pin_h1) temperature-=.02;
    if(tank2_level)
        tank2_level -= .01;
    pin_s11 = (tank1_level >= 10);
    pin_s12 = (tank1_level >= 90);
    pin_s21 = (tank2_level >= 10);
    pin_s22 = (tank2_level >= 90);
    pin_s31 = (tank3_level >= 10);
    pin_s32 = (tank3_level >= 90);
    temp_1 = temperature;
}

void MainWindow::Case1(){
    tank1_level = 0;
    tank2_level = 100;
    tank3_level = 0;
    temperature = 25;
}
void MainWindow::Case2(){
    tank1_level = 0;
    tank2_level = 50;
    tank3_level = 0;
    temperature = 25;
}
void MainWindow::Case3(){
    tank1_level = 0;
    tank2_level = 0;
    tank3_level = 100;
    temperature = 25;
}
void MainWindow::Case4(){
    tank1_level = 0;
    tank2_level = 10;
    tank3_level = 100;
    temperature = 25;
}
void MainWindow::Case5(){
    tank1_level = 0;
    tank2_level = 10;
    tank3_level = 89;
    temperature = 25;
}
void MainWindow::Case6(){
    tank1_level = 0;
    tank2_level = 0;
    tank3_level = 0;
    temperature = 30;
}
