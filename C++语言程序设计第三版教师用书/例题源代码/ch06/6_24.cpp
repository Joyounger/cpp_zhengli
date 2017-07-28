//6_24.cpp
#include <string>
#include <iostream>
using namespace std ;
void trueFalse(int x)
{
	cout << (x? "True": "False") << endl;
}
int main()
{
	string S1="DEF",  S2="123";
	char CP1[]="ABC"; 
	char CP2[]="DEF";
	cout << "S1 is " << S1 << endl;
	cout << "S2 is " << S2 << endl;
	cout<<"length of S2:"<<S2.length()<<endl;
	cout << "CP1 is " << CP1 << endl;
	cout << "CP2 is " << CP2 << endl;
	cout << "S1<=CP1 returned ";
	trueFalse(S1<=CP1); 
	cout << "CP2<=S1 returned ";
	trueFalse(CP2<=S1); 
	S2+=S1;
	cout<<"S2=S2+S1:"<<S2<<endl;
	cout<<"length of S2:"<<S2.length()<<endl;
}
