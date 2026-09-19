#include <iostream>
using namespace std;

int func1(int a,int b=20,int c=30)
{

    return a+b+c;
}

//如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
// int func2(int a = 20,int b,int c)
// {
    
//     return a+b+c;
// }

int func2(int a = 10,int b = 10);
int func2(int a,int b)
{
    return a+b;
}

int main()
{
    cout<<func1(20,20)<<endl;

    cout<<func2(100)<<endl;

    return 0;
}