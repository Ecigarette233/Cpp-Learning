//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带的学生数据。设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

#include <iostream>
#include <ctime>
using namespace std;

struct Student{
    string name;
    int score;
};

struct Teacher{
    string name;
    struct Student arrStudent[5];
};

 //给老师和学生赋值的函数
 void allocateSpace(struct Teacher arrTeacher[],int len)
 {
    string nameSeed = "ABCDE";

    for(int i = 0;i<len;i++)
    {
        arrTeacher[i].name = "Teacher_";
        arrTeacher[i].name +=nameSeed[i];

        for(int j = 0;j<5;j++)
        {
            arrTeacher[i].arrStudent[j].name = "Student_";
             arrTeacher[i].arrStudent[j].name += nameSeed[j];

             int random = rand()%61+40;
             arrTeacher[i].arrStudent[j].score = random;
        }
    }
 }

void printInfo(struct Teacher arrTeacher[],int len)
{
    for(int i = 0;i<len;i++)
    {
        cout<<"老师姓名："<<arrTeacher[i].name<<endl;

        for(int j = 0;j<5;j++)
        {
            cout
            <<"\t学生姓名："<<arrTeacher[i].arrStudent[j].name
            <<"考试分数："
            <<arrTeacher[i].arrStudent[j].score<<endl;
        }
    }
}

int main()
{
    srand(time(NULL));
    //1.创建三名老师的数组
    struct Teacher arrTeacher[3];
    int len = sizeof(arrTeacher)/sizeof(arrTeacher[0]);

    //2.通过函数给3名老师信息赋值
    //并给老师带的学生信息赋值
    allocateSpace(arrTeacher,len);

    //3.打印所有老师及所带学生信息
    printInfo(arrTeacher,len);

    return 0;
}