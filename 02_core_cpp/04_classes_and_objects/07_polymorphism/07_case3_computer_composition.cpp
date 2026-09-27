#include <iostream>
using namespace std;

//电脑主要组成部件为CPU(用于计算)，显卡(用于显示)，内存条(用于存储)
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//测试时组装三台不同的电脑进行工作

class CPU
{
public:
    virtual void calculate() = 0;
};

class GraphicCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void store() = 0;
};

class Computer
{
public:
    Computer(CPU* cpu,GraphicCard* graphiccard,Memory* memory)
    {
        m_cpu = cpu;
        m_graphiccard = graphiccard;
        m_memory = memory;
    }

    void doWork()
    {
        m_cpu->calculate();
        m_graphiccard->display();
        m_memory->store();
    }

    ~Computer()
    {
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = nullptr;
        }
         if(m_graphiccard != NULL)
        {
            delete m_graphiccard;
            m_graphiccard = nullptr;
        }
         if(m_memory != NULL)
        {
            delete m_memory;
            m_memory = nullptr;
        }
    }

private:
    CPU* m_cpu;
    GraphicCard* m_graphiccard;
    Memory* m_memory;
};

class IntelCPU:public CPU
{
public:
    void calculate()
    {
        cout<<"Intel的CPU开始计算"<<endl;
    }
};

class IntelGraphicCard:public GraphicCard
{
public:
    void display()
    {
        cout<<"Intel的GraphicCard开始显示"<<endl;
    }
};

class IntelMemory:public Memory
{
public:
    void store()
    {
        cout<<"Intel的Memory开始存储数据"<<endl;
    }
};

class LenovoCPU:public CPU
{
public:
    void calculate()
    {
        cout<<"Lenovo的CPU开始计算"<<endl;
    }
};

class LenovoGraphicCard:public GraphicCard
{
public:
    void display()
    {
        cout<<"Lenovo的GraphicCard开始显示"<<endl;
    }
};

class LenovoMemory:public Memory
{
public:
    void store()
    {
        cout<<"Lenovo的Memory开始存储数据"<<endl;
    }
};

int main()
{
    //第一台电脑零件
    CPU* intelcpu = new IntelCPU;
    GraphicCard* intelgc = new IntelGraphicCard;
    Memory* intelmem = new IntelMemory;

    Computer *computer1 = new Computer(intelcpu,intelgc,intelmem);
    computer1->doWork();
    delete computer1;

    cout<<"------------"<<endl;

    //第二台电脑零件
    Computer *computer2 = new Computer(new LenovoCPU,new LenovoGraphicCard,new LenovoMemory);
    computer2->doWork();

    cout<<"------------"<<endl;

    //第三台电脑零件
    Computer *computer3 = new Computer(new LenovoCPU,new LenovoGraphicCard,new IntelMemory);
    computer3->doWork();

    return 0;
}