#include <iostream>
using namespace std;


class Person
{

public:
    //1.构造函数
    Person()
    {
        cout<<"Person构造函数的调用"<<endl;
    }

    //2.析构函数 进行清理操作
    ~Person()
    {
        cout<<"Person析构函数的调用"<<endl;
    }
};
int main()
{
    Person p1;

    system("pause");
    
    return 0;
}