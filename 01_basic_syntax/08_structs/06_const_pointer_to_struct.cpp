#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

void printStudent01(const Student *s)
{
    //s->age = 10;
    //报错，防止误操作
    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->score<<endl;
}

int main()
{
    struct Student s = {"zhangsan",15,70};
    printStudent01(&s);

    return 0;
}