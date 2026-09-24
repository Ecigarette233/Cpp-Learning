#include <iostream>
using namespace std;

int main()
{
    int number = 100;

    do
    {
        int ge = number%10;
        int shi = number/10%10;
        int bai = number/100;
        if(ge*ge*ge+shi*shi*shi+bai*bai*bai == number)
        {
            cout<<number<<endl;
        }
        number++;
    } while (number<1000);
    

    return 0;
}