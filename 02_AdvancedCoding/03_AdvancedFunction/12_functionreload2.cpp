#include <iostream>
using namespace std;

// 1.引用作为重载条件
void func(int &a)
{
    cout << "func(int &a)的调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a)的调用" << endl;
}

// 2.函数重载碰到函数默认参数
void func2(int a, int b = 10)
{
    cout << "func(int a,int b)的调用" << endl;
}

void func2(int a)
{
    cout << "func(int a)的调用" << endl;
}

int main()
{
    int a = 10;
    func(a);

    func(10);

    //func2(10);报错

    return 0;
}