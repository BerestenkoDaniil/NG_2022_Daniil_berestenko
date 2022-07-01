#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->te_input, &QTextEdit::textChanged, this, &MainWindow::wCount);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wCount()
{
    QString YourString = ui->te_input->toPlainText()+" ";
    int amount = 0;
    for (int index = 0; index < YourString.size()-1; index++)
    {
        if((((YourString[index] >= 'a' && YourString[index] <= 'z') ||
             (YourString[index] >= 'A' && YourString[index] <= 'Z')) &&
            !((YourString[index+1] >= 'a' && YourString[index+1] <= 'z') ||
              (YourString[index+1] >= 'A' && YourString[index+1] <= 'Z'))) ||
           (YourString[index] >= 'a' && YourString[index] <= 'z') &&
           (YourString[index+1] >= 'A' && YourString[index+1] <= 'Z'))
            amount++;
    }
    ui->sb_counter->setValue(amount);
}

