//8_7.cpp	�ļ�����������
#include "Trapzint.h"	//������ͷ�ļ�
#include <iomanip>
using namespace std;
int main()	//������
{
	Fun f;	//����Fun��Ķ���
	Trapz trapz1(f);	//����Trapz��Ķ���
	cout<<"TRAPZ Int:"<<setprecision(7)<<trapz1(0,2,1e-7)<<endl;	
//���㲢������ֽ��
}
