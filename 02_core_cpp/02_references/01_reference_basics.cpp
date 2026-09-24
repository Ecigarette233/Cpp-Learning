#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;

    cout<<a<<endl;
    cout<<b<<endl;

    //int &b;错误
    //b = c；错误
    b = 20;
    cout<<a<<endl;


    return 0;
}