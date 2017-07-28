//6_23.cpp
#include<iostream>
using namespace std;
int main()
{
	//二维字符数组的声明和初始化，未被初始化的元素初始值为0：
	static char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'}, {'*',' ',' ',' ','*'},
{' ','*',' ','*'}, {' ',' ','*'}};
	int i,j;
	for (i=0;i<5;i++)      //逐个输出二维字符数组的元素
	{  
			for(j=0;j<5 && diamond[i][j]!=0;j++)
				cout<<diamond[i][j];  
			cout<<endl;
	}
}
