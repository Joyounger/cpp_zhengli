//4_4.cpp
#include <iostream>
using namespace std;

class zrf_Ratio
{ public:
    void assign(int, int);
    double convert();
    void invert();
    void print();
  private:
    int num, den;
};
void zrf_Ratio::assign(int num, int denom)
{ num = num;
  den = denom;
}

double zrf_Ratio::convert()
{ return double(num)/den;
}

void zrf_Ratio::invert()
{ int temp = num;
  num = den;
  den = temp;
}

void zrf_Ratio::print()
{ cout << num << '/' << den;
}

int main()
{ zrf_Ratio z;
  z.assign(22,7);
  cout << "z = ";
  z.print();
  cout << " = " << z.convert() << endl;
  z.invert();
  cout << "1/z = ";  
  z.print();
  cout << endl;
  return 0;
}
/*
程序运行结果为：
z = -858993460/7 = -1.22713e+008
1/z = 7/-858993460
*/