#include "mainwindow.h"
#include "QVBoxLayout"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(800, 600);

    QWidget *mainView = new QWidget;
    setCentralWidget(mainView);
}

MainWindow::~MainWindow()
{

}
