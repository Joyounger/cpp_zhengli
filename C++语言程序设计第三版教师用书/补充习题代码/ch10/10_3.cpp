//10_3.cpp
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> iVector;

int main()
{
    iVector vec1;   
    iVector vec2(11,5);  
    iVector vec3(vec2.begin(),vec2.begin()+3);  
    iVector::iterator i;

    cout<<"vec1:"<<endl;
    for (i =vec1.begin(); i !=vec1.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout<<"vec2:"<<endl;
    for (i =vec2.begin(); i !=vec2.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout<<"vec3:"<<endl;
    for (i =vec3.begin(); i !=vec3.end(); ++i)
        cout << *i << " ";
    cout << endl;
 
    vec1.push_back(2);
    vec1.push_back(4);
    vec1.insert(vec1.begin()+1,5);
    vec1.insert(vec1.begin()+1,vec3.begin(),vec3.end());
    cout<<"push() and insert():" <<endl;
    for (i =vec1.begin(); i !=vec1.end(); ++i)
        cout << *i << " ";
    cout << endl;

    vec2.assign(8,1);
    cout<<"vec2.assign(8,1):" <<endl;
    for (i =vec2.begin(); i !=vec2.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout<<"vec1.front()="<<vec1.front()<<endl;
    cout<<"vec1.back()="<<vec1.back()<<endl;
    cout<<"vec1.at(4)="<<vec1.at(4)<<endl;
    cout<<"vec1[4]="<<vec1[4]<<endl;

    vec1.pop_back();
    vec1.erase(vec1.begin()+1,vec1.end()-2);
    cout<<"vec1.pop_back() and vec1.erase():" <<endl;
    for (i =vec1.begin(); i !=vec1.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout<<"vec1.capacity(): "<<vec1.capacity()<<endl;
    cout<<"vec1.max_size(): "<<vec1.max_size()<<endl;
    cout<<"vec1.size(): "<<vec1.size()<<endl;
    cout<<"vec1.empty(): "<<vec1.empty()<<endl;

    cout<<"vec1==vec3: "<<(vec1==vec3)<<endl;
    cout<<"vec1<=vec3: "<<(vec1<=vec3)<<endl;
    return 0;
}
/*
运行结果：
vec1:

vec2:
5 5 5 5 5 5 5 5 5 5 5
vec3:
5 5 5
push() and insert():
2 5 5 5 5 4
vec2.assign(8,1):
1 1 1 1 1 1 1 1
vec1.front()=2
vec1.back()=4
vec1.at(4)=5
vec1[4]=5
vec1.pop_back() and vec1.erase():
2 5 5
vec1.capacity(): 6
vec1.max_size(): 1073741823
vec1.size(): 3
vec1.empty(): 0
vec1==vec3: 0
vec1<=vec3: 1
*/
