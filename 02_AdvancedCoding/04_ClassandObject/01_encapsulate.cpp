 #include <iostream>
 using namespace std;
 
const double PI = 3.14;

//设计圆类，求圆的周长
//圆求周长：2*PI*R

//class代表一个类，类后面紧跟着名称
class Circle
{
    //访问权限
    //公共权限
public:

    //属性
    //半径
    int m_r;

    //行为
    //获取圆的周长
    double calculateC()
    {
        return 2*PI*m_r;
    }
};

 int main()
 {
    //通过圆类，创建具体的圆（对象）

    Circle c1;

    c1.m_r = 10;
    
    cout<<"圆的周长为："<<c1.calculateC()<<endl;

    return 0;
 }