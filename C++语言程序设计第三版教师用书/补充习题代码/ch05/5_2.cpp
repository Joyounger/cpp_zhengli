//5_2.cpp
#include <iostream>
using namespace std;

class Width
{ 
public:
    Width() { ++count; }
    ~Width() { --count; }
    int numWidths() { return count; }
private:
	static int count;
};

int Width::count = 0;

int main()
{ Width w, x;
  cout << "�����ǣ� " << w.numWidths() << " Widths.\n";
  { Width w, x, y, z;
    cout << "�����ǣ� " << w.numWidths() << " Widths.\n";
  }
  cout << "�����ǣ� " << w.numWidths() << " Widths.\n";
  Width y;
  cout << "�����ǣ� " << w.numWidths() << " Widths.\n";
  return 0;
}
/*
�������н��Ϊ��
�����ǣ� 2 Widths.
�����ǣ� 6 Widths.
�����ǣ� 2 Widths.
�����ǣ� 3 Widths.
*/
