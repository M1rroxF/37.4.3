#include <iostream>
#include <QApplication>
#include <QObject>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <QSlider>
#include <QPushButton>
#include <QVBoxLayout>

using namespace std;

// Введите свои пути для зелёного, жёлтого, красного цвета и расположения Qt

class ImageButton : public QPushButton
{
Q_OBJECT
    QPixmap green; // ...33
    QPixmap yellow; // 33...66
    QPixmap red; // 66...
    QPixmap mCurrentPixmap;
    bool is_down = false;
public:
    ImageButton() = default;
    ImageButton(QWidget *parent);
    void paintEvent(QPaintEvent *e) override;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
public slots:
    void setGreen();
    void setYellow();
    void setRed();
};

ImageButton::ImageButton(QWidget *parent) {
    setParent(parent);
    setToolTip("Color");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mCurrentPixmap = green;
    yellow = QPixmap(R"(D:\Programming\c++\Hello\ColorYellow.png)");
    green = QPixmap(R"(D:\Programming\c++\Hello\ColorGreen.png)");
    red = QPixmap(R"(D:\Programming\c++\Hello\ColorRed.png)");
    setGeometry(mCurrentPixmap.rect());
}
void ImageButton::paintEvent(QPaintEvent *e) {
    QPainter painter(this);
    painter.drawPixmap(e->rect(), mCurrentPixmap);
}
QSize ImageButton::sizeHint() const {
    return {250, 200};
}
QSize ImageButton::minimumSizeHint() const {
    return sizeHint();
}
void ImageButton::setGreen() {
    mCurrentPixmap = green;
    update();
}
void ImageButton::setYellow() {
    mCurrentPixmap = yellow;
    update();
}
void ImageButton::setRed() {
    mCurrentPixmap = red;
    update();
}


int main(int argc, char **argv) {
    QApplication app(argc, argv);

    auto *window = new QWidget();
    auto *circle = new ImageButton(window);
    auto *slider = new QSlider(Qt::Horizontal, window);
    slider->setMinimum(1);
    slider->setMaximum(100);

    //
    window->setFixedSize(250, 200);
    circle->resize(190, 180);
    slider->resize(10, 180);

    //
    auto *layout = new QVBoxLayout(window);
    layout->addWidget(circle);
    layout->addWidget(slider);

    //
    QObject::connect(slider, &QSlider::valueChanged, [slider, circle](int value){
        if (value<33) circle->setGreen();
        else if (value<66) circle->setYellow();
        else circle->setRed();
    });

    window->show();
    return QApplication::exec();
}

#include <main.moc>
