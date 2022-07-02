#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pb_1, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_2, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_3, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_4, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_5, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_6, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_7, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_8, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_9, &QPushButton::clicked, this, &MainWindow::inputButton);
    connect(ui->pb_10, &QPushButton::clicked, this, &MainWindow::inputButton);

    connect(ui->pb_minus, &QPushButton::clicked, this, &MainWindow::mathOperetion);
    connect(ui->pb_plus, &QPushButton::clicked, this, &MainWindow::mathOperetion);
    connect(ui->pb_div, &QPushButton::clicked, this, &MainWindow::mathOperetion);
    connect(ui->pb_mult, &QPushButton::clicked, this, &MainWindow::mathOperetion);

    connect(ui->pb_dott, &QPushButton::clicked, this, &MainWindow::inputDot);
    connect(ui->pb_eraser, &QPushButton::clicked, this, &MainWindow::eraserButton);
    connect(ui->pb_clear, &QPushButton::clicked, ui->l_output, &QLabel::clear);
    connect(ui->pb_equal, &QPushButton::clicked, this, &MainWindow::showRes);

    ui->pb_div->setCheckable(true);
    ui->pb_mult->setCheckable(true);
    ui->pb_plus->setCheckable(true);
    ui->pb_minus->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::inputButton()
{
    QPushButton *button = (QPushButton *)sender();
    ui->l_output->setText(ui->l_output->text()+button->text());
}

void MainWindow::eraserButton()
{
    QString text = ui->l_output->text();
    if (text.isEmpty() == false) ui->l_output->setText(text.remove(text.size()-1, 1));
}

void MainWindow::inputDot()
{
    int len = ui->l_output->text().length();
    if(len > 0 && ui->l_output->text()[len-1] != '.'){
        ui->l_output->setText(ui->l_output->text()+'.');
    }
}

void MainWindow::mathOperetion()
{
     QPushButton *button = (QPushButton *)sender();

     firstnum = ui->l_output->text().toDouble();
     ui->l_output->setText("");
     button->setChecked(true);
}


void MainWindow::showRes()
{
    double LabelNum = firstnum;
    QString new_label;
    secondnum = ui->l_output->text().toDouble();
    qDebug()<<"secondnum: "<<secondnum;
    if(ui->pb_plus->isChecked()){
        LabelNum = firstnum + secondnum;
        ui->pb_plus->setChecked(false);
    }
    else if(ui->pb_minus->isChecked()){
        LabelNum = firstnum - secondnum;
        ui->pb_minus->setChecked(false);
    }
    else if(ui->pb_mult->isChecked()){
        LabelNum = firstnum * secondnum;
        ui->pb_mult->setChecked(false);
    }
    else if(ui->pb_div->isChecked()){
        if(secondnum == 0)
            LabelNum = 0;
        else
            LabelNum = firstnum / secondnum;
        ui->pb_div->setChecked(false);
    }
    new_label = QString::number(LabelNum, 'g', 15);
    ui->l_output->setText(new_label);
}



