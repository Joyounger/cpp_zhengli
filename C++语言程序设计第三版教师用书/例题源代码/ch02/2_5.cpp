//2_5.cpp
#include<iostream>
using namespace std;
int main()
{
	int i(1), sum(0);  //声明变量i并初始化为1，声明变量sum并初始化为0
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	cout<<"sum="<<sum<<endl;
}
