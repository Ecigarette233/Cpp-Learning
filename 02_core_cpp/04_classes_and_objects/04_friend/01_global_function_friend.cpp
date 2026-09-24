#include <iostream>
using namespace std;

class House
{
    //友元定义
    friend void goodGuy(House *house);

public:
    House()
    {
        livingRoom = "客厅";
        bedroom = "卧室";
    }

public:
    string livingRoom;

private:
    string bedroom;
};

//全局函数
void goodGuy(House *house)
{
    cout<<"好基友正在访问"<<house->livingRoom<<endl;
    cout<<"好基友正在访问"<<house->bedroom<<endl;
}

void test01()
{
    House house;
    goodGuy(&house);

}

int main()
{
    test01();
    return 0;
}