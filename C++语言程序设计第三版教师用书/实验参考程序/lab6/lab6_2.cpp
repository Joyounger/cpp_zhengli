#include <iostream>
using namespace std;

void move (int *matrix)
{
	int i, j, k;
	for(i=0; i<3; i++)
		for (j=0; j<i; j++)
		{
			k = *(matrix + i*3 + j);
			*(matrix + i*3 + j) = *(matrix + j*3 + i);
			*(matrix + j*3 + i) = k;
		}
}

int main()
{
	int i, j;
	int *p = new int[3*3];
	cout << "��������Ԫ��" << endl;
	for(i=0; i<3; i++)
		for (j=0; j<3; j++)
		{
			cout << "��" << i+1 << "�е�" << j+1
			<<"��Ԫ��Ϊ��";
			cin >> p[i*3 + j];
		}
	cout << "����ľ����Ϊ��" << endl;
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			cout << p[i*3 + j] << " ";
		cout << endl;
	}
	move(p);
	cout << "ת�ú�ľ����Ϊ��" << endl;
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			cout << p[i*3 + j] << " ";
		cout << endl;
	}
}	
