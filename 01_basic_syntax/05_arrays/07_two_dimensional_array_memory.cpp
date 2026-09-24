#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}};
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr[0][0]) << endl;

    cout << "二维数组行数为" << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[0][0] << endl;
    cout << &arr[0][1] << endl;
    cout << &arr[0][2] << endl;
    cout << &arr[1][0] << endl;
    cout << &arr[1][1] << endl;

    return 0;
}