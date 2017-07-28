#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	char name[30];
	char street[30];
	char city[18];
	char zip[7];
public:
	Employee(char *n, char *str, char *ct, char *z);
	void change_name(char *n);
	void display();
};

Employee::Employee (char *n,char *str,char *ct, char *z)
{
	strcpy(name, n);
	strcpy(street, str);
	strcpy(city, ct);
	strcpy(zip, z);
}

void Employee::change_name (char *n)
{
	strcpy(name, n);
}

void Employee::display ()
{
	cout << name << "  " << street << "  ";
	cout << city  << "  "<< zip << endl;
}
