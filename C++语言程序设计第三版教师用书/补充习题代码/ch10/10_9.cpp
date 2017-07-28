//10_9.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#define ARRAY_SIZE 15
using namespace std;
typedef vector<int > iVector ;

void dispArray(int x[],int size) 
{
    for(int i=0;i<size;i++) cout<<x[i]<<" ";
    cout<<endl;
}

void dispVector(iVector v,char *name)
{
   iVector::iterator pIterator;
   cout<<name<<": ";
   for (pIterator=v.begin();pIterator!=v.end();++pIterator)
	{  cout<<(*pIterator)<<" ";   }
   cout<<endl;
}

int getrand(int min,int max) 
{
    int m;
    m=(max-min);
    m=min+double(rand())/RAND_MAX*m ;
    return m;
}

int main ()
{
   int i;
   int x[ARRAY_SIZE];
   for (i=0;i<ARRAY_SIZE;i++) 
	{  x[i]=getrand(1,20);    }
   cout<<"x[]:";
   dispArray(x,ARRAY_SIZE);
   sort(x,x+ARRAY_SIZE);
   cout<<"sort(x,x+ARRAY_SIZE):"<<endl;
   dispArray(x,ARRAY_SIZE);

   int y[ARRAY_SIZE];
   for (i=0;i<ARRAY_SIZE;i++) 
	{	y[i]=getrand(1,30) ;	}
   cout<<"y[]:";
   dispArray(y,ARRAY_SIZE);
   partial_sort(y+2,y+7,y+ARRAY_SIZE);
   cout<<"partial_sort from y+2 to y+7):"<<endl;
   dispArray(y,ARRAY_SIZE);

	iVector Numbers1,Numbers2;
   for(i=0;i<15;i++) 
	{
        Numbers1.push_back(getrand(1,30));
        Numbers2.push_back(getrand(1,30));
	}
	dispVector(Numbers1,"Numbers1");
	dispVector(Numbers2,"Numbers2");

   sort(Numbers1.begin(),Numbers1.end());
	cout<<"After sort():"<<endl;
	dispVector(Numbers1,"Numbers1");

   partial_sort(Numbers2.begin()+2,Numbers2.begin()+7,Numbers2.end());
 	cout<<"After partial_sort():"<<endl;
 	dispVector(Numbers2,"Numbers2");  
	return 0;
}
/*
运行结果：
x[]:1 11 4 16 12 10 7 18 16 15 4 17 14 10 6
sort(x,x+ARRAY_SIZE):
1 4 4 6 7 10 10 11 12 14 15 16 16 17 18
y[]:1 3 11 5 5 29 13 4 1 1 11 16 17 18 18
partial_sort from y+2 to y+7):
1 3 1 1 4 5 5 29 13 11 11 16 17 18 18
Numbers1: 5 14 2 23 16 26 28 16 14 26 23 29 18 8 25
Numbers2: 20 11 18 24 9 22 27 5 7 7 25 29 12 9 1
After sort():
Numbers1: 2 5 8 14 14 16 16 18 23 23 25 26 26 28 29
After partial_sort():
Numbers2: 20 11 1 5 7 7 9 27 24 22 25 29 18 12 9
*/