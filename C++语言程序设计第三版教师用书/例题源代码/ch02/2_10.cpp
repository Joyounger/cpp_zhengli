//2_10.cpp
#include<iostream>
using namespace std;
int main()
{ int  i=0, j=0, n;
  cout<<"��������������(����0�����)��\n";
  cin>>n;
  while( n!=0 )
  {  if(n>0) i+=1;
     if(n<0) j+=1;
     cin>>n    ;
  }
  cout<<"������������"<<i<<"   ������������"<<j<<endl;
}
