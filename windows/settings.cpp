#include "settings.h"
#include "ui_settings.h"
#include "map_size.h"
#include "game.h"

settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings){
    ui->setupUi(this);

    // Записываем текущий размер поля
    ui->spinBox->setValue(MapSize);
}

settings::~settings()
{
    delete ui;
}

void settings::on_buttonBox_accepted() {
    // Берём новое значение размера поля
    // из интерфейса и записываем как MapSize
    MapSize = ui->spinBox->value();
    resizeGame();
    close();
}


void settings::on_buttonBox_rejected()
{
    close();
}
