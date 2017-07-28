//12_3.cpp
#include<iostream>
#include<fstream> //�����ļ���ͷ�ļ�
#include"employee.h"
using namespace std;

class FileException {   //�ļ��쳣������
public:
   FileException() 
      : message( "File is not created!" ) { }
   const char *what() const { return message; }
private:
   const char *message;
};

int main()
{
	ifstream infile("employee.txt",ios::in);	//����һ�������ļ�������
	try {  
		if (!infile)
		  throw FileException();  //�׳��쳣
    }
    catch ( FileException fe ) // ��׽�쳣
{ 
       cout<<fe.what()<<endl;  //����쳣
	    exit(0);   //�˳�����
	 }
	cout<<"���ļ��ж�ȡ��Ϣ����ʾ����:"<<endl;
	//���ļ�������Ա��Ϣ
	char line[101];
	for(int i=0;i<4;i++)
	{
	   infile.getline(line,100);
	   cout<<line<<endl;
	}
	infile.close();
	return 0;
}
