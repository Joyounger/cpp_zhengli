//2_7.cpp
#include <iostream>
using namespace std;

int main()
{  int m, n, r;
  cout << "输入两个正整数: ";
  cin >> m >> n;
  if (m < n) { int temp = m; m = n; n = temp; }    
  cout << m << " 和 " << n << "的最大公约数是 ";
  while (n > 0)
  { r = m % n;
    m = n;
    n = r;
  }
  cout << m << endl;
  return 0;
}
/*
程序运行结果为：
输入两个正整数: 4 8
8 和 4的最大公约数是 4
*/