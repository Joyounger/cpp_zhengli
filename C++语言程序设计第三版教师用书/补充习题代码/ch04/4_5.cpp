//4_5.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

class timer{
    long minutes;
public:
    timer(void) { 
        minutes =0;
    };
    timer(char *m) { 
        minutes = atoi(m);
    };
    timer(int h, int m) { 
        minutes = 60*h+m ;
    };
    timer(double h) { 
        minutes = (int) 60*h ;
    };
    long getmin(void) { return minutes ; };
};

int main(void)
{
    timer start(7.30),finish(18.30);
	cout<<"finish(18.30)-start(7.30)=";
    cout<<finish.getmin()-start.getmin()<<endl;  

    timer start0("500"),finish0("900");  
	cout<<"finish0(\"900\")-start0(\"500\")=";
    cout<<finish0.getmin()-start0.getmin()<<endl;  

    timer start1;   
    timer finish1(3,30);  
	cout<<"finish1(3,30)-start1=";
    cout<<finish1.getmin()-start1.getmin()<<endl;  

    return 0;
}
/*
程序运行结果为：
finish(18.30)-start(7.30)=660
finish0("900")-start0("500")=400
finish1(3,30)-start1=210
*/
