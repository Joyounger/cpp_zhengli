//2_12.cpp
#include <iostream>
#include <iomanip>
using namespace std;
struct student   	//ѧ����Ϣ�ṹ��
{
    int num;  	//ѧ��
    char name[20];  	//����
    char sex;  	//�Ա�
    int age;  	//����
}stu={97001,"Lin Lin",'F',19};

int main()
{
    cout<<setw(7)<<stu.num<<setw(20)<<stu.name<<setw(3)<<stu.sex
		<<setw(3)<<stu.age;
}
