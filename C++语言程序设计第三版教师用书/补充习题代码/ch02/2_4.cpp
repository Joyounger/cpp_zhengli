//2_4.cpp
#include <iostream>
using namespace std;

int main()
{ int x, y;
  char opr;
  cout << "������������: ";
  cin >> x >> y;
  cout << "���������: ";
  cin >> opr;
  switch (opr)
  { case '+': cout << x + y << endl;  break;
    case '-': cout << x - y << endl;  break;
    case '*': cout << x * y << endl;  break;
    case '/': cout << x / y << endl;  break;
    case '%': cout << x % y << endl;  break;
  }
  return 0;
}
/*
�������н��Ϊ��
������������: 5 6
���������: +
11
*/