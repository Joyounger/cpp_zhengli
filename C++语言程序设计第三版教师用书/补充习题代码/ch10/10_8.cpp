//10_8.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#define ARRAY_SIZE 10
using namespace std;
typedef vector < int > iArray;

void dispArray(int x[],int size) 
{
    for(int i=0;i<size;i++)   cout<<x[i]<<" ";
    cout<<endl;
}

void dispVector(iArray v)
{
    iArray::iterator theIterator;
	for (theIterator=v.begin();theIterator!=v.end();++theIterator)
	{  cout<<(*theIterator)<<" ";   }
   cout<<endl;
}

int main ()
{
	int i,value,*p;
   int x[ARRAY_SIZE]={1,3,5,7,9,2,4,6,8,10};
   cout << "x[]: ";
   dispArray(x,ARRAY_SIZE);

	for(i=0;i<=2;i++) 
	{
		cout<<"Input a value=";
		cin>>value;
		p=find(x,x+ARRAY_SIZE,value);
		if (p != x + ARRAY_SIZE)  
		{  
			cout << "The First matches " << value;
			cout<< " is at :" << p - x<< endl;
		}
		else  
		{                               
			cout << "The sequence woithout any elements with value";
			cout << value << endl ;
		}
	}

    iArray iVector;
	for (i=1; i<=10; i++) 
	{  iVector.push_back(i);  }

   cout << "iVector: ";
   dispVector(iVector);

   iArray::iterator pos;
	for (i=0;i<=2;i++) 
	{
		cout<<"value=";
		cin>>value;
      pos=find(iVector.begin(),iVector.end(),value);
      if (pos != iVector.end())  
		{  
           cout << "The First matches " << value;
           cout<< " is at location " <<pos - iVector.begin()<< endl;
		}
      else  
		{                                
           cout << "The sequence without any elements with value";
           cout << value << endl ;
		}
	}
	return 0;
}
/*
运行结果：	
x[]: 1 3 5 7 9 2 4 6 8 10
Input a value=5
The First matches 5 is at :2
Input a value=6
The First matches 6 is at :7
Input a value=0
The sequence woithout any elements with value0
iVector: 1 2 3 4 5 6 7 8 9 10
value=9
The First matches 9 is at location 8
value=2
The First matches 2 is at location 1
value=3
The First matches 3 is at location 2
*/
