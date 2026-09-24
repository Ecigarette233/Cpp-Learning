#include <iostream>
using namespace std;
#include <string>

struct Student{
    string name;
    int age;
    int score;
};

int main()
{
    Student s1 = {"张三",18,100};

    Student* p = &s1;

    cout<<p->name<<"\n"
        <<p->age<<"\n"
        <<p->score<<endl;

    return 0;
}