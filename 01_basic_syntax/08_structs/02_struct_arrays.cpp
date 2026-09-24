#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

int main()
{
    struct Student arr[3] = 
    {
        {"zhangsan",18,100},
        {"lisi",28,99},
        {"wangwu",19,89}
    };
    
    arr[2].name = "zhaoliu";

    for(int i = 0;i<3;i++)
    {
        cout<<arr[i].name<<endl;
        cout<<arr[i].age<<endl;
        cout<<arr[i].score<<endl;
    }


    return 0;
}