//lab9_2.cpp
#include "link.h"
int main()
{
	LinkedList<int> A, B;
	for(int i=0;i<5;i++)
	{
		A.InsertRear(2*i+1);
		B.InsertRear(2*i+2);
	}
	A.Reset();
	cout << "����A��Ԫ��Ϊ��" ;
	while(!A.EndOfList())
	{
		cout << A.Data() << "   ";
		A.Next();
	}
	cout << endl;
    B.Reset();
	cout << "����B��Ԫ��Ϊ��" ;
	while(!B.EndOfList())
	{
		cout << B.Data() << "   ";
		B.Next();
	}
	cout << endl;
	cout << "��B�е�Ԫ�ز���A��..." << endl;
	B.Reset();
	while(!B.EndOfList())
	{
		A.InsertRear(B.Data());
		B.Next();
	}
	A.Reset();
	cout << "��ʱ������A��Ԫ��Ϊ��" ;
	while(!A.EndOfList())
	{
		cout << A.Data() << "   ";
		A.Next();
	}
	cout << endl;
}
