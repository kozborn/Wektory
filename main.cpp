#include "wektorygui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WektoryGUI w;
    w.show();
    
    return a.exec();
}
