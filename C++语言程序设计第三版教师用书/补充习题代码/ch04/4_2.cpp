//4_2.cpp
#include <cmath>
#include <iostream>
using namespace std;

class Time
{ public:
	  Time(int h=0, int m=0, int s=0): hr(h), min(m), sec(s) 
	  { norm(); }
	  int hours() 
	  { return hr; }	
	  int minutes() 
	  { return min; }
	  int seconds() 
	  { return sec; }
	  void adv(int =0, int =0, int =1);
	  void reset(int =0, int =0, int =0);
	  void print() 
	  { cout << hr << ":" << min << ":" << sec; }
  private:
	  int hr, min, sec;
	  void norm();
};

void Time::norm()
{ min += sec/60;
  hr += min/60;
  hr %= 24;
  min %= 60;
  sec %= 60;
}

void Time::adv(int h, int m, int s)
{ hr += h;
  min += m;
  sec += s;
  norm();
}

void Time::reset(int h, int m, int s)
{ hr = h;
  min = m;
  sec = s;
  norm();
}

int main()
{ Time t(12,52,01);
  t.print();
  cout << endl;
  t.adv();
  t.print();
  cout << endl;
  t.adv(3,5,2);
  t.print();
  cout << endl;
  return 0;
}
/*
程序运行结果为：
12:52:1
12:52:2
15:57:4
*/