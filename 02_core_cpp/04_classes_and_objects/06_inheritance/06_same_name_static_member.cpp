#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Base-static func" << endl;
    }
};
int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Son-static func" << endl;
    }
};
int Son::m_A = 200;

void test01()
{
    // 通过对象访问
    Son s;
    cout << s.m_A << endl;
    cout << s.Base::m_A << endl;

    // 通过类名访问
    cout << Son::m_A << endl;

    // 第一个::代表通过类名方式访问，第二个::代表访问父类作用域下
    cout << Son::Base::m_A << endl;
}

void test02()
{
    // 通过对象访问
    Son s;
    s.func();
    s.Base::func();

    // 通过类名访问
    Son::func();
    Son::Base::func();
}

int main()
{
    test01();
    cout << "----------" << endl;
    test02();

    return 0;
}