// lab6_6.cpp
#include "employee.h"

int main()
{
	Employee emp[5] = 
	{ Employee("����","ƽ�����3��", "����", "100000"),
	  Employee("����","���������20��", "����", "100000"),
	  Employee("�Ը�","��ɽ·112��", "����", "400000"),
	  Employee("�·�","�Ͼ�·234��", "�Ϻ�", "200000"),
	  Employee("����","����·476��", "����", "400000")};
	for(int i=0;i<5;i++)
		emp[i].display();
}
