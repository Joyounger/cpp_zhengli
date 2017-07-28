//12_1.cpp
#include <iostream>
using namespace std;

class DivideByZeroException 
{public:
   DivideByZeroException() : message( "�����쳣" ) 
   { }
   const char *what() const  { return message; }
private:
   const char *message;
};

double quotient( int numerator, int denominator )
{
   if ( denominator == 0 )
      throw DivideByZeroException();
   return static_cast< double > ( numerator ) / denominator;
}

int main()
{
	int number1, number2;
	double result;
	cout << "������������: ";
	while ( cin >> number1 >> number2 ) 
	{
       try 
		{   
			result = quotient( number1, number2 );     
			cout << "The quotient is: " << result << endl;
		}  
		catch ( DivideByZeroException ex ) 
		{ 	cout << "�쳣Ϊ: " << ex.what() << '\n'; 	}
		cout << "\n������������: ";
	}
	cout << endl;
	return 0;      
}
/*
���н����
������������: 4 6
The quotient is: 0.666667

������������: 5 0
�쳣Ϊ: �����쳣
*/
