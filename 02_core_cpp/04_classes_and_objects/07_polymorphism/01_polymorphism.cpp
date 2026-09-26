#include <iostream>
using namespace std;

class Animal
{
public:
    //虚函数
    virtual void speak()
    {
        cout<<"动物在说话"<<endl;
    }
};

class Cat:public Animal
{
    void speak()
    {
        cout<<"猫在说话"<<endl;
    }
};

class Dog:public Animal
{
    virtual void speak() 
    {
        cout<<"狗在说话"<<endl;
    }
};

//动态多态满足条件
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用 执行子类对象

//函数地址是早绑定，在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);

}

int main()
{
    test01();

    return 0;
}