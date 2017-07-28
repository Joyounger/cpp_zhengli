//lab5_2.cpp
#include "client.h"

int CLIENT::ClientNum = 0;
char CLIENT::ServerName= 'N';

int main()
{
	CLIENT a;
	CLIENT b;
	cout << "服务器名称为：" << CLIENT::GetServerName() << endl;
	CLIENT::ChangServerName('A');
	cout << "客户机数量为：" << CLIENT::GetClientNum() << endl;
	cout << "服务器名称为：" << CLIENT::GetServerName() << endl; 
}
