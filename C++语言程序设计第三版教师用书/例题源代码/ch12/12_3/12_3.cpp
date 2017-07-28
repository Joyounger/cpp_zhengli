//12_3.cpp
#include<iostream>
#include<fstream> //包含文件流头文件
#include"employee.h"
using namespace std;

class FileException {   //文件异常处理类
public:
   FileException() 
      : message( "File is not created!" ) { }
   const char *what() const { return message; }
private:
   const char *message;
};

int main()
{
	ifstream infile("employee.txt",ios::in);	//创建一个输入文件流对象
	try {  
		if (!infile)
		  throw FileException();  //抛出异常
    }
    catch ( FileException fe ) // 捕捉异常
{ 
       cout<<fe.what()<<endl;  //输出异常
	    exit(0);   //退出程序
	 }
	cout<<"从文件中读取信息并显示如下:"<<endl;
	//从文件读入人员信息
	char line[101];
	for(int i=0;i<4;i++)
	{
	   infile.getline(line,100);
	   cout<<line<<endl;
	}
	infile.close();
	return 0;
}
