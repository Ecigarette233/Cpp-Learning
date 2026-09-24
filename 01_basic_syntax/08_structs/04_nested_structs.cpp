#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

struct Teacher{
    int id;
    string name;
    int age;
    struct Student stu;
};

int main()
{
    Teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu = {"小王",18,98};

    return 0;
}