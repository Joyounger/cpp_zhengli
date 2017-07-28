//3_4.cpp
#include <iostream>
using namespace std;
int main()
{
  bool symm(long n);
  long m;
  for(m=11; m<1000; m++)
  if (symm(m)&&symm(m*m)&&symm(m*m*m)) 
    cout<<"m="<<m<<"  m*m="<<m*m<<"  m*m*m="<<m*m*m<<endl;
}

bool symm(long n)
{
  long i, m;
  i=n ;  m=0 ;
  while(i)
  {
   m=m*10+i%10;
   i=i/10   ;
  }
  return ( m==n );
}
