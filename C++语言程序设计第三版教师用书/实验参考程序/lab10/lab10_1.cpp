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
	cout << "队列A的元素为：" ;
	while(!A.empty())
	{
		cout << A.front() << "   ";
		A.pop_front();
	}
	cout << endl;
}
