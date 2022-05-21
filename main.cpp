#include "tir.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tir w;
    w.show();
    return a.exec();
}
