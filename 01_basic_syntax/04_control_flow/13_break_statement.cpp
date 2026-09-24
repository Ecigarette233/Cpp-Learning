#include <iostream>
using namespace std;

int main()
{
    //1.switch 

    cout<<"请选择副本难度"<<endl;
    cout<<"1.normal"<<endl;
    cout<<"2.difficult"<<endl;
    cout<<"3.nightmare"<<endl;

    int select = 0;
    cin>>select;

    switch(select)
    {
    case 1:
        cout<<"Normal"<<endl;
        break;
    case 2:
        cout<<"Difficult"<<endl;
        break;
    case 3:
        cout<<"Nightmare"<<endl;
        break;
    default:
        break;
    }

    //2.循环语句
    for(int i=0;i<10;i++)
    {
        if(i==5)
        {
            break;
        }
        cout<<i<<endl;
    }

    //3.嵌套循环
    for(int j = 0;j<10;j++)
    {

        for(int i = 0;i<10;i++)
        {
            cout<<"* ";
            if(i==5)
            {
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}