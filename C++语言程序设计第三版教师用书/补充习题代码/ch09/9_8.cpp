//9_8.cpp
#include <iostream> 
using namespace std; 
template <class T1, class T2> class ZrfClass 
{ 
  T1 i; 
  T2 j; 
public: 
  ZrfClass(T1 a, T2 b) { i = a; j = b; } 
  void show() { cout << i << ' ' << j << '\n'; } 
};
int main() 
{ 
  ZrfClass<int, double> ob1(10, 0.23); 
  ZrfClass<char, char *> ob2('X', "我创建的类"); 
  ob1.show(); 
  ob2.show(); 
  return 0; 
}

/*
运行结果：
10 0.23
X 我创建的类
*/