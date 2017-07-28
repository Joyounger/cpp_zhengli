//6_6.cpp
#include <cmath>     
#include <iomanip>   
#include <iostream> 
using namespace std;
double SolveRoot(double (*pf)(double t), double a, double b, int n)
{ 
  double x, fa, fx, fb;
  for (int i=0; i<n; i++)
  { x = (a+b)/2;    
    fa = (*pf)(a);  
    fx = (*pf)(x);  
    fb = (*pf)(b);  
    if (fa*fx<0) b = x; 
    else a = x;          
  }
  return x;
}

double f(double x)
{ return x*x - 2;
}


int main()
{ 
  cout << setprecision(20);  
  for (int n=10; n<60; n+=5)
    cout << "SolveRoot(f,1,2," << n << ") = " << SolveRoot(f,1,2,n) << endl;
  cout << "The exact SolveRoot = " << sqrt(2) << endl;
  return 0;
}
/*
程序运行结果为：
SolveRoot(f,1,2,10) = 1.4150390625
SolveRoot(f,1,2,15) = 1.414215087890625
SolveRoot(f,1,2,20) = 1.4142141342163086
SolveRoot(f,1,2,25) = 1.4142135679721832
SolveRoot(f,1,2,30) = 1.4142135614529252
SolveRoot(f,1,2,35) = 1.4142135623551439
SolveRoot(f,1,2,40) = 1.4142135623724243
SolveRoot(f,1,2,45) = 1.414213562373078
SolveRoot(f,1,2,50) = 1.4142135623730949
SolveRoot(f,1,2,55) = 1.4142135623730949
The exact SolveRoot = 1.4142135623730951
*/