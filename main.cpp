#include "autoresize.h"
#include <QApplication>

int main (int argc, char *argv[]){
    QApplication app(argc, argv);
    autoresize window;
    window.show();
    return app.exec();
}


 