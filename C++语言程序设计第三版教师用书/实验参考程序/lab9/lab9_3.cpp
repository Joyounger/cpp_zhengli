//lab9_3.cpp
#include "queue.h"

int main()
{
	Queue<int> A;
	for(int i=0;i<5;i++)
	{
		A.QInsert(2*i+1);
	}
	cout << "����A��Ԫ��Ϊ��" ;
	while(!A.QEmpty())
	{
		cout << A.QFront() << "   ";
		A.QDelete();
	}
	cout << endl;
}
