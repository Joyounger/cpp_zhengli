//11_5.cpp
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
#include<process.h>

int main()  
{
    FILE *fp1;
    char str[80];
    cout<<"输入一个字符串:";
    cin.getline(str,80);

    if ((fp1=fopen("zrf.dat","w"))==NULL)
    {
       cout<<"\n不能打开文件."<<endl;
       cout<<"退出程序."<<endl;
       exit(1);   
    }
    fputs(str,fp1);         
    fputs("\n",fp1); 
    fclose(fp1);               	

    if ((fp1=fopen("zrf.dat","r"))==NULL) 
    {
       cout<<"\n不能打开文件."<<endl;
       cout<<"退出程序."<<endl;
       exit(1);   
    }
    char ch;
    while ((ch=fgetc(fp1))!=EOF)  
       cout<<ch;		
    cout<<endl;
    fclose(fp1); 
	return 0;
}
/*
运行结果：
输入一个字符串:This is a boy!
This is a boy!
*/
