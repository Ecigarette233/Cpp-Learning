#include <iostream>
using namespace std;

class Myinteger
{
    friend ostream &operator<<(ostream &cout, Myinteger myinteger);

public:
    Myinteger()
    {
        m_Num = 0;
    }

    // 重载前置++运算符
    Myinteger &operator++()
    {
        //先进行++运算
        m_Num++;

        //再将自身返回
        return *this;
    }

    // 重载后置++运算符
    //加个占位参数int就可以让编译器知道是后置递增
    Myinteger operator++(int)
    {
        //先记录当时值
        Myinteger temp = *this;

        //再递增
        m_Num++;

        //返回记录的值
        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &cout, Myinteger myinteger)
{
    cout << "myinteger = " << myinteger.m_Num;
    return cout;
}

void test01()
{
    Myinteger myinteger;

    cout << myinteger << endl;

    cout << ++(++myinteger) << endl;

    cout << myinteger << endl;
}

void test02()
{
    Myinteger myinteger;
    cout << myinteger << endl;

    cout << myinteger++ << endl;

    cout << myinteger << endl;

}

int main()
{
    test01();
    cout<<"-----------"<<endl;
    test02();
    return 0;
}