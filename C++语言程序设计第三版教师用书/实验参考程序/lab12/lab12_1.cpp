// lab12_1.cpp
#include <iostream>
using namespace std;

class CException
{
public:
    CException(){};
    ~CException(){};
    const char *Reason() const { return "Cexception���͵��쳣��"; }
};

void fn1()
{
	cout<< "���Ӻ����д���CException���쳣" << endl;
    throw CException();
}

int main()
{
    cout << "����������" << endl;
    try
    {
        cout << "��tryģ���У������Ӻ���" << endl;
        fn1();
    }
    catch( CException E )
    {
        cout << "��catchģ���У�����CException�����쳣��";
        cout << E.Reason() << endl;
    }
    catch( char *str )
    {
        cout << "�������������쳣��" << str << endl;
    }
    cout << "�ص����������쳣�ѱ�����" << endl;
}
