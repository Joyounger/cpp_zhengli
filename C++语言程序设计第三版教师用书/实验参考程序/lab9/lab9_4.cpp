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
	cout << "������10������" << endl;
	for(i=0;i<10;i++)
	{
		cout << "�����" << i+1 << "�����֣�";
		cin >> A[i];
	}
	cout << "���������Ϊ��" << endl;
	for(i=0;i<10;i++)
		cout << A[i] << "  ";
	cout << endl;

	cout << "��ѡ�����򷽷���1.ֱ�Ӳ������� 2.ֱ��ѡ������ 3.ð������" ;
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
		cout << "������󣬳����˳�!";
		exit(0);
	}
	cout << "����������Ϊ��" << endl;
	for(i=0;i<10;i++)
		cout << A[i] << "  ";
	cout << endl;

	cout << "����������ҵ����֣�";
	cin >> SearchNum;

	k= A.SeqSearch(SearchNum);

	if (k<0)
		cout << "û���ҵ�����" << SearchNum << endl;
	else
		cout << SearchNum << "�ǵ�" << k+1 << "������" << endl;
}
