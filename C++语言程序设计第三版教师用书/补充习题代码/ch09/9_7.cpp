//9_7.cpp
#include <iostream> 
using namespace std; 
template <class T> class ZrfClass 
{ 
  T x, y; 
public: 
  ZrfClass(T a, T b) {  x = a;     y = b; } 
  T div() { return x/y; } 
}; 
 
int main() 
{ 
  ZrfClass<double> d_ob(10.0, 3.0 ); 
  cout << "double 类型除法运算: " << d_ob.div() << "\n"; 
  ZrfClass<int> i_ob(10, 3); 
  cout << "integer 类型除法运算: " << i_ob.div() << "\n"; 
  return 0; 
}

/*
运行结果：
double 类型除法运算: 3.33333
integer 类型除法运算: 3
*/