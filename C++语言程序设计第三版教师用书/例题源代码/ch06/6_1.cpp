//6_1.cpp
#include <iostream>
using namespace std;
int main()
{
	int A[10],B[10];
	int i;
	for(i=0;i<10;i++)
	{
		A[i]=i*2-1;
		B[10-i-1]=A[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<"A["<<i<<"]="<<A[i];
		cout<<" B["<<i<<"]="<<B[i]<<endl;
	}
}
