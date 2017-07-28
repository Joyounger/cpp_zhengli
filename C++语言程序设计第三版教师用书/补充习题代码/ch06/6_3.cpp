//6_3.cpp
#include <iomanip>   
#include <iostream>  
using namespace std;

const int SIZE = 200;
void sieve(bool isPrime[], int n)
{ 
  for (int i=2; i<n; i++)
    isPrime[i] = true;      
  for (int p=2; p<=n/2; p++)
    for (int m=2*p; m<n; m += p)
      isPrime[m] = false;   
}

void Disp(bool a[], int n)
{ 
  for (int i=1; i<n; i++)
    if (a[i]) cout << setw(3) << i;
    else cout << setw(3) << (i%20==0?'\n':' ');
}

int main()
{ 
  bool isPrime[SIZE] = {0};
  sieve(isPrime,SIZE);
  Disp(isPrime,SIZE);
  return 0;
}
/*
程序运行结果：
     2  3     5     7          11    13          17    19
       23                29    31                37
 41    43          47                53                59
 61                67          71    73                79
       83                89                      97
101   103         107   109         113
                  127         131               137   139
                        149   151               157
      163         167               173               179
181                           191   193         197   199
*/