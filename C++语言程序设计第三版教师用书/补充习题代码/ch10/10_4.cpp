//10_4.cpp
#include <iostream>
#include <deque>

using namespace std;
typedef deque<int> iDeque;

void put_deque(iDeque deque, char *name)
{
    iDeque::iterator pdeque;
    cout << "The contents of " << name << " : ";
    for(pdeque = deque.begin(); pdeque != deque.end(); pdeque++)
        cout << *pdeque << " ";
    cout<<endl;
}

int main()
{
    iDeque deq1;   
    iDeque deq2(10,6);  
    iDeque deq3(deq2.begin(),deq2.begin()+3);  

    iDeque::iterator i;
    put_deque(deq1,"deq1");
    put_deque(deq2,"deq2");
    put_deque(deq3,"deq3");
    
	deq1.push_back(2);
	deq1.push_back(4);
	cout<<"deq1.push_back(2) and deq1.push_back(4):"<<endl;
    put_deque(deq1,"deq1");

	deq1.push_front(5);
	deq1.push_front(7);
	cout<<"deq1.push_front(5) and deq1.push_front(7):"<<endl;
    put_deque(deq1,"deq1");

	deq1.insert(deq1.begin()+1,3,9);
	cout<<"deq1.insert(deq1.begin()+1,3,9):"<<endl;
    put_deque(deq1,"deq1");

	cout<<"deq1.front()="<<deq1.front()<<endl;
	cout<<"deq1.back()="<<deq1.back()<<endl;
	cout<<"deq1.at(4)="<<deq1.at(4)<<endl;
	cout<<"deq1[4]="<<deq1[4]<<endl;
	deq1.at(1)=10;
	deq1[2]=12;
	cout<<"deq1.at(1)=10 and deq1[2]=12 :"<<endl;
    put_deque(deq1,"deq1");

	deq1.pop_front();
	deq1.pop_back();
	cout<<"deq1.pop_front() and deq1.pop_back():"<<endl;
    put_deque(deq1,"deq1");

	deq1.erase(deq1.begin()+1);
	cout<<"deq1.erase(deq1.begin()+1):"<<endl;
    put_deque(deq1,"deq1");

	deq2.assign(8,1);
	cout<<"deq2.assign(8,1):"<<endl;
    put_deque(deq2,"deq2");

	cout<<"deq1.max_size(): "<<deq1.max_size()<<endl;
	cout<<"deq1.size(): "<<deq1.size()<<endl;
	cout<<"deq1.empty(): "<<deq1.empty()<<endl;

	cout<<"deq1==deq3: "<<(deq1==deq3)<<endl;
	cout<<"deq1<=deq3: "<<(deq1<=deq3)<<endl;
    return 0;
}
/*
运行结果：
The contents of deq1 :
The contents of deq2 : 6 6 6 6 6 6 6 6 6 6
The contents of deq3 : 6 6 6
deq1.push_back(2) and deq1.push_back(4):
The contents of deq1 : 2 4
deq1.push_front(5) and deq1.push_front(7):
The contents of deq1 : 7 5 2 4
deq1.insert(deq1.begin()+1,3,9):
The contents of deq1 : 7 9 9 9 5 2 4
deq1.front()=7
deq1.back()=4
deq1.at(4)=5
deq1[4]=5
deq1.at(1)=10 and deq1[2]=12 :
The contents of deq1 : 7 10 12 9 5 2 4
deq1.pop_front() and deq1.pop_back():
The contents of deq1 : 10 12 9 5 2
deq1.erase(deq1.begin()+1):
The contents of deq1 : 10 9 5 2
deq2.assign(8,1):
The contents of deq2 : 1 1 1 1 1 1 1 1
deq1.max_size(): 1073741823
deq1.size(): 4
deq1.empty(): 0
deq1==deq3: 0
deq1<=deq3: 0
*/