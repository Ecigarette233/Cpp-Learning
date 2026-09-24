#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    ++a;
    cout<<"a = "<<a<<endl;

    int b = 10;
    b++;
    cout<<"b = "<<b<<endl;

    //前置和后置区别：
    //前置递增 先让变量+1 然后进行表达式运算
    int c=10;
    int d=++c*10;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;

    //后置递增 先进行表达式运算 然后变量+1
    int e=10;
    int f=e++*10;
    cout<<"e = "<<e<<endl;
    cout<<"f = "<<f<<endl;
    return 0;
}