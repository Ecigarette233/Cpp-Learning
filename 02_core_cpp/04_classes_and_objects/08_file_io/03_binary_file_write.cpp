#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class Person
{
public:
    char name[32];
    int age;
};

int main()
{
    //1.包含头文件

    //2.创建流对象
    ofstream ofs("binary_file.text",ios::out|ios::binary);

    //3.打开文件
    //ofs.open("binary_file.text",ios::out|ios::binary);

    //4.写文件  
    Person p = {"张三",18};
    ofs.write((const char*)&p,sizeof(Person));

    //5.关闭文件
    ofs.close();

    return 0;
}