#include <iostream>
using namespace std;

class Person
{
public:
    void showClassName()
    {
        cout << "this is person name" << endl;
    }

    void showPersonAge()
    {
        if(this == NULL)
        {
            return;
        }
        
        cout << "this is person age:" << m_age << endl;
    }

    int m_age;
};

void test01()
{
    Person *p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main()
{
    test01();

    return 0;
}