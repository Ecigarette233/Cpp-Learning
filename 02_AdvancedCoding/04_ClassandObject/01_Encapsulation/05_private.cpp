#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
    void setName(string name)
    {
        m_name = name;
    }

    string showName()
    {
        return m_name;
    }

    void setIdol(string idol)
    {
        m_idol = idol;
    }

    void setAge(int age)
    {   
        if(age<0||age>150)
        {
            cout<<"年龄"<<age<<"输入有误，请重新输入"<<endl;
            return;
        }
        m_age = age;
    }

    int getAge()
    {
        return m_age;
    }

private:
    string m_name;  //姓名：可读可写

    int m_age = 18;  //年龄：只读;也可以写，检验数据有效性

    string m_idol;  //ido,只写

};

int main()
{
    Person p1;

    p1.setName("张三");

    cout<<"姓名:"<<p1.showName()<<endl;

    cout<<"年龄："<<p1.getAge()<<endl;

    p1.setIdol("蔡徐坤");
    //cout<<"Idol："<<p1.setIdol()<<endl;

    p1.setAge(25);
    cout<<p1.getAge()<<endl;
    return 0;
}