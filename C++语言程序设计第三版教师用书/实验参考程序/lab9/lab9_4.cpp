//lab9_3.cpp
#include <iostream>
#include "array1.h"
using namespace std;

int main()
{
	Array<int> A(10);
	int i,k;
	int SortType;
	int SearchNum;
	cout << "请输入10个整数" << endl;
	for(i=0;i<10;i++)
	{
		cout << "输入第" << i+1 << "个数字：";
		cin >> A[i];
	}
	cout << "输入的数组为：" << endl;
	for(i=0;i<10;i++)
		cout << A[i] << "  ";
	cout << endl;

	cout << "请选择排序方法：1.直接插入排序 2.直接选择排序 3.冒泡排序：" ;
	cin >> SortType;
	switch(SortType)
	{
	case 1: 
		A.InsertionSort();
		break;
	case 2:
		A.SelectionSort();
		break;
	case 3:
		A.BubbleSort();
		break;
	default:
		cout << "输入错误，程序退出!";
		exit(0);
	}
	cout << "排序后的数组为：" << endl;
	for(i=0;i<10;i++)
		cout << A[i] << "  ";
	cout << endl;

	cout << "请输入待查找的数字：";
	cin >> SearchNum;

	k= A.SeqSearch(SearchNum);

	if (k<0)
		cout << "没有找到数字" << SearchNum << endl;
	else
		cout << SearchNum << "是第" << k+1 << "个数字" << endl;
}
