//11_4.cpp
#include <iostream>
using namespace std;

int main()
{
   char c;
   cout << "ÊäÈëÇ°, cin.eof() ÊÇ " << cin.eof()<< "\nÊäÈëÒ»¸ö¾ä×Ó:\n";
   while ( ( c = cin.get() ) != EOF )
      cout.put( c );
   cout << "\nÏµÍ³ÖÐEOF ÊÇ: " << c;
   cout << "\nÊäÈëºó, cin.eof() ÊÇ " << cin.eof() << endl;
   return 0;
}
/*
ÔËÐÐ½á¹û£º
ÊäÈëÇ°, cin.eof() ÊÇ 0
ÊäÈëÒ»¸ö¾ä×Ó:
This is a boy!
This is a boy!
^Z

ÏµÍ³ÖÐEOF ÊÇ: ÿ
ÊäÈëºó, cin.eof() ÊÇ 1
*/