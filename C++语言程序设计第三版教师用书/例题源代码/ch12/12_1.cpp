//12_1.cpp
#include<iostream>
using namespace std;
int Div(int x,int y);
int main()
{
	try
	{
		cout<<"5/2="<<Div(5,2)<<endl;
		cout<<"8/0="<<Div(8,0)<<endl;
		cout<<"7/1="<<Div(7,1)<<endl;
	}
	catch(int)
	{
		cout<<"except of deviding zero.\n";
	}
	cout<<"that is ok.\n";
}
int Div(int x,int y)
{
	if(y==0)
		throw y;
	return x/y;
}
