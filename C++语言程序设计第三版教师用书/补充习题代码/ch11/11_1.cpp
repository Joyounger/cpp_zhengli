//11_1.cpp
#include <iostream>
using namespace std;

int main()
{
   double x = .001234567, y = 1.886e9;
   cout << "��Ĭ�ϵĸ�ʽ��ʾ:\n"<< x << '\t' << y << '\n';
   cout.setf( ios::scientific, ios::floatfield );
   cout << "����ѧ�����ĸ�ʽ��ʾ:\n"<< x << '\t' << y << '\n';
   cout.unsetf( ios::scientific );
   cout << "Ӧ��unsetf��Ĭ�ϵĸ�ʽ��ʾ:\n"<< x << '\t' << y << '\n';
   cout.setf( ios::fixed, ios::floatfield );
   cout << "���̶��ĸ�ʽ��ʾ:\n"<< x << '\t' << y << endl;
   return 0;
}
/*
���н����
��Ĭ�ϵĸ�ʽ��ʾ:
0.00123457      1.886e+009
����ѧ�����ĸ�ʽ��ʾ:
1.234567e-003   1.886000e+009
Ӧ��unsetf��Ĭ�ϵĸ�ʽ��ʾ:
0.00123457      1.886e+009
���̶��ĸ�ʽ��ʾ:
0.001235        1886000000.000000
*/