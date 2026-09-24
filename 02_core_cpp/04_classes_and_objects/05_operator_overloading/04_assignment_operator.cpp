#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        m_Age = new int(age);
    }

    ~Person()
    {
        if(m_Age!=NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }

    //重载=运算符
    Person& operator=(Person &p)
    {
        //应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
        if(m_Age!=NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age);

        return *this;

    }

    int *m_Age;
};

void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);

    p3 = p2 = p1;

    cout << *p1.m_Age << endl;
    cout << *p2.m_Age << endl;
    cout << *p3.m_Age << endl;

}

int main()
{
    test01();
    return 0;
}