#include <iostream>
using namespace std;

class Person
{
public:
    // Person()
    // {
    //     cout << "Person的无参构造" << endl;
    // }
    Person(int a)
    {
        age = a;
        cout << "Person的有参构造" << endl;
    }
    // Person(const Person &p)
    // {
    //     age = p.age;
    //     cout << "Person的拷贝构造" << endl;
    // }

    ~Person()
    {
        cout << "Person的析构函数" << endl;
    }

    int age;
};

void test01()
{
    Person p1(10);
    Person p2(p1);

    cout << "年龄为：" << p2.age << endl;
}

//会提示不存在默认构造函数
// void test02()
// {
//     Person p1;
// }

int main()
{
    test01();

    //test02();

    return 0;
}