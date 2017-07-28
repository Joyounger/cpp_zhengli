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
	cout << "输入矩阵的元素" << endl;
	for(i=0; i<3; i++)
		for (j=0; j<3; j++)
		{
			cout << "第" << i+1 << "行第" << j+1
			<<"个元素为：";
			cin >> p[i*3 + j];
		}
	cout << "输入的矩阵的为：" << endl;
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			cout << p[i*3 + j] << " ";
		cout << endl;
	}
	move(p);
	cout << "转置后的矩阵的为：" << endl;
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
			cout << p[i*3 + j] << " ";
		cout << endl;
	}
}	
