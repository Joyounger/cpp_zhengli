//3_1.cpp
#include <cassert>   
#include <iostream>  
using namespace std;
long zrf_gcd(long,long);

int main()
{ int m, n;
  cout << "输入两个正整数: ";
  cin >> m >> n;
  cout << "zrf_gcd(" << m << "," << n << ") = " << zrf_gcd(m,n) << endl;
  return 0;
}

long zrf_gcd(long m, long n)
{ 
  if (m<n) swap(m,n);
  assert(n >= 0);
  while (n>0)
  { long r=m%n;
    m = n;
    n = r;
  }
  return m;
}
/*
程序运行结果为：
输入两个正整数: 48 24
zrf_gcd(48,24) = 24
*/