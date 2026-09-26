#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }

    void func()
    {
        cout << "Base-func()调用" << endl;
    }

    void func(int a)
    {
        cout << "Base-func(int a)调用" << endl;
    }

    int m_A;
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son-func()调用" << endl;
    }

    int m_A;
};

// 同名成员属性
void test01()
{
    Son son;
    cout << son.m_A << endl;
    cout << son.Base::m_A << endl;
}

// 同名成员函数
void test02()
{
    Son son;
    son.func();
    son.Base::func(100);
    son.Base::func();
}

int main()
{
    test01();
    cout << "----------" << endl;
    test02();
    return 0;
}