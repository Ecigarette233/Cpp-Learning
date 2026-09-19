#include <iostream>
using namespace std;

void func()
{
    cout << "func的调用..." << endl;
}

void func(int a)
{
    cout << "func的调用!!!" << endl;
}

void func(double a)
{
    cout << "func的调用???" << endl;
}

void func(double a,int b)
{
    cout << "func的调用666" << endl;
}

void func(int b,double a)
{
    cout << "func的调用888" << endl;
}


int main()
{

    func();
    func(2);
    func(10);
    func(2.3333333333);

    func(2.33,10);
    func(10,2.33);

    return 0;
}