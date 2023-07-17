#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include <QMainWindow>
#include "gamewindow.h"
#include "settings.h"

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
    void on_toolButton_3_clicked();
    void on_toolButton_clicked();
    void on_toolButton_2_clicked();

private:
    Ui::MainWindow *ui;
    gamewindow *gamewin;
    settings *settingswindow;
};
#endif // MAINWINDOW_H
