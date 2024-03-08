#include "mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    button = new QPushButton("Click me!", this);
    button->setGeometry(100, 100, 100, 50);

    connect(button, &QPushButton::clicked, this, &MainWindow::showMessage);
}

MainWindow::~MainWindow()
{

}

void MainWindow::showMessage()
{
    QMessageBox::information(this, "Hello", "Hello, world!");
}
