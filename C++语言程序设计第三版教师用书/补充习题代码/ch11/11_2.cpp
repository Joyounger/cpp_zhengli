//11_2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int x = 100;
   cout << setiosflags( ios::showbase )
        << "���������������:\n"
        << x << '\n'
        << oct << x << '\n'
        << hex << x << endl;
   return 0;
}
/*
���н����
���������������:
100
0144
0x64
*/