#include <iostream>
using namespace std;

class Student
{
public:
    string name;

protected:
    string car;

private:
    int password;

public:
    void func()
    {
        name = "zhangsan";
        car = "Posche";
        password = 123456;

    }
};

int main()
{
    Student s1;

    s1.name = "李四";
    //报错
    //s1.car = "拖拉机";
    //cout<<s1.password<<endl;
    return 0;
}