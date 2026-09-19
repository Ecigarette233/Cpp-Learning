#include <iostream>
using namespace std;

int main()
{
    //电影打分

    int score = 0;

    cout<<"请给电影打分(0~10)"<<endl;
    cin>>score;
    cout<<"您打的分数为："<<score<<endl;

    switch(score)
    {
        case 10:
            cout<<"牛逼电影"<<endl;
        break;

        case 9:
            cout<<"经典电影"<<endl;
        break;

        case 8:
            cout<<"好电影"<<endl;
        break;

        case 7:
            cout<<"合格电影"<<endl;
        break;

        case 6:
            cout<<"及格电影"<<endl;
        break;

        default:
            cout<<"垃圾电影"<<endl;
        break;

    }
    return 0;
}