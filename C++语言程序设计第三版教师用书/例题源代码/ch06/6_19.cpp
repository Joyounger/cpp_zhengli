//6_19.cpp
#include<iostream>
using namespace std;
int main()
{
	float (*cp)[9][8];
	int i,j,k;
	cp = new float[8][9][8];
	for (i=0; i<8; i++)
		for (j=0; j<9; j++)
			for (k=0; k<9; k++)
			    *(*(*(cp+i)+j)+k)=i*100+j*10+k;   //通过指针访问数组元素
	for (i=0; i<8; i++)
	{	for (j=0; j<9; j++)
		{    for (k=0; k<8; k++)
			    cout<<cp[i][j][k]<<"  ";  
				//将指针cp作为数组名使用，通过数组名和下标访问数组元素
			cout<<endl;
		}
		cout<<endl;
	}
}
