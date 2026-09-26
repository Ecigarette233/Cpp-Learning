#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Animal2
{
public:
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
    void speak()
    {
        cout << "猫在说话" << endl;
    }
};

class Dog : public Animal
{
    void speak()
    {
        cout << "狗在说话" << endl;
    }
};

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

void test02()
{
    cout << sizeof(Animal) << endl;     //1
    cout << sizeof(Animal2) << endl;    //8

    //8个字节其实是一个指针
}

int main()
{
    test02();

    return 0;
}