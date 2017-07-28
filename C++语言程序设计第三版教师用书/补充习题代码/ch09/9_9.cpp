//9_9.cpp
#include <iostream> 
using namespace std;

int compare(char *x,char *y){	return (!strcmp(x,y));}

template <class T>
int compare(T x, T y){	return x==y;}
 
template <class T> class Exam { 
  T x; 
public: 
	Exam(){};
	Exam(T s) {x=s;}
	void disp() {cout<<x<<endl;}
	int operator == (Exam<T> s)
	{	return compare(x,s.x);  }
};

int main() 
{ 
  Exam <char *> str1("abc"),str2("abc"); 
  cout << (str1==str2) << "\n"; 
  Exam <int> i1(10),i2(20); 
  cout << (i1==i2) << "\n"; 
  return 0; 
}

/*
运行结果：
1
0
*/