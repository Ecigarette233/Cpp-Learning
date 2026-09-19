#include <iostream>
using namespace std;

int main()
{
    int arr1[5];

    for(int i = 0;i<5;i++)
    {
        arr1[i] = 10*(i+1);
    }

    cout<<arr1[0]<<endl;

    int arr2[5] = {10,20,30};

    for(int i = 0;i<5;i++)
    {
        cout<<arr2[i]<<endl;
    }

    int arr3[] = {90.,80,70};
    
    return 0;
}