// lab12_1.cpp
#include <iostream>
using namespace std;

class CException
{
public:
    CException(){};
    ~CException(){};
    const char *Reason() const { return "Cexception类型的异常。"; }
};

void fn1()
{
	cout<< "在子函数中触发CException类异常" << endl;
    throw CException();
}

int main()
{
    cout << "进入主函数" << endl;
    try
    {
        cout << "在try模块中，调用子函数" << endl;
        fn1();
    }
    catch( CException E )
    {
        cout << "在catch模块中，捕获到CException类型异常：";
        cout << E.Reason() << endl;
    }
    catch( char *str )
    {
        cout << "捕获到其它类型异常：" << str << endl;
    }
    cout << "回到主函数，异常已被处理" << endl;
}
