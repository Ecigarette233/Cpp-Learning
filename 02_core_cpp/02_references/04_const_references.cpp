#include <iostream>
using namespace std;

void showValue(int &val)
{
    val = 1000;
    cout << "val = " << val << endl;
}

int main()
{

    // int temp = 10;const int& ref = temp;
    const int &ref = 10;
    // ref = 20;//加入const变为只读，不可以修改

    int a = 100;
    showValue(a);

    cout << "a=" << a << endl;

    return 0;
}