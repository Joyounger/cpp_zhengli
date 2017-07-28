//3_18.cpp
#include<iostream>
#include<cmath>
using namespace std;
const double pi(3.14159265);
int main()
{
    double a,b;
    cin>>a;
    b=a*pi/180;
    cout<<"sin("<<a<<")="<<sin(b)<<endl;
    cout<<"cos("<<a<<")="<<cos(b)<<endl;
    cout<<"tan("<<a<<")="<<tan(b)<<endl;
}
