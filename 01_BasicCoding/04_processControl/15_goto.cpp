#include <iostream>
using namespace std;

int main()
{
    cout<<"AAA"<<endl;
    goto FLAG;
    cout<<"BBB"<<endl;
FLAG:
    cout<<"CCC"<<endl;
    return 0;
}