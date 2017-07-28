//6_12.cpp
#include <iostream>
using namespace std;

int main()
{
	int x,*p,**q,***r;
	x=10;
	p=&x;
	q=&p;
	r=&q;
    cout<<"x="<<x<<" ; &x="<<&x<<endl;
    cout<<"p="<<p<<" ; &p="<<&p<<" ; *p="<<*p<<endl;
    cout<<"q="<<q<<" ; &q="<<&q<<" ; *q="<<*q<<" ; **q="<<**q<<endl;
    cout<<"r="<<r<<" ; &r="<<&r<<" ; *r="<<*r<<" ; **r="<<**r<<" ; ***r="<<***r<<endl;
    return 0;
}
/*
程序运行结果为：
x=10 ; &x=0012FF7C
p=0012FF7C ; &p=0012FF78 ; *p=10
q=0012FF78 ; &q=0012FF74 ; *q=0012FF7C ; **q=10
r=0012FF74 ; &r=0012FF70 ; *r=0012FF78 ; **r=0012FF7C ; ***r=10
*/