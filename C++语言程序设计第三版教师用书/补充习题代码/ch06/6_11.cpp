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
	cout<<"����������"<<endl;
	cin>>str;
	for(i=0;i<10;i++)
	if(!strcmp(str,numbers[i]))
	{
		cout<<"����Ϊ��"<<numbers[i+1]<<endl;
		break;
	}
	if(i==10) cout<<"û���ҵ�";
	return 0;
}

/*
���н����
����������
Jon
����Ϊ��333333
*/