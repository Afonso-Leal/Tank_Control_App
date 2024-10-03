#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "behaviorthread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTimer ui_update_timer;
    QTimer physical_process_timer;

    BehaviorThread behavior_thread;

private:
    Ui::MainWindow *ui;

public slots:
    void UpdateUi();
    void PhysicalProcess();
    void Case1();
    void Case2();
    void Case3();
    void Case4();
    void Case5();
    void Case6();
};
#endif // MAINWINDOW_H
