#include <iostream>
using namespace std;

class Base
{
public:
    int a;

    int b;

    int c;

};

class Son1:public Base
{
public:
    int d;
};

int main()
{
    Son1 son1;
    cout<<sizeof(son1)<<endl;
    return 0;
}