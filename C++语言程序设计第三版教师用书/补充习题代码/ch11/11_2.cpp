//11_2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int x = 100;
   cout << setiosflags( ios::showbase )
        << "按照设置输出整数:\n"
        << x << '\n'
        << oct << x << '\n'
        << hex << x << endl;
   return 0;
}
/*
运行结果：
按照设置输出整数:
100
0144
0x64
*/