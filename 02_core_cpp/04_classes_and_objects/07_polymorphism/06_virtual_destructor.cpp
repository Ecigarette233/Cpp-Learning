#include <iostream>
using namespace std;

// 虚析构和纯虚析构

class Animal
{
public:
    virtual void speak() = 0;

    Animal()
    {
        cout << "Animal构造函数调用" << endl;
    }

    //利用虚析构可以解决 父类指针释放子类对象时不干净的问题
    // virtual ~Animal()
    // {
    //     cout << "Animal析构函数调用" << endl;
    // }

    //纯虚析构 需要声明也需要有实现
    //有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;
};

//纯虚析构
Animal::~Animal()
{
    cout<<"Animal纯虚析构函数调用"<<endl;
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat构造函数调用" << endl;
        m_Name = new string(name);
    }

    void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }

    ~Cat()
    {
        cout << "Cat析构函数调用" << endl;
    }
    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->speak();

    // 父类指针在析构的时候，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存的泄露情况
    delete animal;
}

int main()
{
    test01();
    return 0;
}