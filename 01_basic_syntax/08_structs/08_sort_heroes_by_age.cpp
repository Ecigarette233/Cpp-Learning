//设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
#include <iostream>
#include <string>
using namespace std;

struct hero{
    string name;
    int age;
    string gender;
};

void bubbleSort(hero heroArray[],int len)
{
    for(int i = 0;i<len-1;i++)
    {
        for(int j = 0;j<len - 1 - i;j++)
        {
            if(heroArray[j].age>heroArray[j+1].age)
            {
                hero temp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = temp;
            }
        }
    }
}

void printHero_array(hero heroArray[],int len)
{
    for(int i = 0;i<len;i++)
    {
        cout
        <<"英雄名："
        <<heroArray[i].name
        <<"\t"
        <<"年龄："
        <<heroArray[i].age
        <<"\t"
        <<"性别"
        <<heroArray[i].gender
        <<endl;
    }
}

int main()
{
    hero heroArray[5] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };
    int len = sizeof(heroArray)/sizeof(heroArray[0]);

    bubbleSort(heroArray,len);

    printHero_array(heroArray,len);

    return 0;
}