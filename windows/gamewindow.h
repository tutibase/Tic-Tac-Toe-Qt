#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#pragma once
#include <QWidget>
#include "game.h"
#include "cellbutton/cellbutton.h"
#include <vector>

namespace Ui {
class gamewindow;
}

class gamewindow : public QWidget
{
    Q_OBJECT

signals:
    void firstWindow();

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();
    //void exit_application();
    void resizeButtonsArray();

private slots:
    void updateWindow(); // Обновить поле

    void on_toolButton_2_clicked();

    void on_toolButton_clicked();

public slots:
    void newGame(); // Новая игра
    void endgame();


private:
    Ui::gamewindow* ui;
    game gameStatus; // Состояние игры
    std::vector<std::vector<CellButton*>> cells; // Клетки поля (кнопки)

    void updateGameButtons();
    void setWindowSize();
};

#endif // GAMEWINDOW_H
