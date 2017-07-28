//12_2.cpp
#include <iostream>
using namespace std;
void MyFunc( void );
class Expt
{
  public:
    Expt(){};
    ~Expt(){};
    const char *ShowReason() const
    { 
	    return "Expt类异常。"; 
	 }
};
class Demo
{
  public:
    Demo();
    ~Demo();
};
Demo::Demo()
{
    cout << "构造 Demo." << endl;
}
Demo::~Demo()
{
    cout << "析构 Demo." << endl;
}
void MyFunc()
{
    Demo D;
    cout<< "在MyFunc()中抛掷Expt类异常。" << endl;
    throw Expt();
}
int main()
{
    cout << "在main函数中。" << endl;
    try
    {
        cout << "在try块中，调用MyFunc()。" << endl;
        MyFunc();
    }
    catch( Expt E )
    {
        cout << "在catch异常处理程序中。" << endl;
        cout << "捕获到Expt类型异常：";
        cout << E.ShowReason() << endl;
    }
    catch( char *str )
    {
        cout << "捕获到其它的异常：" << str << endl;
    }
    cout << "回到main函数。从这里恢复执行。" << endl;
    return 0;
}
