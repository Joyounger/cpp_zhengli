//12_2.cpp
#include <iostream>
using namespace std;

int main()
{
	double *ptr[ 10 ];
	for ( int i = 0; i < 10; i++ ) 
	{
		ptr[ i ] = new double[ 60000000 ];
		if ( ptr[ i ] == 0 ) 
		{ 
			cout << "�ڴ����ʧ�ܣ� ptr[ "  << i << " ]\n";
			break;
		}
		else
			cout << "������ 60000000 double �������� ptr[ " << i << " ]\n";    
	}
	return 0;
}
/*
ע���������ڲ�ͬ���������н�����ܻ᲻ͬ��
  ���н����

������ 60000000 double �������� ptr[ 0 ]
�ڴ����ʧ�ܣ� ptr[ 1 ]
��
������ 60000000 double �������� ptr[ 0 ]
������ 60000000 double �������� ptr[ 1 ]
������ 60000000 double �������� ptr[ 2 ]
������ 60000000 double �������� ptr[ 3 ]
������ 60000000 double �������� ptr[ 4 ]
������ 60000000 double �������� ptr[ 5 ]
������ 60000000 double �������� ptr[ 6 ]
������ 60000000 double �������� ptr[ 7 ]
������ 60000000 double �������� ptr[ 8 ]
������ 60000000 double �������� ptr[ 9 ]
*/