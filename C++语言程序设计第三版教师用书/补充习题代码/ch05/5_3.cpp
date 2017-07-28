//5_3.cpp
#include <iostream>
using namespace std;

class Width
{ public:
    Width() { ++count; }
    ~Width() { --count; }
    static int numWidths () { return count; }
  private:
    static int count;
};

int Width::count = 0;

int main()
{ cout << "现在是： " << Width::numWidths () << " Widths.\n";
  Width w, x;
  cout << "现在是： " << Width::numWidths () << " Widths.\n";
  { Width w, x, y, z;
    cout << "现在是： " << Width::numWidths () << " Widths.\n";
  }
  cout << "现在是： " << Width::numWidths () << " Widths.\n";
  Width y;
  cout << "现在是： " << Width::numWidths () << " Widths.\n";
  return 0;
}
/*
程序运行结果为：
现在是： 0 Widths.
现在是： 2 Widths.
现在是： 6 Widths.
现在是： 2 Widths.
现在是： 3 Widths.
*/
