#include <iostream>
using namespace std;

class C1
{
    int A;

};

struct C2
{
    int A;

};
int main()
{
    C1 c1;
    //c1.A = 100;

    C2 c2;
    c2.A = 100;
    return 0;
}