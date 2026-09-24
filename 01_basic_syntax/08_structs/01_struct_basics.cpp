#include <iostream>
using namespace std;
#include <string>

struct Student{
    string name;
    int age;
    int score;
}s3;

int main()
{
    Student s1;
    s1.name = "方大炮";
    s1.age = 88;
    s1.score = 100;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.score<<endl;

    Student s2 = {"方浩铭",18,114};
    cout<<s2.name<<endl;
    cout<<s2.age<<endl;
    cout<<s2.score<<endl;

    return 0;
}