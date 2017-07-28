//11_8.cpp
#include<iostream>
#include <fstream>
#include<cstring>
using namespace std;
int main()
{
    struct
    {
        double salary;
        char name[23];
    } employee1, employee2;
	employee1.salary=8000;
	strcpy(employee1.name, "L Zheng");
	ofstream outfile("payroll",ios_base::binary);
	outfile.write((char *) &employee1,sizeof(employee1));
	outfile.close();
    ifstream is("payroll",ios_base::binary);
    if (is)
       {
             is.read((char *) &employee2,sizeof(employee2));
             cout << employee2.name << ' ' << employee2.salary << endl;
        }
    else 
    {
        cout << "ERROR: Cannot open file 'payroll'." << endl;
    }
	is.close();
}
