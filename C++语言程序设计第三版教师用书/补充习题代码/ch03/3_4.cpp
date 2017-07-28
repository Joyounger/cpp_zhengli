//3_4.cpp
#include <iomanip>   
#include <iostream>  
using namespace std;
long zrf_comb(int n, int k)
{ if (n < 0 || k < 0 || k > n) return 0;
  long c = 1;
  for (int i=1; i<=k; i++, n--)
    c = c*n/i;
  return c;
}

int main()
{ const m = 13;
  int j;
  for (int i = 0; i < m; i++)
  { for (j = 1; j < m-i; j++)
      cout << setw(2) << "";  
    for (j = 0; j <= i; j++)
      cout << setw(4) << zrf_comb(i,j);
    cout << endl;
  }
  return 0;
}
/*
程序运行结果为：
                           1
                         1   1
                       1   2   1
                     1   3   3   1
                   1   4   6   4   1
                 1   5  10  10   5   1
               1   6  15  20  15   6   1
             1   7  21  35  35  21   7   1
           1   8  28  56  70  56  28   8   1
         1   9  36  84 126 126  84  36   9   1
       1  10  45 120 210 252 210 120  45  10   1
     1  11  55 165 330 462 462 330 165  55  11   1
   1  12  66 220 495 792 924 792 495 220  66  12   1
*/