//6_8.cpp
#include <iostream>
using namespace std;
int main()
{
	int line1[]={1,0,0};	//声明数组，矩阵的第一行
	int line2[]={0,1,0};	//声明数组，矩阵的第二行
	int line3[]={0,0,1};	//声明数组，矩阵的第三行
	
	int *p_line[3];	//声明整型指针数组
	p_line[0]=line1;	//初始化指针数组元素
	p_line[1]=line2;
	p_line[2]=line3;
	
	cout<<"Matrix test:"<<endl;	//输出单位矩阵
	for(int i=0;i<3;i++)	//对指针数组元素循环
	{
	    for(int j=0;j<3;j++)	//对矩阵每一行循环
	    {   cout<<p_line[i][j]<<" ";   }
	    cout<<endl;
	}
}
