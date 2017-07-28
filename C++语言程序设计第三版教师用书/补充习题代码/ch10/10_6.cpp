//10_6.cpp
#include <iostream>
#include <list>
#include <numeric>
using namespace std;
typedef list<int> iList;

int main()
{
    iList listOne;
    iList::iterator i;
    iList::reverse_iterator ir;

    listOne.push_front (20);
    listOne.push_front (10);
    listOne.push_back (30);
    listOne.push_back (40);

    for (i = listOne.begin(); i != listOne.end(); ++i)
        cout << *i << " ";
    cout << endl;
    for (ir =listOne.rbegin();ir!=listOne.rend(); ++ir) 
        cout << *ir << " ";
    cout << endl;

	for (i = listOne.begin(); i != listOne.end(); ++i) 
	{
        cout<<"listOne  :";
        cin>>(*i);
    }
    for (i = listOne.begin(); i != listOne.end(); ++i)
        cout << *i << " ";
    cout << endl;	
	return 0;
}

/*
运行结果：
10 20 30 40
40 30 20 10
listOne  :1
listOne  :2
listOne  :3
listOne  :4
1 2 3 4
*/