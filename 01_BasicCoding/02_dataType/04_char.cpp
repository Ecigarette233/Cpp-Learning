#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout<<ch<<endl;

    cout<<"char所占内存空间="<<sizeof(char)<<endl;
    //字符型变量转化为ASCII编码
    cout<<(int)ch<<endl;
    return 0;
}
