//lab5_2.cpp
#include "client.h"

int CLIENT::ClientNum = 0;
char CLIENT::ServerName= 'N';

int main()
{
	CLIENT a;
	CLIENT b;
	cout << "����������Ϊ��" << CLIENT::GetServerName() << endl;
	CLIENT::ChangServerName('A');
	cout << "�ͻ�������Ϊ��" << CLIENT::GetClientNum() << endl;
	cout << "����������Ϊ��" << CLIENT::GetServerName() << endl; 
}
