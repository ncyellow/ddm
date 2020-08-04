#include "ddmwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DdmWidget w;
    w.show();

    return a.exec();
}
