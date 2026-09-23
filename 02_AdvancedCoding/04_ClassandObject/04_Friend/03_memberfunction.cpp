#include <iostream>
using namespace std;
#include <string>

class Building;
class GoodGuy
{
public:
    GoodGuy();

    void visit1();
    //void visit2();

    ~GoodGuy()
    {
        if (building)
        {
            delete building;
            building = nullptr;
        }
    }
private:
    Building *building;

};

class Building
{
    friend void GoodGuy::visit1();
public:
    Building();

public:
    string LivingRoom;

private:
    string Bedroom;

};

GoodGuy::GoodGuy()
{
    building = new Building;
}

Building::Building()
{
    LivingRoom = "客厅";
    Bedroom = "卧室";
}


void GoodGuy::visit1()
{
    cout<<"好基友正在访问："<<building->LivingRoom<<endl;

    cout<<"好基友正在访问："<<building->Bedroom<<endl;
}

// void GoodGuy::visit2()
// {
//     cout<<"好基友正在访问："<<building->LivingRoom<<endl;
//     cout<<"好基友正在访问："<<building->Bedroom<<endl;
// }

void test01()
{
    GoodGuy gg;
    gg.visit1();
    //gg.visit2();

}

int main()
{
    test01();

    return 0;
}