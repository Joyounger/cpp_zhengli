//12_6.cpp
#include <iostream>
using namespace std;

void ExFun()
{
	try
	{	throw "Welcome";	}
	catch (char *)
	{	cout<<"Catch inside ExFun\n";	throw;	}
}

int main()
{
	try
	{	ExFun(); 	}
	catch (char *)
	{	cout<<"Catch inside Main\n";	}
   return 0;
}
/*
运行结果：
Catch inside ExFun
Catch inside Main
*/