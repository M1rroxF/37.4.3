#include <iostream>
#include <QApplication>
#include <QObject>
#include <QPushButton>
#include <QVBoxLayout>
#include <./ui_controller.h>
#include "ControllerMainWindow.h"
#include <thread>

using namespace std;

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    //
    ControllerMainWindow window(nullptr);
    Ui::MainWindow controller;

    //
    controller.setupUi(&window);
    window.lineEdit = controller.lineEdit_2;
    window.show();

    //
    return QApplication::exec();
}

#include <main.moc>
