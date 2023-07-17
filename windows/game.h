#ifndef GAME_H
#define GAME_H
#pragma once
#include <vector>
#include "map_size.h"
#include <QString>

const char X = 'X';
const char O = 'O';
const int winline = 5;


// Состояние игры
enum State {
    X_MOVE, // Ход крестиков
    O_MOVE, // Ход ноликов
    X_WIN,  // Крестики выиграли
    O_WIN,  // Нолики выиграли
    DRAW    // Ничья
};

class game{

    // Текущее состояние игры
    State state;

    // Игровое поле
    std::vector<std::vector<char>> Map;

    // Проверка выигрыша
    void checkLine(std::vector<char> a);


public:
    // Конструктор
    game();

    // Новая игра без пересоздания объекта
    void newGame();

    // Получаем строку, соответствующую состоянию игры
    QString getStateString();

    // Совершаем ход, возвращает строку для клетки на форме
    QString makeMove(int row, int col);

    // Проверяем на окончание игры
    void checkGameOver();

    State getState();

    void mapResize();
};

#endif // GAME_H
