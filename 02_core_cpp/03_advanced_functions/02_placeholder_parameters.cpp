#include <iostream>
using namespace std;

void func(int a,int)
{
    cout<<"this is func"<<endl;
}

int main()
{
    func(10,10);//占位参数必须填补

    return 0;
}