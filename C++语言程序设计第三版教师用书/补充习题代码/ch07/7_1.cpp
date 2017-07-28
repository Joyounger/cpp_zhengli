//7_1.cpp
#include <iostream>
#include <string>
using namespace std;

class Person
{   char *Name; 
public:
	Person(){};
	Person( char *name );
    void  PrintName(); 
};
Person::Person( char *name )
{
    Name = new char[strlen( name )+1];
    strcpy( Name,name);
}
void Person::PrintName()
{    cout << Name << endl;  }
class Student : public Person
{ public:
    Student( char *name, long number );
	void PrintInfo();
private:
    long  Number;
};
Student::Student( char *name, long number):Person(name)
{  Number = number ;  }
void Student::PrintInfo()
{
    cout << "Name of Student: ";
    Person::PrintName();
    cout << "Number of Student: "<<Number;
}

int main()
{
  Student b("ssh",100);
  b.PrintInfo();
  return 0;
}
/*
运行结果：
Name of Student: ssh
Number of Student: 100
*/