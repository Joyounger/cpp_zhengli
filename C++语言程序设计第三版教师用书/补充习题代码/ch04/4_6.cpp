//4_6.cpp
#include<iostream>
using namespace std;

class zrf_ex 
{
public:
     int value;
     void set(int n) { 
         value=n;
     }
     int get(void) {
        return value;
     }
};

int main()
{
    zrf_ex z;    

    z.set(100);
	cout<<"z.get()=";
    cout<<z.get()<<endl;

    z.value=300; 
	cout<<"z.value=";
    cout<<z.value<<endl;
	return 0;
}
/*
程序运行结果为：
z.get()=100
z.value=300
*/
