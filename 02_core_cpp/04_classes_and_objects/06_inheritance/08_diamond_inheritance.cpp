#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
};

// 利用虚继承，解决菱形继承问题
// 加上关键字virtual
// Animal称为 虚基类

class Sheep : virtual public Animal
{
};

class Camel : virtual public Animal
{
};

class Alpaca : public Sheep, public Camel
{
};

void test01()
{
    Alpaca apc;

    apc.Sheep::age = 18;
    apc.Camel::age = 20;

    // 菱形继承，两个父类拥有相同的数据，需要加以作用域区分
    cout << apc.Sheep::age << endl;
    cout << apc.Camel::age << endl;
    cout<<apc.age<<endl;
}

int main()
{
    test01();

    return 0;
}