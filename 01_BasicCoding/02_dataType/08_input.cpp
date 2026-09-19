#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    cout<<"请给整型变量a赋值："<<endl;
    cin>>a;
    cout<<"a = "<<a<<endl;

    float f = 3.14f;
    cout<<"请给浮点型变量f赋值："<<endl;
    cin>>f;
    cout<<"f = "<<f<<endl;

    char ch = 'a';
    cout<<"请给字符型变量ch赋值："<<endl;
    cin>>ch;
    cout<<"ch = "<<ch<<endl;

    string str = "hello";
    cout<<"请给字符串str赋值"<<endl;
    cin>>str;
    cout<<"str = "<<str<<endl;

    bool flag = false;
    cout<<"请给bool类型flag赋值"<<endl;
    cin>>flag;
    cout<<"flag = "<<flag<<endl; 
    //bool类型只要是非0都代表真
    
    return 0;
}