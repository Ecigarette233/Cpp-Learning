#include <iostream>
using namespace std;
#include <string>

class Building;
class GoodGuy
{
public:
    GoodGuy();
    void visit();

private:
    Building *building;
};

class Building
{
    friend class GoodGuy;

public:
    Building();

public:
    string LivingRoom;

private:
    string Bedroom;
};

Building::Building()
{
    LivingRoom = "客厅";
    Bedroom = "卧室";
}

GoodGuy::GoodGuy()
{
    building = new Building;
}

void GoodGuy::visit()
{
    cout << "好基友正在访问：" << building->LivingRoom << endl;

    cout << "好基友正在访问：" << building->Bedroom << endl;
}

void test01()
{
    GoodGuy gg;

    gg.visit();
}

int main()
{
    test01();
    return 0;
}