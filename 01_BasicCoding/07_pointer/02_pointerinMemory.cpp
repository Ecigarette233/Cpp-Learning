#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;

    cout<<sizeof(int*)<<endl;
    cout<<sizeof(char*)<<endl;
    cout<<sizeof(float*)<<endl; 
    cout<<sizeof(double*)<<endl;

    return 0;
}