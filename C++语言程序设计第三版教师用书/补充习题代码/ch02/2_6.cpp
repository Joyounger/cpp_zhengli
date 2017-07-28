//2_6.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 	
  const double TOLERANCE = 6e-8;
  double x = 2.0;
  while (fabs(x*x - 2.0) > TOLERANCE)
  { cout << x << endl;
    x = (x + 2.0/x)/2.0;  
  }
  cout << "x = " << x << ", x*x = " << x*x << endl;
  return 0;
}
/*
程序运行结果为：
2
1.5
1.41667
1.41422
x = 1.41421, x*x = 2
*/