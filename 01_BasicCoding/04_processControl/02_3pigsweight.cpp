#include <iostream>
using namespace std;

int main()
{
    int pig1 = 0;
    int pig2 = 0;
    int pig3 = 0;

    cout<<"请输入小猪A的重量"<<endl;
    cin>>pig1;

    cout<<"请输入小猪B的重量"<<endl;
    cin>>pig2;

    cout<<"请输入小猪C的重量"<<endl;
    cin>>pig3;

    cout<<"小猪A体重为："<<pig1<<endl;
    cout<<"小猪B体重为："<<pig2<<endl;
    cout<<"小猪C体重为："<<pig3<<endl;

    if(pig1>pig2)
    {
        if(pig1>pig3)
        {
            cout<<"小猪A最重"<<endl;
        }
        else
        {
            cout<<"小猪C最重"<<endl;
        }
    }
    else
    {
        if(pig2>pig3)
        {
            cout<<"小猪B最重"<<endl;
        }
        else
        {
            cout<<"小猪C最重"<<endl;
        }
    }

    return 0;
}