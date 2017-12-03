#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    //void calculate_grade();

private:
    Ui::MainWindow *ui;
    int HW1, HW2, HW3, HW4, HW5, HW6, HW7, HW8, Mid1, Mid2, Final_score;
    bool optA, optB, optC;
};

#endif // MAINWINDOW_H
