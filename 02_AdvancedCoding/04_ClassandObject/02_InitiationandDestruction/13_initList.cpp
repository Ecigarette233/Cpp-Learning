#include <iostream>
using namespace std;

class Person
{
public:
    // 传统初始化
    // Person(int a, int b, int c)
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    //初始化列表
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
    {

    }

    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    Person p1(30,20,10);
    cout<<p1.m_A<<endl;
    cout<<p1.m_B<<endl;
    cout<<p1.m_B<<endl;
}

int main()
{
    test01();
    return 0;
}