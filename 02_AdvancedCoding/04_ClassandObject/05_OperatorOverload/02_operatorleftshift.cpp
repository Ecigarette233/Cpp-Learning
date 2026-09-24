#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout,Person p);
public:
    Person()
    {
        m_A = 10;
        m_B = 20;
    }

private:
    int m_A;
    int m_B;

};

//只能利用全局函数重载左移运算符
ostream &operator<<(ostream &cout,Person p)
{
    cout<<"m_A = "<<p.m_A<<endl;
    cout<<"m_B = "<<p.m_B<<endl;

    return cout;
}

void test01()
{
    Person p;

    cout<<p<<endl;
}

int main()
{
    test01();
    return 0;
}