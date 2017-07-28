//2_2.cpp
#include <iostream>  
using namespace std;

int main()
{ 
  int n=1000;
  cout << "n = " << n << endl;
  n *= 1000; 
  cout << "n = " << n << endl;
  n *= 1000; 
  cout << "n = " << n << endl;
  n *= 1000; 
  cout << "n = " << n << endl;
  return 0;
}
/*
运行结果：n = 1000
n = 1000000
n = 1000000000
n = -727379968
*/
