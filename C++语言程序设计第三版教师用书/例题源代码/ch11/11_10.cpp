//11_10.cpp
#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    ifstream tfile("payroll",ios_base::binary);
    if (tfile) 
    {
         while (tfile.good()) 
         {
             streampos here = tfile.tellg();
             tfile.get(ch);
             if (ch==' ')
                  cout << "Position " << here << " is a space\n";
         }
    }
    else 
         cout << "ERROR: Cannot open file 'payroll'." << endl;
    tfile.close();
}
