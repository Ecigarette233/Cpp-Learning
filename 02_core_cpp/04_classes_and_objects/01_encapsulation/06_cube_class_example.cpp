#include <iostream>
using namespace std;

//立方体类设计
//1、创建立方体类
//2、设计属性
//3、设计行为获取立方体面积和体积
//4、分别利用全局函数和成员函数 判断两个立方体是否相等

class Cube
{
public:
    //设置长
    void setLength(int length)
    {
        m_L = length;
    }
    //获取长
    int getLength()
    {
        return m_L;
    }
    
    //设置宽
    void setWidth(int width)
    {
        m_W = width;
    }
    //获取宽
    int getWidth()
    {
        return m_W;
    }

    //设置高
    void setHeight(int height)
    {
        m_H = height;
    }
    //获取高
    int getHeight()
    {
        return m_H;
    }

    //获取表面积
    int calculateS()
    {
        return 
        2*m_L*m_W
        +2*m_L*m_H
        +2*m_W*m_H;
    }

    //获取立方体体积
    int calculateV()
    {
        return m_L*m_W*m_H;
    }

    //利用成员函数判断两个立方体是否相等
    bool isClassByClass(Cube &c)
    {
        if(m_L == c.getHeight() && m_L == c.getLength() && m_L == c.getWidth())
    {
        return true;
    }
    return false;
    }



private:
    int m_L;
    int m_W;
    int m_H;
};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1,Cube &c2)
{
    if(c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.setHeight(10);
    c1.setLength(10);
    c1.setWidth(10);

    cout<<"表面积为"<<c1.calculateS()<<endl;
    cout<<"体积为"<<c1.calculateV()<<endl;

    Cube c2;
    c2.setHeight(10);
    c2.setLength(10);
    c2.setWidth(11);

    bool ret = isSame(c1,c2);

    if(ret)
    {
        cout<<"相等！"<<endl;
    }
    else
    {
        cout<<"不相等！"<<endl;
    }

    ret = c1.isClassByClass(c2);
    if(ret)
    {
        cout<<"成员函数判断相等"<<endl;
    }
    else
    {
        cout<<"成员函数判断不相等"<<endl;
    }

    return 0;
}