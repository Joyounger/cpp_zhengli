//6_7.cpp
#include <cmath>     
#include <iostream>  
using namespace std;
const double E=2.718281828459045;
const double P=3.141592653589793;
const double P2=P/2;

double Zrf_Trap(double (*pf)(double t), double a, double b, int n)
{ 
  double sum = (*pf)(a)+(*pf)(b), h=(b-a)/n, x;
  int i;
  for (x=a, i=1; i<n; x+=h, i++)
    sum += 2*(*pf)(x);
  return sum*h/2;
}


int main()
{ cout << "Zrf_Trap(sqrt,1,4,100)   = " << Zrf_Trap(sqrt,1,4,100) << endl;
  cout << "Zrf_Trap(sqrt,1,4,1000)  = " << Zrf_Trap(sqrt,1,4,1000) << endl;
  cout << "Zrf_Trap(sqrt,1,4,10000) = " << Zrf_Trap(sqrt,1,4,10000) << endl;
  cout << "The exact integral   = " << 14.0/3 << endl;
  cout << "Zrf_Trap(cos,0,P2,100)   = " << Zrf_Trap(cos,0,P2,100) << endl;
  cout << "Zrf_Trap(cos,0,P2,1000)  = " << Zrf_Trap(cos,0,P2,1000) << endl;
  cout << "Zrf_Trap(cos,0,P2,10000) = " << Zrf_Trap(cos,0,P2,10000) << endl;
  cout << "The exact integral   = " << 1 << endl;
  cout << "Zrf_Trap(exp,0,1,100)    = " << Zrf_Trap(exp,0,1,100) << endl;
  cout << "Zrf_Trap(exp,0,1,1000)   = " << Zrf_Trap(exp,0,1,1000) << endl;
  cout << "Zrf_Trap(exp,0,1,10000)  = " << Zrf_Trap(exp,0,1,10000) << endl;
  cout << "The exact integral   = " << E - 1 << endl;
  cout << "Zrf_Trap(log,1,E,100)    = " << Zrf_Trap(log,1,E,100) << endl;
  cout << "Zrf_Trap(log,1,E,1000)   = " << Zrf_Trap(log,1,E,1000) << endl;
  cout << "Zrf_Trap(log,1,E,10000)  = " << Zrf_Trap(log,1,E,10000) << endl;
  cout << "The exact integral   = " << 1 << endl;
  return 0;
}
/*
程序运行结果为：
Zrf_Trap(sqrt,1,4,100)   = 4.63687
Zrf_Trap(sqrt,1,4,1000)  = 4.66367
Zrf_Trap(sqrt,1,4,10000) = 4.66637
The exact integral   = 4.66667
Zrf_Trap(cos,0,P2,100)   = 1.01544
Zrf_Trap(cos,0,P2,1000)  = 1.00157
Zrf_Trap(cos,0,P2,10000) = 1.00016
The exact integral   = 1
Zrf_Trap(exp,0,1,100)    = 1.70138
Zrf_Trap(exp,0,1,1000)   = 1.71657
Zrf_Trap(exp,0,1,10000)  = 1.71811
The exact integral   = 1.71828
Zrf_Trap(log,1,E,100)    = 0.982911
Zrf_Trap(log,1,E,1000)   = 0.998283
Zrf_Trap(log,1,E,10000)  = 0.999828
The exact integral   = 1
*/