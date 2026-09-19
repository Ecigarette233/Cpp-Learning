#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout<<"请输入一个分数："<<endl;
    cin>>score;

    if(score>=600)
    {
        cout<<"牛逼上600分了"<<endl;
        if(score>=650)
        {
            cout<<"Niubi上650了"<<endl;
        }
    }
    else if(score<0||score>750)
    {
        cout<<"error"<<endl;
    }
    else
    {
        cout<<"加油吧"<<endl;
    }
    
    
    return 0;
}