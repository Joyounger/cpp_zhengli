//6_10.cpp
#include <iostream>
using namespace std;

char * GetSubstr(char *sub, char *str)
{
	int i;
	char *p1,*p2,*start;
	for (i=0;str[i];i++)
	{
		p1=&str[i];
		start=p1;
		p2=sub;
		while(*p2&&*p2==*p1)
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return start;
	}
	return 0;
}

int main()
{
	char *substr;
	substr=GetSubstr("two","One two three four five");
	cout<<"找到的子串为："<<substr<<endl;
	return 0;
}
/*
程序运行结果为：
找到的子串为：two three four five
*/