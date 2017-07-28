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
	cout << "链表A的元素为：" ;
	while(!A.EndOfList())
	{
		cout << A.Data() << "   ";
		A.Next();
	}
	cout << endl;
    B.Reset();
	cout << "链表B的元素为：" ;
	while(!B.EndOfList())
	{
		cout << B.Data() << "   ";
		B.Next();
	}
	cout << endl;
	cout << "把B中的元素插入A中..." << endl;
	B.Reset();
	while(!B.EndOfList())
	{
		A.InsertRear(B.Data());
		B.Next();
	}
	A.Reset();
	cout << "此时，链表A的元素为：" ;
	while(!A.EndOfList())
	{
		cout << A.Data() << "   ";
		A.Next();
	}
	cout << endl;
}
