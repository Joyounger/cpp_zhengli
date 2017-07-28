//6_11.cpp
#include <iostream>
using namespace std;

int main()
{
	int i;
	char str[80];
	char numbers[10][80]={
			"Tom","111111",
			"Mar","222222",
			"Jon","333333",
			"Rac","444444",
			"She","555555"};
	cout<<"输入姓名："<<endl;
	cin>>str;
	for(i=0;i<10;i++)
	if(!strcmp(str,numbers[i]))
	{
		cout<<"号码为："<<numbers[i+1]<<endl;
		break;
	}
	if(i==10) cout<<"没有找到";
	return 0;
}

/*
运行结果：
输入姓名：
Jon
号码为：333333
*/