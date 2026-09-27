#include <iostream>
using namespace std;

//制作饮料过程包括四步：
//1.煮水
//2.冲泡
//3.倒入杯中
//4.加入小料

class AbstractDrinking
{
public:
    virtual void boil() = 0;

    virtual void brew() = 0;

    virtual void pour() = 0;

    virtual void addtion() = 0;

    void makeDrink()
    {
        boil();

        brew();

        pour();

        addtion();
    }
};

class Coffee:public AbstractDrinking
{
public:
    void boil()
    {
        cout<<"煮农夫山泉"<<endl;
    }

    void brew()
    {
        cout<<"冲泡咖啡"<<endl;
    }

    void pour()
    {
        cout<<"倒入马克杯"<<endl;
    }

    void addtion()
    {
        cout<<"加入糖和牛奶"<<endl;
    }

};

class BubbleTea:public AbstractDrinking
{
public:
    void boil()
    {
        cout<<"煮恒大冰泉"<<endl;
    }

    void brew()
    {
        cout<<"冲泡奶茶"<<endl;
    }

    void pour()
    {
        cout<<"倒入聚乳酸材料环保杯"<<endl;
    }

    void addtion()
    {
        cout<<"加入椰果、芋圆"<<endl;
    }

};

void doWork(AbstractDrinking * abd)
{
    abd->makeDrink();
    delete abd;
}

void test01()
{
    doWork(new Coffee);
    cout<<"------------"<<endl;
    doWork(new BubbleTea);

}

int main()
{
    test01();
    return 0;
}