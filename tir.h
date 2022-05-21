#ifndef TIR_H
#define TIR_H

#include <QWidget>
#include <QtWidgets>
#include <QtMultimedia/qmediaplayer.h>
#include <QAbstractButton>
QT_BEGIN_NAMESPACE

namespace Ui { class tir; }
QT_END_NAMESPACE

class Target{
public:
    Target(QPoint cursorPosition, QPainter*);
    Target();
    void operator ()(QPainter* ptr, QPoint cursorPosition);
    void paint(QPainter* ptr, QPoint cursorPosition);
public:
    QVector<QPointF> shootArr;
    QPoint targetPosition;

};

class tir : public QWidget
{
    Q_OBJECT

public:
    tir(QWidget *parent = nullptr);
    ~tir();
private:
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void paintEvent(QPaintEvent *event);
private:
    bool isleftMouseClicked=0;
    QMediaPlayer  * mPlayer;
    QCursor *Cursor;
    QVector<QPointF> shotArr;
    QImage imgShot;
    QPixmap imgCursor;
    int isTargetPainted = 0;
    QImage firstScreen;
    Target* tgr;
    Ui::tir *ui;
};


#endif // TIR_H
