#include <iostream>
using namespace std;

//设计圆形类，和一个点类，计算点和圆关系

//设计点类
class Point
{
public:
    //设置X
    void setX(int X)
    {
        m_X = X;
    }
    //获取X
    int getX()
    {
        return m_X;
    }
    //设置Y
    void setY(int Y)
    {
        m_Y = Y;
    }
    //获取Y
    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y; 
};


//设计圆类
class Circle
{
public:
    //设置半径
    void setR(int R)
    {
        m_R = R;
    }
    
    //获取半径
    int getR()
    {
        return m_R;
    }

    //设置圆心
    void setCenter(Point center)
    {
        m_center = center;
    }

    //获取圆心
    Point getCenter()
    {
        return m_center;
    }
    
private:
    int m_R;
    Point m_center;
};

//判断点和圆关系
void isInCircle(Circle &c1,Point &p1)
{
    int dx = p1.getX()-c1.getCenter().getX();
    int dy = p1.getY()-c1.getCenter().getY();

    if(dx*dx + dy*dy == c1.getR()*c1.getR())
    {
        cout<<"点在圆上"<<endl;
    }else if(dx*dx + dy*dy < c1.getR()*c1.getR())
    {
        cout<<"点在圆内"<<endl;
    }else
    {
        cout<<"点在圆外"<<endl;
    }
}

int main()
{
    Point p1;
    p1.setX(10);
    p1.setY(10);

    Circle c1;
    Point center;
    center.setX(10);
    center.setY(0);
    c1.setCenter(center);
    c1.setR(11);

    isInCircle(c1,p1);
    return 0;
}
