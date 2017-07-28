#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	cout << "请输入第一个字符串：";
	cin >> s1;
	cout << "请输入第二个字符串：";
	cin >>s2;
	s1 += s2;
	cout << "连接后的字符串为：" << s1 << endl;
}
