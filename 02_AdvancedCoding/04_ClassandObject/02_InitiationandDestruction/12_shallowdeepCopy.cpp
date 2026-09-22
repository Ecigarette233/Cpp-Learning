#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout<<"无参构造函数"<<endl;
    }
    Person(int a,int b)
    {
        age = a;
        height = new int(b);
        cout<<"有参构造函数"<<endl;
    }

    Person(const Person &p)
    {
        cout<<"Person拷贝函数调用"<<endl;
        age = p.age;

        height = new int(*p.height);
    }

    ~Person()
    {
        //将堆区开辟数据做释放操作
        if(height!=NULL)
        {
            delete height;
            height = NULL;
        }
        cout<<"析构函数"<<endl;
    }

    int age;
    int *height;

};

void test01()
{
    Person p1(18,160);
    cout<<"年龄为："<<p1.age<<endl;
    cout<<"身高为："<<*(p1.height)<<endl;

    //编译器提供了拷贝构造函数，进行的是浅拷贝
    Person p2(p1);
    cout<<"年龄为："<<p2.age<<endl;
    cout<<"身高为："<<*(p2.height)<<endl;
}

int main()
{
    test01();
    return 0;
}