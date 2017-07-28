//9_4.cpp
#include <iostream>
using namespace std;
template <class T>
void Copy(T A[], T B[],int n)
{
	for (int i=0;i<n;i++)
		*A++=*B++;
}
template <class T>
void Print(T A[],int n)
{
	for (int i=0;i<n;i++)
		cout<<A[i]<<' ';
}
int main()
{
	int arr1[]={1,5,7,3,2},arr2[5];
	Copy(arr2,arr1,5);
	Print(arr2,5);
	return 0;
}

/*
运行结果：
1 5 7 3 2
*/
