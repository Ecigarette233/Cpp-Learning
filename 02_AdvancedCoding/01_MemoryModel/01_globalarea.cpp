#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 20;

const int c_g_a = 10;
const int c_g_b = 20;

int main()
{
    int a = 10;
    int b = 20;

    cout << "局部变量a的地址为：" << &a << endl;
    cout << "局部变量b的地址为：" << &b << endl;

    cout << "全局变量a的地址为：" << &g_a << endl;
    cout << "全局变量b的地址为：" << &g_b << endl;

    static int s_a = 10;
    static int s_b = 20;

    cout << "静态变量s_a的地址为：" << &s_a << endl;
    cout << "静态变量s_b的地址为：" << &s_b << endl;

    // 常量
    // 字符串常量

    cout << "字符串常量的地址：" << &"Helloworld" << endl;

    // const修饰的全局变量
    // const修饰的局部变量
    cout << "全局常量c_g_a的地址为：" << &c_g_a << endl;
    cout << "全局常量c_g_b的地址为：" << &c_g_b << endl;

    const int c_l_a = 10;
    const int c_l_b = 20;

    cout << "局部常量c_l_a的地址为：" << &c_l_a << endl;
    cout << "局部常量c_l_b的地址为：" << &c_l_b << endl;

    return 0;
}