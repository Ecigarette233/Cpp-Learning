#include <iostream>
using namespace std;

int * func()
{
    //利用new关键字，将数据开辟到堆区
    int * p = new int(10);
    return p;

}

int main()
{
    int* p = func();
    cout<<*p<<endl;
    cout<<*p<<endl;

    return 0;
}