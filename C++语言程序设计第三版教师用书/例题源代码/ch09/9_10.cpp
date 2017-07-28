//9_10.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include "9_10.h"	
using namespace std;

int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
	Queue<int> q;
	for (int i=0; i<10; i++)
	    q.QInsert(a[i]);
	for (i=0; i<10; i++)
    {
	    cout<<q.QFront()<<endl;
		q.QDelete();
	}
}