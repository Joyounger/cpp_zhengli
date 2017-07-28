//6_4.cpp
#include <cassert>   
#include <cstdlib>   
#include <ctime>     
#include <iomanip>   
#include <iostream>  
using namespace std;

const SIZE=20;
typedef double Matrix[SIZE][SIZE];

double MinRow(Matrix,int,int);
double MaxCol(Matrix,int,int);

void load(Matrix m, int n)
{ assert(n > 0 && n < SIZE);
  unsigned seed = time(NULL);         
  srand(seed);                      
  for (int i=0; i<SIZE; i++)
    for (int j=0; j<SIZE; j++)
      if (i<n && j<n) m[i][j] = double(rand())/RAND_MAX;
      else m[i][j] = 0.0;
}

void Disp(Matrix m, int n)
{ assert(n > 0 && n < SIZE);
  for (int i=0; i<n; i++)
  { for (int j=0; j<n; j++)
      cout << "\t" << setw(8) << m[i][j] << " ";
    cout << "\t" << setw(8) << MinRow(m,n,i) << endl;
  }
  for (int j=0; j<n; j++)
    cout << "\t" << setw(8) << MaxCol(m,n,j);
  cout << endl;
}

double MinRow(Matrix m, int n, int i)
{ assert(n>0 && n < SIZE && i>=0 && i<n);
  double min=m[i][0];
  for (int j=1; j<n; j++)
    if (m[i][j]<min) min = m[i][j];
  return min;
}

double MaxCol(Matrix m, int n, int j)
{ assert(n>0 && n < SIZE && j>=0 && j<n);
  double max=m[0][j];
  for (int i=1; i<n; i++)
    if (m[i][j]>max) max = m[i][j];
  return max;
}

double minimax(Matrix m, int n)
{ assert(n>0 && n < SIZE);
  double minimax=MaxCol(m,n,0);
  for (int j=1; j<n; j++)
  { double mm = MaxCol(m,n,j);
    if (mm<minimax) minimax = mm;
  }
  return minimax;
}

double maximin(Matrix m, int n)
{ assert(n>0 && n < SIZE);
  double maximin=MinRow(m,n,0);
  for (int i=1; i<n; i++)
  { double mm = MinRow(m,n,i);
    if (mm>maximin) maximin = mm;
  }
  return maximin;
}

int main()
{ int n=3;
  Matrix m;
  load(m,n);
  Disp(m,n);
  cout << "minimax = min of col maxs = " << minimax(m,n) << endl;
  cout << "maximin = max of row mins = " << maximin(m,n) << endl;
  return 0;
}
/*
运行结果：
        0.192541         0.33491        0.241188        0.192541
        0.387005        0.261483        0.485183        0.261483
        0.424604        0.819178        0.363628        0.363628
        0.424604        0.819178        0.485183
minimax = min of col maxs = 0.424604
maximin = max of row mins = 0.363628
*/