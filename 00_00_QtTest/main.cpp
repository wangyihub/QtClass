#include "mywidget.h"

#include <QApplication> //应用程序类

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    return a.exec();
}
