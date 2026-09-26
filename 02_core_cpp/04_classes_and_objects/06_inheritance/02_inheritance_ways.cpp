#include <iostream>
using namespace std;

class Base1
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Son1 : public Base1
{
public:
    void func()
    {
        a = 10;
        b = 10;
        // c = 10;
    }
};

class Base2
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Son2 : protected Base2
{
public:
    void func()
    {
        a = 10;
        b = 10;
        // c = 10;
    }
};

class Base3
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Son3 : private Base3
{
public:
    void func()
    {
        a = 10;
        b = 10;
        // c = 10;
    }
};

void test01()
{
    Son1 s1;
    s1.a = 100;
    // s1.b = 100;

    // Son2 s2;
    // s2.a = 100;
    // s2.b = 100;

    // Son3 s3;
    // s3.a = 100;
    // s3.b = 100;
}

int main()
{
    test01();
    return 0;
}