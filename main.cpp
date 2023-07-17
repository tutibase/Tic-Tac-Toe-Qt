#include "windows/mainwindow.h"

#include <QApplication>
int MapSize = 5;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Tic-tac-toe");
    w.setFixedSize(290, 340);
    w.setWindowIcon(QIcon("icon.png"));
    w.show();
    return a.exec();
}
