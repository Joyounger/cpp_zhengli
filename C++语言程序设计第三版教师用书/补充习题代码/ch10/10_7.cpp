//10_7.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#define size 10
using namespace std;

int getrand(int min,int max) 
{
    int m;
    m=(max-min);
    m=min+double(rand())/RAND_MAX*m ;
    return m;
}

typedef vector < int > iArray;
typedef list <int> iList;
typedef set<int> iSet;

int main ()
{
    int x[size];
    cout<<"x[]:";
	for (int i=0;i<size;i++) 
	{
		x[i]=getrand(1,3);
        cout<<x[i]<<" ";
	}
    cout<<endl;
    cout<<"count(x,x+size,2)=";
    cout<<count(x,x+size,2)<<endl;
    cout<<"count(x+2,x+8,2)=";
    cout<<count(x+2,x+8,2)<<endl;

    iArray iVect;
    iArray::iterator ii;
    for (i=1; i<size; i++) {   iVect.push_back(getrand(2,6));    };
    cout << "iVect: ";
    for (ii=iVect.begin();ii !=iVect.end();++ii) 
        cout<<(*ii)<<" ";
    cout<<endl;
    cout<<"count of 4 in iVect=";
    cout<<count(iVect.begin(),iVect.end(),4)<<endl;

    iList::iterator iL;	
    iList list1; 
    for (i=1; i<size; i++) {      list1.push_front(getrand(3,5));    };
    cout << "list1: ";
    for (iL=list1.begin();iL !=list1.end();++iL) 
        cout<<(*iL)<<" ";
    cout<<endl;
    cout<<"count of 3 in list1=";
    cout<<count(list1.begin(),list1.end(),3)<<endl;

    iSet set1;
    iSet::iterator si;
    for (i=1; i<size; i++) {   set1.insert(getrand(1,10));    };
    cout <<"set1: ";
    for (si=set1.begin();si !=set1.end();++si) 
        cout<<(*si)<<" ";
    cout<<endl;
    cout<<"count of 5 in set1=";
    cout<<count(set1.begin(),set1.end(),5)<<endl;
	return 0;
}
/*
运行结果：
x[]:1 2 1 2 2 1 1 2 2 2
count(x,x+size,2)=6
count(x+2,x+8,2)=3
iVect: 2 5 4 4 3 2 2 3 2
count of 4 in iVect=2
list1: 4 4 3 3 3 3 3 4 3
count of 3 in list1=6
set1: 1 2 4 5 6 8
count of 5 in set1=1
*/

