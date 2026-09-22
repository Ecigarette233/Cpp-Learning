#include <iostream>
using namespace std;

class Person
{
public:
    static void func()
    {
        m_A = 200;//静态成员函数可以访问静态成员变量

        //报错
        //m_B = 200;
        cout << "this is static function" << endl;
    }

    static int m_A;
    int m_B;

private:
    static void func2()
    {
        cout<<"this is static function2"<<endl;
    }
};

int Person::m_A = 0;

void test01()
{
    //通过对象访问
    Person p1;
    p1.func();

    //通过类名访问
    Person::func();

    //报错：
    //func2();
}

int main()
{
    test01();

    return 0;
}