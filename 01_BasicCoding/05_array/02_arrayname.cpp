#include <iostream>
using namespace std;

int main()
{
    // 1.统计整个数组占用内存大小
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
    cout << "每个元素占用空间：" << sizeof(arr[0]) << endl;
    cout << "元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

    // 2.查看首地址
    cout<<arr << endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    return 0;
}