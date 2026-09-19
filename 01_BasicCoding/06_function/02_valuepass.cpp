#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a = 20;
    int b = 10;

    swap(a, b);
    cout << a << "," << b << endl;

    return 0;
}