//5_1.cpp
#include <iostream>
using namespace std;

class Width
{ 
public:
    Width() { ++count; }
    ~Width() { --count; }
    static int count;
};

int Width::count = 0;

int main()
{  Width w, x;
  cout << "�����ǣ� " << w.count << " Widths.\n";
  { Width w, x, y, z;
    cout << "�����ǣ� " << w.count << " Widths.\n";
  }
  cout << "�����ǣ� " << w.count << " Widths.\n";
  Width y;
  cout << "�����ǣ� " << w.count << " Widths.\n";
  return 0;
}
/*
�������н��Ϊ��
�����ǣ� 2 Widths.
�����ǣ� 6 Widths.
�����ǣ� 2 Widths.
�����ǣ� 3 Widths.
*/
