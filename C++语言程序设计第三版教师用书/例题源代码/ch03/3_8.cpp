//3_8.cpp
#include <iostream>
using namespace std;
long fac(int n)
{
	long f;
	if (n<0) cout<<"n<0,data error!"<<endl;
	else if (n==0) f=1;
	else f=fac(n-1)*n;
	return(f);
}

int main()
{
	long fac(int n);
	int n;
	long y;
	cout<<"Enter a positive integer:";
	cin>>n;
	y=fac(n);
	cout<<n<<"!="<<y<<endl;
}
