//11_4.cpp
#include <iostream>   
#include <iomanip>   
using namespace std;
int main()   
{
    double values[] = {1.23,35.36,653.7,4358.24};
    char *names[] = {"Zoot", "Jimmy", "Al", "Stan"};
    for (int i=0;i<4;i++)
       cout << setiosflags(ios_base::left)
           << setw(6)<< names[i]
           << resetiosflags(ios_base::left)
           << setw(10)  << setprecision(1)  << values[i]  << endl;
}

