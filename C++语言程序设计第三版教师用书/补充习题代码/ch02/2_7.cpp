//2_7.cpp
#include <iostream>
using namespace std;

int main()
{  int m, n, r;
  cout << "��������������: ";
  cin >> m >> n;
  if (m < n) { int temp = m; m = n; n = temp; }    
  cout << m << " �� " << n << "�����Լ���� ";
  while (n > 0)
  { r = m % n;
    m = n;
    n = r;
  }
  cout << m << endl;
  return 0;
}
/*
�������н��Ϊ��
��������������: 4 8
8 �� 4�����Լ���� 4
*/