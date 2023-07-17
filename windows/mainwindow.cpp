#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    gamewin = new gamewindow;
    gamewin->setWindowTitle("Game");
    connect(gamewin, &gamewindow::firstWindow, this, &MainWindow::show);

    settingswindow = new settings;
    settingswindow->setModal(true);
    connect(settingswindow, &settings::resizeGame, gamewin, &gamewindow::newGame);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_toolButton_3_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Exit", "Are you sure?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
}


void MainWindow::on_toolButton_clicked()
{
    hide();
    gamewin->show();
}


void MainWindow::on_toolButton_2_clicked()
{

    settingswindow->show();
}

