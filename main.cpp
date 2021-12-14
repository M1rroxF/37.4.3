#include <iostream>
#include <QApplication>
#include <QObject>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <QSlider>
#include <QPushButton>
#include <QVBoxLayout>
#include "calculatorMainWindow.h"
#include "./ui_calculator.h"

using namespace std;

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    //
    CalculatorMainWindow window(nullptr);

    //
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.lineEdit = calculator.lineEdit;

    //
    window.resize(500, 500);
    window.show();

    //
    return QApplication::exec();
}

#include <main.moc>
