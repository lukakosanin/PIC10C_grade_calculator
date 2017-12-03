#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), HW1(0),HW2(0), HW3(0), HW4(0), HW5(0), HW6(0), HW7(0), HW8(0), Mid1(0), Mid2(0), Final_score(0),
    optA(true), optB(false), optC(false)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(update_variables()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(calculate_grade()));

}
double MainWindow::grade_A() const
{
    double temp = 0.0;
    temp = ((.25*((HW1+HW2+HW3+HW4+HW5+HW6+HW7+HW8)/8))+(.2*Mid1)+(.2*Mid2)+(.35*Final_score));
    return (temp);

}
double MainWindow::grade_B() const
{
    double temp = 0.0;
    if (Mid1>Mid2)
    {
    temp = ((.25*((HW1+HW2+HW3+HW4+HW5+HW6+HW7+HW8)/8))+(.3*Mid1)+(.45*Final_score));
    }
    else
    {
        temp = ((.25*((HW1+HW2+HW3+HW4+HW5+HW6+HW7+HW8)/8))+(.3*Mid2)+(.45*Final_score));
    }
    return (temp);
}
double MainWindow::max() const
{
    double a = grade_A();
    double b = grade_B();
    if(a>b)
        return a;
    else
        return b;
}
void MainWindow::update_variables()
{
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
    optB = ui->radioButton_2->isChecked();
    optC = ui->radioButton_3->isChecked();
}
void MainWindow::calculate_grade()
{
    QString grade = "";
    if(optA == true)
    {
        grade = QString::number(grade_A());
    }
    else if (optB == true)
    {
        grade = QString::number(grade_B());
    }
    else if (optC == true)
    {
        grade = QString::number(max());
    }
    grade+="%";
    ui->lineEdit->setText(grade);
}
MainWindow::~MainWindow()
{
    delete ui;
}
