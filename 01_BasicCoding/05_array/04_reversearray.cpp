#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 5, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    int reverse[length];
    for (int i = 0; i < length; i++)
    {
        reverse[i] = arr[length - i - 1];
    }
    for (int i = 0; i < length; i++)
    {
        cout << reverse[i] << endl;
    }

    return 0;
}