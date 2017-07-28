//6_9.cpp
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
public:
	Student();
	~Student();
	char* GetName() { return Name; }
	void SetName(char* nam) {strcpy(Name,nam);}
private:
	char* Name;
};

Student::Student()
{
	cout<<"Constructor is called!"<<endl;
	Name=new char[20];
	strcpy(Name,"zzz");
}
Student::~Student()
{
	delete[] Name;
	cout<<"Destructor is called!"<<endl;
}

int main()
{
	Student a;
	Student b(a);
	cout<<"a's Name:"<<a.GetName()<<endl;
	cout<<"b's Name:"<<b.GetName()<<endl;
	a.SetName("sss");
	cout<<"a's Name:"<<a.GetName()<<endl;
	cout<<"b's Name:"<<b.GetName()<<endl;
	return 0;
}
/*
程序运行结果为：
Constructor is called!
a's Name:zzz
b's Name:zzz
a's Name:sss
b's Name:sss
Destructor is called! 
出错
*/