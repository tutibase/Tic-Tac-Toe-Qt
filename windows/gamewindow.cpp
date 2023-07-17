#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "map_size.h"
#include <QDebug>

gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);

    // Задаём размер массиву кнопок
    resizeButtonsArray();

    // Заполним весь массив кнопок поля NULL
    for(int i = 0; i < MapSize; i++)
      for(int j = 0; j < MapSize; j++)
        cells[i][j] = NULL;



    // Начало игры
    newGame();
}

gamewindow::~gamewindow()
{
    delete ui;
}


//////////////////////////////////////////


void gamewindow::resizeButtonsArray() {
    cells.resize(MapSize);

    for(int i = 0; i < MapSize; ++i)
        cells[i].resize(MapSize);
}

void gamewindow::updateWindow() {
    //изменяем текст статуса игры
    ui->moveLabel->setText(gameStatus.getStateString());
    ui->moveLabel->setStyleSheet("QLabel {color: rgb(255, 255, 255); background-color: rgb(43, 153, 91); "
                                 "font-size: 30px; font-weight: bold; line-height: 40px;}");

    if((gameStatus.getState() == State::X_WIN) ||
            (gameStatus.getState() == State::O_WIN)){
        endgame();
    }
}

void gamewindow::setWindowSize(){
    this->setFixedSize(380 + (MapSize-5)*66, 430 + (MapSize-5)*66);
}

void gamewindow::newGame() { // Новая игра
    setWindowSize();
    gameStatus.newGame();
    updateWindow();
    updateGameButtons();
}

void gamewindow::endgame(){
    for(int i = 0; i < MapSize; i++)
        for(int j = 0; j < MapSize; j++)
            cells[i][j]->setEnabled(false);
}

void gamewindow::updateGameButtons() {
    int cellSize = 60; // Размер кнопки
    int cellSpace = 6; // Отступ
    int topSpace = 80; // Отступ сверху
    int leftSpace = 30; // Отступ слева/////////////

    for(unsigned int i = 0; i < cells.size(); ++i)
        for(unsigned int j = 0; j < cells[i].size(); ++j) {

            if(cells[i][j] != NULL)
            delete cells[i][j];
      }

    resizeButtonsArray();

    // Создаём массив конпок MapSize на MapSize
    for(int i = 0; i < MapSize; i++)
        for(int j = 0; j < MapSize; j++) {
            cells[i][j] = new CellButton(" ", this, i, j, gameStatus);


        cells[i][j]->setGeometry(
          (cellSize + cellSpace) * j + leftSpace,
          (cellSize + cellSpace) * i + topSpace,
          cellSize, // Ширина кнопки
          cellSize  // Высота кнопки
        );

        cells[i][j]->setStyleSheet("QPushButton { background-color: #2b995b;}");
        cells[i][j]->setVisible(true);

        connect(cells[i][j], SIGNAL(clicked()),
                cells[i][j], SLOT(slotCellClicked()));

        connect(cells[i][j], SIGNAL(clicked()),
                this, SLOT(updateWindow()));
      }
}




void gamewindow::on_toolButton_2_clicked()
{
    newGame();
}


void gamewindow::on_toolButton_clicked()
{
    this->hide();
    emit firstWindow();
}

