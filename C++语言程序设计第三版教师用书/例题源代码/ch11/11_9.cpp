//11_9.cpp
#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    ifstream tfile("payroll",ios_base::binary);
    if(tfile)
    {
        tfile.seekg(8);
        while (tfile.good()) 
        {// �����ļ��������ȡ����ʧ��ʱ����������
             tfile.get(ch);
             if (!ch) break;     // ���û�ж������˳�ѭ��
             cout << ch;
        }
    }
    else 
    {
         cout << "ERROR: Cannot open file 'payroll'." << endl;
     }
	 tfile.close();
}
