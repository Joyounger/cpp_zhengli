//12_1.cpp
#include <iostream>
using namespace std;

class DivideByZeroException 
{public:
   DivideByZeroException() : message( "除零异常" ) 
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
	cout << "输入两个整数: ";
	while ( cin >> number1 >> number2 ) 
	{
       try 
		{   
			result = quotient( number1, number2 );     
			cout << "The quotient is: " << result << endl;
		}  
		catch ( DivideByZeroException ex ) 
		{ 	cout << "异常为: " << ex.what() << '\n'; 	}
		cout << "\n输入两个整数: ";
	}
	cout << endl;
	return 0;      
}
/*
运行结果：
输入两个整数: 4 6
The quotient is: 0.666667

输入两个整数: 5 0
异常为: 除零异常
*/
