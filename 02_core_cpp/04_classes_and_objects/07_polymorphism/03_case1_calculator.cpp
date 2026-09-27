#include <iostream>
using namespace std;

// 分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }

    int num1;
    int num2;
};

// 加法
class AddCalculator : public AbstractCalculator
{
    int getResult()
    {
        return num1 + num2;
    }
};

// 减法
class SubCalculator : public AbstractCalculator
{
    int getResult()
    {
        return num1 - num2;
    }
};

// 加法
class MulCalculator : public AbstractCalculator
{
    int getResult()
    {
        return num1 * num2;
    }
};

void test01()
{
    AbstractCalculator *abc = new AddCalculator;
    abc->num1 = 10;
    abc->num2 = 20;
    cout << abc->getResult() << endl;

    delete abc;

    abc = new SubCalculator;
    abc->num1 = 10;
    abc->num2 = 20;
    cout << abc->getResult() << endl;
}

int main()
{
    test01();

    return 0;
}