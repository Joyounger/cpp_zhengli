// lab6_6.cpp
#include "employee.h"

int main()
{
	Employee emp[5] = 
	{ Employee("张三","平安大街3号", "北京", "100000"),
	  Employee("李四","王府井大街20号", "北京", "100000"),
	  Employee("赵刚","中山路112号", "重庆", "400000"),
	  Employee("陈芳","南京路234号", "上海", "200000"),
	  Employee("周欣","人民东路476号", "重庆", "400000")};
	for(int i=0;i<5;i++)
		emp[i].display();
}
