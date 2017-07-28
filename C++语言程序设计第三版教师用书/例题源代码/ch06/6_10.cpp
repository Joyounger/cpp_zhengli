//6_10.cpp
#include <iostream>
using namespace std;
void splitfloat(float x, int *intpart, float *fracpart)
                                  //形参intpart，fracpart是指针
{
	*intpart=int(x);	//取x的整数部分
	*fracpart=x-*intpart;	//取x的小数部分
}

int main()
{
	int i,n;
	float x,f;
	cout<<"Enter 3 float point numbers:"<<endl;
	for(i=0;i<3;i++)
	{
	    cin>>x;
	    splitfloat(x,&n,&f);	//变量地址作为实参
	    cout<<"Integer Part="<<n<<" Fraction Part="<<f<<endl;
	}
}
