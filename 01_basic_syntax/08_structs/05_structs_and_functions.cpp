#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

void printStudent01(struct Student s)
{
    s.age = 100;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.score<<endl;
}

void printStudent02(struct Student* s)
{
    s->age = 99;
    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->score<<endl;
}

int main()
{
    struct Student s;
    s.name = "zhangsan";
    s.age = 19;
    s.score = 98;

    printStudent01(s);
    cout<<s.age<<endl;

    cout<<"----------"<<endl;

    printStudent02(&s);
    cout<<s.age<<endl;

    return 0;
}