#include <iostream>
#include <cmath>
using namespace std;

struct myTime
{
	short year;
	short month;
	short day;
	short hour;
	short minute;
	short second;
};

int main()
{
	myTime time1;
	cout << "�������ڵ��������";
	cin >> time1.year;
	cout << "�������ڵ��·�����";
	cin >> time1.month;
	cout << "�������ڵ���������";
	cin >> time1.day;
	cout << "�������ڵ�Сʱ����";
	cin >> time1.hour;
	cout << "�������ڵķ�������";
	cin >> time1.minute;
	cout << "�������ڵ�������";
	cin >> time1.second;
	cout << "������" << time1.year << "��" << time1.month 
		<< "��" << time1.day << "��" << time1.hour << "��" 
		<< time1.minute << "��" << time1.second << "��" << endl;
}
