//3_2.cpp
#include <iostream>
using namespace std;
double power (double x, int n);

int main()
{
	int  i;
	int  value = 0;
	char  ch;
	
	cout << "Enter an 8 bit binary number  ";
	for (i = 7; i >= 0; i--)
	{
	    cin >> ch;
	    if (ch == '1')
	        value += int(power(2,i));
	}
	cout <<"Decimal value is  "<<value<<endl;
}

double power (double x, int n)
{
	double val = 1.0;
	
	while (n--)
	   val *= x;
	return(val);
}
