#include <iostream>
using namespace std;

// 成员变量 和 成员函数是分开存储的
class Person
{
    int m_A = 10;//非静态成员变量
    static int m_B;//不属于类的对象上

    void func(){}//非静态成员函数
    static void func2(){}//静态成员函数
};

int Person::m_B = 10;

void test01()
{
    Person p;

    cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
    test01();

    return 0;
}