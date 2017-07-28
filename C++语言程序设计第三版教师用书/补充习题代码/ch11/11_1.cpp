//11_1.cpp
#include <iostream>
using namespace std;

int main()
{
   double x = .001234567, y = 1.886e9;
   cout << "按默认的格式显示:\n"<< x << '\t' << y << '\n';
   cout.setf( ios::scientific, ios::floatfield );
   cout << "按科学计数的格式显示:\n"<< x << '\t' << y << '\n';
   cout.unsetf( ios::scientific );
   cout << "应用unsetf后按默认的格式显示:\n"<< x << '\t' << y << '\n';
   cout.setf( ios::fixed, ios::floatfield );
   cout << "按固定的格式显示:\n"<< x << '\t' << y << endl;
   return 0;
}
/*
运行结果：
按默认的格式显示:
0.00123457      1.886e+009
按科学计数的格式显示:
1.234567e-003   1.886000e+009
应用unsetf后按默认的格式显示:
0.00123457      1.886e+009
按固定的格式显示:
0.001235        1886000000.000000
*/