#include <iostream>
using namespace std;

class Myprint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }

};

class Myadd
{
    int operator()(int a,int b)
    {
        return a+b;
    }
};

void test01()
{
    Myprint myprint;
    myprint("HelloWorld");
}

void test02()
{
    Myadd myadd;
    int result = myadd(10,20);
    cout<<result<<endl;

    //匿名函数对象
    cout<<Myadd()(100,100)<<endl;
}

int main()
{
    test01();
    cout<<"-----------"<<endl;
    test02();

    return 0;
}