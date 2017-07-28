//6_5.cpp
#include <iostream>
using namespace std;

float* Map(float* p[], int n)
{ float* const b = new float[n];
  for (int i = 0; i < n; i++)
    b[i] = *p[n-i-1];
  return b;
}

void Disp(float a[], int n)
{ for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}

void Disp(float* a[], int n)
{ for (int i = 0; i < n; i++)
    cout << *a[i] << " ";
  cout << endl;
}

int main()
{ float a[8] = {40.0, 70.0, 20.0, 80.0, 60.0, 30.0, 90.0, 50.0};
  Disp(a, 8);
  float* p[8];
  for (int i = 0; i < 8; i++)
    p[i] = &a[i];  
  Disp(p, 8);
  float* const b = Map(p, 8);
  Disp(b, 8);
  return 0;
}
/*
程序运行结果为：
40 70 20 80 60 30 90 50
40 70 20 80 60 30 90 50
50 90 30 60 80 20 70 40
*/
