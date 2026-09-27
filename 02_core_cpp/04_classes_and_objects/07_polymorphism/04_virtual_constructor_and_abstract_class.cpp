#include <iostream>
using namespace std;

class Base
{
public:
    virtual void func() = 0;
};

class Son : public Base
{
public:
    virtual void func()
    {
        cout << "func函数的调用" << endl;
    }
};

void test01()
{
    // Base b;   //抽象类无法实例化对象
    Base *b = new Son;
    b->func();
}

int main()
{
    test01();
    return 0;
}