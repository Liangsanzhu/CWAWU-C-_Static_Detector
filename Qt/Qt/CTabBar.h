#ifndef CTABBAR_H
#define CTABBAR_H
#include <QTabBar>
#include <QtGui>

class CTabBar :public QTabBar
{
    Q_OBJECT
public:
    CTabBar(QWidget* =0);
    virtual ~CTabBar(){};
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);   //通过两个事件模拟出tab被拖动的动作
private:
    bool pressFlag;
signals:
    void sig_tabDrag(int,QPoint);
};

#endif // CTABBAR_H
