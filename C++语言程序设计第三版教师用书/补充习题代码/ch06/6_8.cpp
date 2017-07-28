//6_8.cpp
#include <iostream >
using namespace std;
void swap(int v1,int v2)
{	int tmp=v2;
	v2=v1;
	v1=tmp;
	cout<<"Call swap(int,int)"<<endl;
}
void swap(int *v1,int *v2)
{	int *tmp=v2;
	v2=v1;
	v1=tmp;
	cout<<"Call swap(int*,int*)"<<endl;
}

int main() 
{
	int i = 10;
	int j = 20;
	int *pi = &i;
	int *pj = &j;
	cout <<"Initializing..."<<endl;
	swap(&i, &j);
	cout << *pi << ',' << *pj << endl;
	swap(*pi, *pj);
	cout << *pi << ',' << *pj << endl;
	swap(pi, pj);
	cout << *pi << ',' << *pj << endl;
	return 0;
}
/*
程序运行结果为：
Initializing...
Call swap(int*,int*)
10,20
Call swap(int,int)
10,20
Call swap(int*,int*)
10,20
*/