#include <iostream>
using namespace std;
#include <string>

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student
{
    //访问权限
public:
    //属性
    string name;
    string number;

    //行为
    void createStudent()
    {
        cin>>name;
        cin>>number;
    }

    void showStudent()
    {
        cout<<"学生姓名为："<<name<<endl;
        cout<<"学生学号为："<<number<<endl;
    }
};

int main()
{
    Student s1;
    s1.createStudent();
    s1.showStudent();
    
    return 0;
}