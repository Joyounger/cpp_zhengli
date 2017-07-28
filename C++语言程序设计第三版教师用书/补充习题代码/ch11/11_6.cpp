//11_6.cpp
#include<iostream>
#include<cstdio>
using namespace std;
#include<conio.h>
#include <process.h>

int main() 
{
   int i;
   char ch;
   FILE *fp1;
	if ((fp1=fopen("zrf.dat","w"))==NULL)    
	{
       cout<<"\n不能打开文件."<<endl;
       cout<<"退出程序."<<endl;
       exit(1);   
   }
   cout<<"char:";
   cin>>ch; 
	while (ch!='*') 
	{
        fputc(ch,fp1);   
        cin>>ch; 
   }
   cout<<"--------------------"<<endl;
   fclose(fp1);  

   if ((fp1=fopen("zrf.dat","r"))==NULL) 
   {
       cout<<"\n不能打开文件."<<endl;
       cout<<"退出程序."<<endl;
       exit(1);   
   }

   while ((ch=fgetc(fp1))!=EOF)  cout<<ch;		
   cout<<endl<<"--------------------"<<endl;

	for (i=-1;;i--) 
	{
        fseek(fp1,i,2);   			
        if ((ch=fgetc(fp1))!=EOF)  cout<<ch;
        else  break;
   }
   cout<<endl<<"--------------------"<<endl;

   long position;
	for (i=0;;i=i+2) 
	{
        fseek(fp1,i,0);        	
        position=ftell(fp1);
        if ((ch=fgetc(fp1))==EOF) break;     
        else  cout<<position<<" :"<<ch<<endl;
   }
   cout<<endl;
   fclose(fp1); 
   return 0;
}
/*
运行结果：
char:a b c d
*
--------------------
abcd
--------------------
dcba
--------------------
0 :a
2 :c
*/