//9_6.cpp
#include <iostream>
#include <iostream>
using namespace std;
class T
{
	char *p1;
public:
	T(char *s1="");
	T(T & t);
	~T();
	T& operator=(T & t);
	void print()	{cout<<"p1="<<p1<<endl;}
};
T::T(char *s1)
{
	p1=new char[strlen(s1)+1];
	strcpy(p1,s1);
}
T::~T(){	delete []p1;}
T::T(T & t)
{
	p1=new char[strlen(t.p1)+1];
	strcpy(p1,t.p1);
}
T& T::operator=(T & t)
{
	delete []p1;
	p1=new char[strlen(t.p1)+1];
	strcpy(p1,t.p1);
	return *this;
}
int main()
{
	T t1("Lucky boy"),t2(t1),t3;
	t1.print();
	t2.print();
	t3=t2=T("Welcome");
	t2.print();
	t3.print();
	return 0;
}

/*
运行结果：
p1=Lucky boy
p1=Lucky boy
p1=Welcome
p1=Welcome
*/
