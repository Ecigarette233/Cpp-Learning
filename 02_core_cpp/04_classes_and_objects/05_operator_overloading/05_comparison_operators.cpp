#include <iostream>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }

    bool operator==(Person &p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator!=(Person &p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    string m_name;
    int m_age;
};

void test01()
{
    Person p1("Tom", 18);
    Person p2("Jerry", 18);

    if (p1 == p2)
    {
        cout << "p1和p2是相等的" << endl;
    }
    else
    {
        cout << "p1和p2是不相等的" << endl;
    }

    if (p1 != p2)
    {
        cout << "p1和p2是不相等的" << endl;
    }
    else
    {
        cout << "p1和p2是相等的" << endl;
    }
}

int main()
{
    test01();
    return 0;
}