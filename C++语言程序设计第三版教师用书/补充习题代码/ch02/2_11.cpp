//2_11.cpp
#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	int i;
	for (i=7;i>=0;i--)
	{
		switch(i)
		{
		case 1:
		case 4:
		case 7: sum++;break;
		case 2:
		case 3:
		case 6: break;
		case 0:
		case 5: sum+=3;break;
		}
	}
	cout<<"The sum is:"<<sum<<endl;
	return 0;
}
/*
程序运行结果为：
The sum is:9
*/
