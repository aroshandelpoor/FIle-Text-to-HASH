#include "md5window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MD5Window w;
    w.show();
    return a.exec();
}
