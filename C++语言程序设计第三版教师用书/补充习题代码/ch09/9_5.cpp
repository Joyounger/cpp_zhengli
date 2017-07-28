//9_5.cpp
#include <iostream>
using namespace std;
template <class T>
int Max(T Arr[],int n)
{
	int currMaxIndex=0;
	for(int i=1;i<n;i++)
		if(Arr[currMaxIndex]<Arr[i])
			currMaxIndex=i;
	return currMaxIndex;
}
int main()
{
	int arr[]={1,5,7,3,2};
	cout<<"The max value is:"<<arr[Max(arr,5)]<<endl;
	return 0;
}

/*
运行结果：
The max value is:7
*/