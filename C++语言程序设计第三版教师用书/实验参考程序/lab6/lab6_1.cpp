#include <iostream>
using namespace std;

void move (int matrix[3][3])
{
	int i, j, k;
	for(i=0; i<3; i++)
		for (j=0; j<i; j++)
		{
			k = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = k;
		}
}

int main()
{
	int i, j;
	int data[3][3];
	cout << "��������Ԫ��" << endl;
	for(i=0; i<3; i++)
		for (j=0; j<3; j++)
		{
			cout << "��" << i+1 << "�е�" << j+1
				<<"��Ԫ��Ϊ��";
			cin >> data[i][j];
		}
		cout << "����ľ����Ϊ��" << endl;
		for(i=0; i<3; i++)
		{
			for (j=0; j<3; j++)
				cout << data[i][j] << " ";
			cout << endl;
		}
		move(data);
		cout << "ת�ú�ľ����Ϊ��" << endl;
		for(i=0; i<3; i++)
		{
			for (j=0; j<3; j++)
				cout << data[i][j] << " ";
			cout << endl;
		}
}	
