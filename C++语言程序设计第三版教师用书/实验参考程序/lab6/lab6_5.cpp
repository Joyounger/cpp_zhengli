#include "employee.h"
int main()
{
	Employee e1("����","ƽ�����3��", "����", "100000");
	e1.display();
	cout << endl;
	e1.change_name("����");
	e1.display();
	cout << endl;
}
