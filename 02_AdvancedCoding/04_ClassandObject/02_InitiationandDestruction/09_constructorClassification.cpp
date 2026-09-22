#include <iostream>
using namespace std;

class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "这是无参构造函数" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "这是有参构造函数" << endl;
    }

    Person(const Person &p)
    {
        age = p.age;
        cout << "这是拷贝构造函数" << endl;
    }

    // 析构函数
    ~Person()
    {
        cout << "这是析构函数" << endl;
    }

    int age;
};

// 调用
void test01()
{
    // 1.括号法
    //  Person p1;    //默认构造函数调用
    //  Person p2(10);//有参构造函数
    //  Person p3(p2);//拷贝构造

    // 注意事项1
    // 调用默认构造函数时，不要加()
    //  cout<<"p2的年龄:"<<p2.age<<endl;
    //  cout<<"p3的年龄:"<<p3.age<<endl;

    // 2.显示法
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);

    Person(10); // 匿名对象
    cout << "aaaa" << endl;

    //注意事项2
    //不要利用拷贝构造函数 初始化匿名对象

    // 3.隐式转换法
    Person p4 = 10;
    Person p4 = p3;
}

int main()
{
    test01();
    return 0;
}