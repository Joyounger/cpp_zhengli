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
	    return "Expt���쳣��"; 
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
    cout << "���� Demo." << endl;
}
Demo::~Demo()
{
    cout << "���� Demo." << endl;
}
void MyFunc()
{
    Demo D;
    cout<< "��MyFunc()������Expt���쳣��" << endl;
    throw Expt();
}
int main()
{
    cout << "��main�����С�" << endl;
    try
    {
        cout << "��try���У�����MyFunc()��" << endl;
        MyFunc();
    }
    catch( Expt E )
    {
        cout << "��catch�쳣��������С�" << endl;
        cout << "����Expt�����쳣��";
        cout << E.ShowReason() << endl;
    }
    catch( char *str )
    {
        cout << "�����������쳣��" << str << endl;
    }
    cout << "�ص�main������������ָ�ִ�С�" << endl;
    return 0;
}
