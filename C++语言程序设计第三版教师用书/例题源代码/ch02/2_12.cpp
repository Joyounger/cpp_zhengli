//2_12.cpp
#include <iostream>
#include <iomanip>
using namespace std;
struct student   	//学生信息结构体
{
    int num;  	//学号
    char name[20];  	//姓名
    char sex;  	//性别
    int age;  	//年龄
}stu={97001,"Lin Lin",'F',19};

int main()
{
    cout<<setw(7)<<stu.num<<setw(20)<<stu.name<<setw(3)<<stu.sex
		<<setw(3)<<stu.age;
}
