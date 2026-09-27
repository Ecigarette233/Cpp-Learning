#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main()
{
    // 1.包含头文件

    // 2.创建流对象
    ifstream ifs;
    // 3.打开文件 并且判断是否打开成功
    ifs.open("text_file.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
    }

    // 4.读数据

    //方式1
    // char buffer1[32] = {0};

    // while (ifs >> buffer1)
    // {
    //     cout << buffer1 << endl;
    // }

    // 方式2
    // char buffer2[32] = {0};

    // while (ifs.getline(buffer2, sizeof(buffer2)))
    // {
    //     cout << buffer2 << endl;
    // }

    //方式3
    // string buffer3;

    // while(getline(ifs,buffer3))
    // {
    //     cout<<buffer3<<endl;
    // }

    //方式4
    char c;
    while((c = ifs.get())!=EOF)
    {
        cout<<c;
    }
    

    // 5.关闭文件
    ifs.close();

    return 0;
}