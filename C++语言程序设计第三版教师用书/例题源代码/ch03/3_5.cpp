//3_5.cpp
#include <iostream>
#include<cmath>  //头文件cmath中具有对C++标准库中数学函数的说明
using namespace std;
int main()
{
  double k,r,s;
  double tsin(double x);
  cout<<"r=";
  cin>>r;
  cout<<"s=";
  cin>>s;
  if (r*r<=s*s)
    k=sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s))  ;
  else
    k=tsin(r*s)/2;
  cout<<k<<endl;
}

double tsin(double x)
{
  double p=0.000001,g=0,t=x;
  int n=1;
  do {
     g=g+t;
     n++;
     t=-t*x*x/(2*n-1)/(2*n-2);
  }while(fabs(t)>=p); 
  return g;
}
