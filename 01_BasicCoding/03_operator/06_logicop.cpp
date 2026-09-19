#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << !a << endl;
    cout << !!a << endl;

    a = 0;
    int b = 10;

    cout<<(a&&b)<<endl;

    cout<<(a||b)<<endl;
    
    return 0;
}