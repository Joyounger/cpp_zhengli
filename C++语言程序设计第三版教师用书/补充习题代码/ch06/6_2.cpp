//6_2.cpp
#include <cassert>   
#include <iostream>  
using namespace std;

void Disp(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void append (int a[], int m, int b[], int n)
{ for (int j=0; j<n; j++)  
    a[m+j] = b[j];
}

int main()
{ 
  int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  int b[] = { 20, 30, 40, 50, 60, 70, 80, 90 };
  Disp(a,8);
  cout << "After append (a,5,b,3):" << endl;
  append (a,5,b,3);
  Disp(a,8);
  return 0;
}
/*
程序运行结果：
22, 33, 44, 55, 66, 77, 88, 99
After append (a,5,b,3):
22, 33, 44, 55, 66, 20, 30, 40
*/