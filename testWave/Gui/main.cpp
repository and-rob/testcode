#include "guitestwavemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guiTestWaveMainWindow w;
    w.show();

    return a.exec();
}
