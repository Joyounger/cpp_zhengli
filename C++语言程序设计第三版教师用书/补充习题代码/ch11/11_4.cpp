//11_4.cpp
#include <iostream>
using namespace std;

int main()
{
   char c;
   cout << "����ǰ, cin.eof() �� " << cin.eof()<< "\n����һ������:\n";
   while ( ( c = cin.get() ) != EOF )
      cout.put( c );
   cout << "\nϵͳ��EOF ��: " << c;
   cout << "\n�����, cin.eof() �� " << cin.eof() << endl;
   return 0;
}
/*
���н����
����ǰ, cin.eof() �� 0
����һ������:
This is a boy!
This is a boy!
^Z

ϵͳ��EOF ��: �
�����, cin.eof() �� 1
*/