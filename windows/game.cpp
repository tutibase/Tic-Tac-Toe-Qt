#include "game.h"
#include <QDebug>

game::game() {
    newGame();
}


void game::mapResize() {
    Map.resize(MapSize);

    for(int i = 0; i < MapSize; ++i)
        Map[i].resize(MapSize);
}

void game::newGame() {
    mapResize();

    state = O_MOVE;

    // Заполняем поле пустыми клетками
    for(int i = 0; i < MapSize; i++)
        for(int j = 0; j < MapSize; j++)
            Map[i][j] = ' ';
}

QString game::getStateString() {
    switch(state) {
        case X_MOVE:
            return QString("X move");

        case O_MOVE:
            return QString("O move");

        case X_WIN:
            return QString("X won!");

        case O_WIN:
            return QString("O won!");

        case DRAW:
            return QString("Draw!");

        default:
            return QString("err");
  }
}


QString game::makeMove(int row, int col) {
    switch (state) {
        case X_MOVE:
            Map[row][col] = X;
            state = O_MOVE;
            break;

        case O_MOVE:
            Map[row][col] = O;
            state = X_MOVE;
            break;

        default:
            return QString(" ");
    }

    checkGameOver();
    return QString(Map[row][col]);
}

void game::checkLine(std::vector<char> a) {

    int counter = 0;
    char symbol = a[0];

    for(int i = 1; i < a.size(); ++i){
        counter++;

        if(a[i - 1] != a[i] ){
            counter = 0;
            symbol = a[i];
        }

        if (counter == 4 )
            break;
    }

    if (counter < 4)
        return;


    switch(symbol) {
        case X:
            state = X_WIN;
            break;

        case O:
            state = O_WIN;
            break;

        default:
            break;
    }
}

void game::checkGameOver() {
    std::vector<char> a(MapSize);

    // == Проверяем диагонали ==
    // Основные диагонали

    for(int k=0; k<MapSize; k++) { // проход по диагоналям над главной
            a.resize(MapSize-k);
            for(int i=0; i < MapSize - k; i++) {
                a[i] = Map[i][i+k];
            }

            checkLine(a);
        }

    for(int k=1; k<MapSize; k++) { // проход по диагоналям под главной
        a.resize(MapSize-k);
        for(int i=0; i < MapSize - k; i++) {
            a[i] = Map[i+k][i];
        }

        checkLine(a);
    }

    // Дополнительные диагонали
    for(int k=0; k<MapSize; k++) { // проход по диагонали над побочной
        a.resize(k+1);
        for(int i=0; i<=k; i++) {
            a[i] = Map[i][k-i];
        }
        //qDebug() << a;
        checkLine(a);
    }

    for(int k=1; k<MapSize; k++) { // проход по диагоналям под побочной
        a.resize(MapSize-k);
        for(int i=k; i<MapSize; i++) {
            a[i-k] = Map[i][MapSize-i+k-1];
        }

        checkLine(a);
    }



    // Вертикальные и горизонтальные линии
    a.resize(MapSize);

    for(int i = 0; i < MapSize; ++i) {
      // Вертикальная линия
        for(int j = 0; j < MapSize; ++j)
            a[j] = Map[j][i];
        //qDebug() << std::endl;

        checkLine(a);

      // Горизонтальная линия
        checkLine(Map[i]);
    }

    // Проверяем что крестики или нолики
    // выиграли и выходим
    switch(state) {
        case X_WIN:
        case O_WIN:
            return;

        default:
        ; // Do nothing
    }

    // Ничья = не осталось пустых клеток
    int cnt = 0; // Количество пустых клеток

    for(int i = 0; i < MapSize; i++)
        for(int j = 0; j < MapSize; j++)
            if(Map[i][j] == ' ')
                cnt++;

    if(cnt == 0)
        state = DRAW;
}

State game::getState(){
    return state;
}
