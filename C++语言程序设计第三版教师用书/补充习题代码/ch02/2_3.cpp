//2_3.cpp
#include <iostream> 
using namespace std;

int main()
{ 
  double x = 1000/3.0;						
  cout << "x = " << x << endl;  
  double y = x - 333.0;						
  cout << "y = " << y << endl; 
  double z = 3*y - 1.0;						
  cout << "z = " << z << endl; 
  if (z == 0) cout << "z == 0.\n";
  else cout << "z 不等于 0.\n";        
  return 0;
}
/*
运行结果：
x = 333.333
y = 0.333333
z = -5.68434e-014
z 不等于 0.
*/