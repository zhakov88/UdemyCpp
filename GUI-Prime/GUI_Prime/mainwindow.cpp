#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_input_edit = ui->inputLineEdit;
    m_output_edit = ui->outputLineEdit;
    m_calc_button = ui->calcButton;

    connect(m_calc_button, SIGNAL(released()),this,SLOT(compute()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


bool check_prime(std::uint64_t value)
{
    if(value<=1)
    {
        return false;
    }
    if ((value==2)||(value==3)||(value==5)||(value==7))
    {
        return true;
    }

    if(value%2 ==0)
    {
        return false;
    }

    if(value%3 ==0)
    {
        return false;
    }

    if(value%5 ==0)
    {
        return false;
    }

    for(std::uint64_t i = 11;i<=sqrt(value);i+=2)
    {
        if (value % i == 0)
        {
            return false;
        }
    }
    return true;
}


void MainWindow::compute()
{
    QString value_str = m_input_edit->text();
    std::uint64_t value = value_str.toULongLong();

    bool is_prime = check_prime(value);
    if(is_prime)
    {
        m_output_edit->setText("Is Prime!");
    }
    else
    {
        m_output_edit->setText("Is not Prime!");
    }

    std::cout<<"Hallo"<<std::endl;
}
