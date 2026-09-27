#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    //1.包含fstream头文件

    //2.创建流对象
    ofstream ofs;

    //3.打开文件
    ofs.open("text_file.txt",ios::out);

    //4.输入文件
    ofs<<"姓名：张三"<<endl;
    ofs<<"性别：男"<<endl;
    ofs<<"年龄：18"<<endl;

    //5.关闭文件
    ofs.close();

    return 0;
}