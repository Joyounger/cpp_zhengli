#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	cout << "�������һ���ַ�����";
	cin >> s1;
	cout << "������ڶ����ַ�����";
	cin >>s2;
	s1 += s2;
	cout << "���Ӻ���ַ���Ϊ��" << s1 << endl;
}
