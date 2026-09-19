#include <iostream>
using namespace std;

// 交换函数

// 1.值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 2.地址传递
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3.引用传递
void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    mySwap01(a, b);

    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;

    mySwap02(&a, &b);

    cout << "swap02 a = " << a << endl;
    cout << "swap02 b = " << b << endl;
    
    mySwap03(a,b);
    
    cout << "swap03 a = " << a << endl;
    cout << "swap03 b = " << b << endl;

    return 0;
}