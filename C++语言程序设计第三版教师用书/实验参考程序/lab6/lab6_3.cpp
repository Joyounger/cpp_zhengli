#include <iostream>
using namespace std;

int main()
{
	int i=0,j=0;
	char s1[200],s2[100];
	cout << "请输入第一个字符串：";
	cin >> s1;
	cout << "请输入第二个字符串：";
	cin >>s2;
	while(s1[i])
		i++;
	while(s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	cout << "连接后的字符串为：" << s1 << endl;
}	
