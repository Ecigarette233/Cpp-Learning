#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //生成1~100随机数
    srand(time(0));
    int number = rand()%100+1;

    //玩家猜测
    int value = 0;
    cin>>value;

    while(value!=number)
    {
        if(value>number)
        {
            cout<<"bigger"<<endl;
        }
        else if(value<number)
        {
            cout<<"smaller"<<endl;
        }
        cin>>value;
    }
    cout<<"猜对啦，真棒"<<endl;

    return 0;
}