#include <iostream>
using namespace std;
#include <string>

class Phone
{
public:
    Phone(string pName)
    {
        m_pName = pName;
        cout<<"Phone的构造函数调用"<<endl;
    }

    string m_pName;
};

class Person
{
public:
    //相当于Phone m_Phone = pName;
    Person(string name,string pName):m_Name(name),m_Phone(pName)
    {
        cout<<"Person构造函数调用"<<endl;
    }

    Phone m_Phone;
    string m_Name;

};

void test01()
{
    Person p("张三","iphoneX");
    cout<<p.m_Name<<"拿着"<<endl;
    cout<<p.m_Phone.m_pName<<endl;

}

int main()
{
    test01();

    return 0;
}