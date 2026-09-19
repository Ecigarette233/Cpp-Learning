#include <iostream>
using namespace std;

// 1.不要返回局部变量的引用
//  int& test01()
//  {
//      int a = 10;
//      return a;
//  }

// 2.函数的调用可以作为左值
int &test02()
{
    static int a = 10; // 静态变量，存放在全局区
    return a;
}

int main()
{
    // int& ref = test01();
    // cout<<"ret = "<<ret<<endl;

    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test02() = 1000;

    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    return 0;
}