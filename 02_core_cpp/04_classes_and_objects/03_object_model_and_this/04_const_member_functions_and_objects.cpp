#include <iostream>
using namespace std;

class Person
{
public:
    // this指针的本质是指针常量，指针的指向不可以修改
    // const Person* const this;
    // 在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
    void showPerson() const
    {
        this->m_B = 100;
        // this->m_Age = 100;
    }

    void func()
    {
    }

    int m_Age;
    mutable int m_B;
    // 特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test01()
{
    Person p;
    p.showPerson();
    cout << p.m_B << endl;
}

// 常对象
void test02()
{
    const Person p{};
    // p.m_Age = 10;
    p.m_B = 20;

    // 常对象只能调用常函数
    p.showPerson();
    //p.func(); //常对象 不可以调用普通成员函数
}

int main()
{
    test01();
    test02();

    return 0;
}