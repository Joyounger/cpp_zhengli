#include <iostream>
using namespace std;

int main()
{
	int i=0,j=0;
	char s1[200],s2[100];
	cout << "�������һ���ַ�����";
	cin >> s1;
	cout << "������ڶ����ַ�����";
	cin >>s2;
	while(s1[i])
		i++;
	while(s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	cout << "���Ӻ���ַ���Ϊ��" << s1 << endl;
}	
