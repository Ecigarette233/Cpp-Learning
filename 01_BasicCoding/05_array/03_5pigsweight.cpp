#include <iostream>
using namespace std;

int main()
{
    int pigsweight[] = {300,350,200,400,250};
    int length = sizeof(pigsweight)/sizeof(pigsweight[0]);

    int max = 0;
    for(int i = 1;i<length;i++)
    {
        if(pigsweight[i]>pigsweight[i-1])
        {
            max = pigsweight[i];
        }
    }
    cout<<max<<endl;
    return 0;
}