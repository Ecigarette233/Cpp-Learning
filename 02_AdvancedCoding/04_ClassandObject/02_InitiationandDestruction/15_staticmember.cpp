#include <iostream>
using namespace std;

class Person
{
public:
    //
    // 3.类内声明，类外初始化
    static int m_A;

    //静态成员变量也有访问权限
private:
    static int m_B;
};

// Person::表示为Person作用域下的成员
int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
    Person p1;
    cout << p1.m_A << endl;

    Person p2;
    p2.m_A = 200;

    cout << p1.m_A << endl;

    Person p3;
    //报错
    //cout<<p3.m_B<<endl;
}


//静态成员变量的两种访问方式
void test02()
{
    Person p;

    cout << p.m_A << endl;

    cout << Person::m_A << endl;
}

int main()
{

    test01();

    cout << "-----------" << endl;

    test02();

    return 0;
}