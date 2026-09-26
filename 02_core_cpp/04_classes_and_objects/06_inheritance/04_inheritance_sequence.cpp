#include <iostream>
using namespace std;

// 继承中的构造和析构顺序
class Base
{
public:
    Base()
    {
        cout << "Base构造函数" << endl;
    }

    ~Base()
    {
        cout << "Base析构函数" << endl;
    }
};

class Son : public Base
{
public:
    Son()
    {
        cout << "Son构造函数" << endl;
    }

    ~Son()
    {
        cout << "Son析构函数" << endl;
    }
};

void test01()
{
    Son s1;
}

int main()
{
    test01();
    return 0;
}