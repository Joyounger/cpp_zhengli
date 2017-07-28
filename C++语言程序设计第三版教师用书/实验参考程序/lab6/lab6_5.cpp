#include "employee.h"
int main()
{
	Employee e1("张三","平安大街3号", "北京", "100000");
	e1.display();
	cout << endl;
	e1.change_name("李四");
	e1.display();
	cout << endl;
}
