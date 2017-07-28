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
        {// 遇到文件结束或读取操作失败时结束读操作
             tfile.get(ch);
             if (!ch) break;     // 如果没有读到则退出循环
             cout << ch;
        }
    }
    else 
    {
         cout << "ERROR: Cannot open file 'payroll'." << endl;
     }
	 tfile.close();
}
