//2_9.cpp
#include <iostream>
using namespace std;
int main()
{
	int x=4,y=1;
	cout<<!(y==x/2)<<",";
	cout<<(y!=x%3)<<",";
	cout<<(x>0&& y<0)<<",";
	cout<<(x!=y||x>=y)<<endl;
	return 0;
}
/*
程序运行结果为：
1,0,0,1
*/
