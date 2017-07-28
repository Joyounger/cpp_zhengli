//10_5.cpp
#include <iostream>
#include <list>
using namespace std;
typedef list<int> iList;

void put_list(iList list, char *name)
{
    iList::iterator plist;
    cout << "The contents of " << name << " : ";
    for(plist = list.begin(); plist != list.end(); plist++)
        cout << *plist << " ";
    cout<<endl;
}

int main()
{
   iList list1;   
   iList list2(11,5);  
   iList list3(list2.begin(),--list2.end());  
   iList::iterator i;

   put_list(list1,"list1");
   put_list(list2,"list2");
   put_list(list3,"list3");
 
	list1.push_back(2);
	list1.push_back(4);
	cout<<"list1.push_back(2) and list1.push_back(4):"<<endl;
   put_list(list1,"list1");

	list1.push_front(5);
	list1.push_front(7);
	cout<<"list1.push_front(5) and list1.push_front(7):"<<endl;
   put_list(list1,"list1");

	list1.insert(++list1.begin(),3,9);
	cout<<"list1.insert(list1.begin()+1,3,9):"<<endl;
   put_list(list1,"list1");

	cout<<"list1.front()="<<list1.front()<<endl;
	cout<<"list1.back()="<<list1.back()<<endl;

	list1.pop_front();
	list1.pop_back();
	cout<<"list1.pop_front() and list1.pop_back():"<<endl;
   put_list(list1,"list1");

	list1.erase(++list1.begin());
	cout<<"list1.erase(++list1.begin()):"<<endl;
   put_list(list1,"list1");

	list2.assign(8,1);
	cout<<"list2.assign(8,1):"<<endl;
   put_list(list2,"list2");

	cout<<"list1.max_size(): "<<list1.max_size()<<endl;
	cout<<"list1.size(): "<<list1.size()<<endl;
	cout<<"list1.empty(): "<<list1.empty()<<endl;

   put_list(list1,"list1");
   put_list(list3,"list3");
	cout<<"list1>list3: "<<(list1>list3)<<endl;
	cout<<"list1<list3: "<<(list1<list3)<<endl;

	list1.sort();
   put_list(list1,"list1");
    
	list1.splice(++list1.begin(), list3);
   put_list(list1,"list1");
   put_list(list3,"list3"); 
   return 0;
}
/*
运行结果：
The contents of list1 :
The contents of list2 : 5 5 5 5 5 5 5 5 5 5 5
The contents of list3 : 5 5 5 5 5 5 5 5 5 5
list1.push_back(2) and list1.push_back(4):
The contents of list1 : 2 4
list1.push_front(5) and list1.push_front(7):
The contents of list1 : 7 5 2 4
list1.insert(list1.begin()+1,3,9):
The contents of list1 : 7 9 9 9 5 2 4
list1.front()=7
list1.back()=4
list1.pop_front() and list1.pop_back():
The contents of list1 : 9 9 9 5 2
list1.erase(++list1.begin()):
The contents of list1 : 9 9 5 2
list2.assign(8,1):
The contents of list2 : 1 1 1 1 1 1 1 1
list1.max_size(): 1073741823
list1.size(): 4
list1.empty(): 0
The contents of list1 : 9 9 5 2
The contents of list3 : 5 5 5 5 5 5 5 5 5 5
list1>list3: 1
list1<list3: 0
The contents of list1 : 2 5 9 9
The contents of list1 : 2 5 5 5 5 5 5 5 5 5 5 5 9 9
The contents of list3 :
*/