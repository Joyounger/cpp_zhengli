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
���н����n = 1000
n = 1000000
n = 1000000000
n = -727379968
*/
