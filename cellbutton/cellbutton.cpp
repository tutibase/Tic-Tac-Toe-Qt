#include "cellbutton.h"

// Параметры:
//  text - текст на кнопке
//  parent - окно, в котором кнопка будет расположена
//    для корретного удаления кнопки
//  row - строка, col - столбец на поле
//  game - ссылка на игру
CellButton::CellButton(const char* text,
                       QWidget* parent,
                       int row, int col,
                       game& gameStatus) :
    QPushButton(text, parent),
    row(row), col(col), gameStatus(&gameStatus) {
    // Если на кнопке написан крестик или нолик,
    // то нажимать на неё нельзя
//    if(text[0] == X || text[0] == O)
//        setEnabled(false);


}

// При нажатии на клетку
void CellButton::slotCellClicked() {
    // Делаем ход => получаем результат
    // для данной клетки
    setText( gameStatus->makeMove(row, col) );
    setStyleSheet("QPushButton {background-color:#7fdba7; color: #000000;}");

    QFont font;
    font.setBold(true);
    font.setPointSize(23);
    this->setFont(font);
    // Больше не можем нажимать на эту клетку поля
    setEnabled(false);
}
