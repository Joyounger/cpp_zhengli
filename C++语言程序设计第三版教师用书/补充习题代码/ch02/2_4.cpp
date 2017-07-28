//2_4.cpp
#include <iostream>
using namespace std;

int main()
{ int x, y;
  char opr;
  cout << "输入两个整数: ";
  cin >> x >> y;
  cout << "输入运算符: ";
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
程序运行结果为：
输入两个整数: 5 6
输入运算符: +
11
*/