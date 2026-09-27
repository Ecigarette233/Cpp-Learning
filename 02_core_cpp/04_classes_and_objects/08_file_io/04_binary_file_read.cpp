#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:
    char name[32];
    int age;
};

int main()
{
    ifstream ifs;

    ifs.open("binary_file.text",ios::in|ios::binary);

    if(!ifs.is_open())
    {
        cout<<"打开文件失败"<<endl;
        return 1;
    }

    Person p;

    ifs.read((char*)&p,sizeof(Person));

    cout<<"姓名："<<p.name<<endl;
    cout<<"年龄："<<p.age<<endl;

    ifs.close();

    return 0;
}