#include <iostream>
using namespace std;

int main()
{
    //默认情况输出一个小数会显示6位有效数字
    float f1 = 3.14f;

    cout<<"f1 = "<<f1<<endl;

    double d1 = 3.14;

    cout<<"d1 = "<<d1<<endl;

    cout<<"float占用"<<sizeof(float)<<endl;
    cout<<"double占用"<<sizeof(double)<<endl;

    //科学计数法
    float f2 = 3e2;
    cout<<"f2="<<f2<<endl;

    float f3 = 3e-2;
    cout<<"f3="<<f3<<endl;

    return 0;
}