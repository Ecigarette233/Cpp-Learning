#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout<<"无参构造函数的调用"<<endl;
    }

    Person(int a)
    {
        age = a;
        cout<<"有参构造函数的调用"<<endl;
    }

    Person(const Person &p)
    {
        age = p.age;
        cout<<"拷贝构造函数的调用"<<endl;
    }

    ~Person()
    {
        cout<<"析构函数的调用"<<endl;
    }

    int age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    //调用有参构造函数
    Person p1(20);
    //调用拷贝构造函数
    Person p2(p1);
    
    cout<<"P2的年龄为："<<p2.age<<endl;

    //调用两个析构函数

}

//2.值传递的方式传给函数参数传值
void doWork(Person p)
{
    //doWork函数创建了一个Person类的副本，来接收p，调用了拷贝构造函数
}

void test02()
{
    //先调用无参构造函数
    Person p;

    doWork(p);
}

//3.值方式返回局部对象
Person doWork2()
{
    //调用无参构造函数
    Person p1;

    //返回值，调用了拷贝构造
    return p1;
}

void test03()
{
    //用返回值初始化p，调用了拷贝构造
    Person p = doWork2();
}


int main()
{
    test01();

    cout<<"---------"<<endl;

    test02();

    cout<<"---------"<<endl;

    test03();

    return 0;
}