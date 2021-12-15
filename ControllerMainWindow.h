#ifndef HELLO_CONTROLLERMAINWINDOW_H
#define HELLO_CONTROLLERMAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QString>
#include <string>
#include <QTimer>
#include <QString>
#include <QtWidgets/QLineEdit>
#include <iostream>

using namespace std;

#define print(channel, volume) lineEdit->setText(QString::fromLocal8Bit(to_string(channel).c_str()) + "; " + QString::fromLocal8Bit(to_string(volume).c_str()) + "%");

class ControllerMainWindow: public QMainWindow {
    Q_OBJECT
    int channel= 1;
    int volume= 0;
    string selectChannel;

  public:
    QLineEdit *lineEdit = nullptr;
    explicit ControllerMainWindow(QWidget* parent): QMainWindow(parent) {}

  public slots:
    void add0() {if (!selectChannel.empty()) selectChannel+="0"; }
    void add1() { selectChannel+="1"; }
    void add2() { selectChannel+="2"; }
    void add3() { selectChannel+="3"; }
    void add4() { selectChannel+="4"; }
    void add5() { selectChannel+="5"; }
    void add6() { selectChannel+="6"; }
    void add7() { selectChannel+="7"; }
    void add8() { selectChannel+="8"; }
    void add9() { selectChannel+="9"; }
    void louder() {
        if (volume != 100) volume += 10;
        print(channel, volume)
    }
    void quieter() {
        if (volume != 0) volume -= 10;
        print(channel, volume)
    }
    void next() {
        channel += 1;
        print(channel, volume)
    }
    void previous() {
        if (channel == 1) return;
        channel -= 1;
        print(channel, volume)
    }
    void select() {
        channel = stoi(selectChannel);
        selectChannel.clear();
        print(channel, volume)
    }
};

#endif //HELLO_CONTROLLERMAINWINDOW_H
