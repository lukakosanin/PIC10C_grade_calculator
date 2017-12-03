#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), HW1(0),HW2(0), HW3(0), HW4(0), HW5(0), HW6(0), HW7(0), HW8(0), Mid1(0), Mid2(0), Final_score(0),
    optA(true), optB(false), optC(false)
{
    ui->setupUi(this);
    HW1 = ui->hw1_spinbox->value();
    HW2 = ui->hw2_spinbox->value();
    HW3 = ui->hw3_spinbox->value();
    HW4 = ui->hw4_spinbox->value();
    HW5 = ui->hw5_spinbox->value();
    HW6 = ui->hw6_spinbox->value();
    HW7 = ui->hw7_spinbox->value();
    HW8 = ui->hw8_spinbox->value();
    Mid1 = ui->Mid1_spinbox->value();
    Mid2 = ui->Mid2_spinbox->value();
    Final_score = ui->Final_spinbox->value();
    optA = ui->radioButton->isChecked();
    optB = ui->radioButton->isChecked();
    optC = ui->radioButton->isChecked();

}

MainWindow::~MainWindow()
{
    delete ui;
}
