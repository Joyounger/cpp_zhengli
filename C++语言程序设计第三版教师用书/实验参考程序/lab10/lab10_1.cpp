// lab10_1.cpp
#include <iostream>
#include <deque>

using namespace std;

typedef deque<int>  INTDEQUE;

int main()
{
   INTDEQUE A;
	for(int i=0;i<5;i++)
	{
		A.push_back(2*i+1);
	}
	cout << "����A��Ԫ��Ϊ��" ;
	while(!A.empty())
	{
		cout << A.front() << "   ";
		A.pop_front();
	}
	cout << endl;
}
