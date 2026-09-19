#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int* p = arr;//arr就是首地址
    cout<<*p<<endl;
    cout<<*p+1<<endl;
    
    int* p1 = &arr[9];

    for(int i = 0;i<10;i++)
    {
        cout<<*p<<endl;
        p++;
    }

    return 0;
}