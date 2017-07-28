//3_2.cpp
#include <iostream>  
using namespace std;

long zrf_gcd(long m,long n)
{ 
  if (m < n) swap(m,n);
  while (n>0)
  { int r = m%n;
    m = n;
    n = r;
  }
  return m;
}

long zrf_lcm(long m,long n)
{ 
  return m*n/zrf_gcd(m,n);
}

int main()
{ 
  int m, n;
  cout << "��������������: ";
  cin >> m >> n;
  cout << "zrf_lcm(" << m << "," << n << ") = " << zrf_lcm(m,n) << endl;
  return 0;
}
/*
�������н��Ϊ��
��������������: 24 48
zrf_lcm(24,48) = 48
*/