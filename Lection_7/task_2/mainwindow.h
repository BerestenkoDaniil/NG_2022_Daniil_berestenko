#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void inputButton();
    void eraserButton();
    void showRes();
    void inputDot();
    void mathOperetion();

private:
    Ui::MainWindow *ui;
    int firstnum;
    int secondnum;
    char action;
};
#endif // MAINWINDOW_H
