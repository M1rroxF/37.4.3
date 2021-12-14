#ifndef CALCULATOR_h
#define CALCULATOR_h

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <Qstring>

using namespace std;

class CalculatorMainWindow: public QMainWindow {
    Q_OBJECT

public:
    QLineEdit *lineEdit = nullptr;
    CalculatorMainWindow(QWidget *parent): QMainWindow(parent) {}

public slots:
    void add0() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "0"); };
    void add1() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "1"); };
    void add2() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "2"); };
    void add3() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "3"); };
    void add4() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "4"); };
    void add5() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "5"); };
    void add6() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "6"); };
    void add7() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "7"); };
    void add8() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "8"); };
    void add9() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "9"); };
    void clear() { lineEdit->setText(""); }
    void multiplication() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "*"); };
    void minus() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "-"); };
    void plus() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "+"); };
    void division() { if (lineEdit->text() == "Error!") lineEdit->setText(""); lineEdit->setText(lineEdit->text() + "%"); };;
    void result() {
        string text = qPrintable(lineEdit->text());
        string strNum_1, strNum_2;
        char move = '?';

        //
        for (char i : text) {
            if (i=='%' || i=='*' || i=='+' || i=='-') {
                if (move == '?') {
                    move = i;
                }
                else {
                    lineEdit->setText("Error!");
                    return;
                }
            }
            else {
                (move == '?' ? strNum_1 += i : strNum_2 += i);
            }
        }

        //
        int num_1 = stoi(strNum_1);
        int num_2 = stoi(strNum_2);
        if (move == '-') {
            QString num = QString::fromLocal8Bit(to_string(num_1 - num_2).c_str());
            lineEdit->setText(num);
        }
        else if (move == '+') {
            QString num = QString::fromLocal8Bit(to_string(num_1 + num_2).c_str());
            lineEdit->setText(num);
        }
        else if (move == '*') {
            QString num = QString::fromLocal8Bit(to_string(num_1 * num_2).c_str());
            lineEdit->setText(num);
        }
        else if (move == '%') {
            if (num_2 == 0) {
                lineEdit->setText("Error!");
                return;
            }
            QString num = QString::fromLocal8Bit(to_string(num_1 / num_2).c_str());
            lineEdit->setText(num);
        }
    }
};


#endif // CALCULATOR_h
