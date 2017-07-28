//2_9.cpp
#include<iostream>
using namespace std;
int main()
{  int i,j,n=4;
   for(i=1;i<=n;i++)	//输出前4行图案
   { for(j=1;j<=30;j++)
       cout<<' ';	//在图案左侧空30列
     for(j=1; j<=8-2*i ;j++)
       cout<<' ';
     for(j=1; j<=2*i-1 ;j++)
       cout<<'*';
     cout<<endl;
   }
   for(i=1;i<=n-1;i++)	//输出后3行图案
   { for(j=1;j<=30;j++)
       cout<<' ';	//在图案左侧空30列
     for(j=1; j<=7-2*i ;j++)
       cout<<'*';
     cout<<endl;
   }
}
