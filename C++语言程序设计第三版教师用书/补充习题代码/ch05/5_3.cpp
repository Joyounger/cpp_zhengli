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
{ cout << "�����ǣ� " << Width::numWidths () << " Widths.\n";
  Width w, x;
  cout << "�����ǣ� " << Width::numWidths () << " Widths.\n";
  { Width w, x, y, z;
    cout << "�����ǣ� " << Width::numWidths () << " Widths.\n";
  }
  cout << "�����ǣ� " << Width::numWidths () << " Widths.\n";
  Width y;
  cout << "�����ǣ� " << Width::numWidths () << " Widths.\n";
  return 0;
}
/*
�������н��Ϊ��
�����ǣ� 0 Widths.
�����ǣ� 2 Widths.
�����ǣ� 6 Widths.
�����ǣ� 2 Widths.
�����ǣ� 3 Widths.
*/
