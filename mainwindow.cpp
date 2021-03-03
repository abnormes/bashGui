#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_save_config_triggered()
{
    printf("World saved!");
}

void MainWindow::on_load_config_triggered()
{
    printf("World loaded!");
}
