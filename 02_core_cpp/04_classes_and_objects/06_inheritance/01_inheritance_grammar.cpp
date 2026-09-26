#include <iostream>
using namespace std;

class BasePage
{
public:
    void head()
    {
        cout << "这是头部" << endl;
    }
    void footer()
    {
        cout << "这是尾部" << endl;
    }
    void sidebar()
    {
        cout << "这是侧标栏" << endl;
    }
};

class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};

void test01()
{
    Java java;
    java.head();
    java.footer();
    java.sidebar();
    java.content();
}

int main()
{
    test01();
    return 0;
}