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
    cout<<"����һ���ַ���:";
    cin.getline(str,80);

    if ((fp1=fopen("zrf.dat","w"))==NULL)
    {
       cout<<"\n���ܴ��ļ�."<<endl;
       cout<<"�˳�����."<<endl;
       exit(1);   
    }
    fputs(str,fp1);         
    fputs("\n",fp1); 
    fclose(fp1);               	

    if ((fp1=fopen("zrf.dat","r"))==NULL) 
    {
       cout<<"\n���ܴ��ļ�."<<endl;
       cout<<"�˳�����."<<endl;
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
���н����
����һ���ַ���:This is a boy!
This is a boy!
*/
