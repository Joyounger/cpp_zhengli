//3_9.cpp
#include<iostream>
using namespace std;
int main()
{
   int n,k;
   int comm(int n, int k);
   cin>>n>>k;
   cout<<comm(n,k) <<endl;
}
int comm(int n, int k)
{
   if (  k>n  )
     return 0;
   else if(  n==k||k==0  )
     return 1;
   else
     return  comm(n-1,k)+comm(n-1,k-1);
}
