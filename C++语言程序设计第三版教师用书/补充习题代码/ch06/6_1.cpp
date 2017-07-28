//6_1.cpp
#include <iostream>  
#include <cassert> 
using namespace std;
void Disp(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void rotate(int a[], int n, int k)
{ const int MAXOFFSET=100;
  assert(k < MAXOFFSET);
  int temp[MAXOFFSET];
  if (k > 0)
  { for (int j=0; j<k; j++)  
      temp[j] = a[n-k+j];
    for (int i=n-1; i>=k; i--)  
      a[i] = a[i-k];
    for (i=0; i<k; i++)  
      a[i] = temp[i];
  }
  if (k < 0)
  { for (int j=0; j<-k; j++)  
      temp[j] = a[j];
    for (int i=0; i<n+k; i++)  
      a[i] = a[i-k];
    for (i=n+k; i<n; i++)  
      a[i] = temp[i-n-k];
  }
}

int main()
{ 
  int a[] = { 20, 30, 40, 50, 60, 70, 80, 90 };
  Disp(a,8);
  cout << "rotate(a,8,3):" << endl;
  rotate(a,8,3);
  Disp(a,8);
  cout << "rotate(a,8,-3):" << endl;
  rotate(a,8,-3);
  Disp(a,8);
  cout << "rotate(a,8,-5):" << endl;
  rotate(a,8,-5);
  Disp(a,8);
  return 0;
}
/*
程序运行结果：
20, 30, 40, 50, 60, 70, 80, 90
rotate(a,8,3):
70, 80, 90, 20, 30, 40, 50, 60
rotate(a,8,-3):
20, 30, 40, 50, 60, 70, 80, 90
rotate(a,8,-5):
70, 80, 90, 20, 30, 40, 50, 60
*/