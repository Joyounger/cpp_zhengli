//11_2.cpp
#include <iostream>   
#include <iomanip>   
using namespace std;
int main()   
{
    double values[] = {1.23,35.36,653.7,4358.24};
    char *names[] = {"Zoot", "Jimmy", "Al", "Stan"};
    for (int i=0;i<4;i++)
        cout << setw(6) << names[i] << setw(10) << values[i] << endl;   
}
