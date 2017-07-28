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
	cout << "输入现在的年份数：";
	cin >> time1.year;
	cout << "输入现在的月份数：";
	cin >> time1.month;
	cout << "输入现在的日期数：";
	cin >> time1.day;
	cout << "输入现在的小时数：";
	cin >> time1.hour;
	cout << "输入现在的分钟数：";
	cin >> time1.minute;
	cout << "输入现在的秒数：";
	cin >> time1.second;
	cout << "现在是" << time1.year << "年" << time1.month 
		<< "月" << time1.day << "日" << time1.hour << "点" 
		<< time1.minute << "分" << time1.second << "秒" << endl;
}
