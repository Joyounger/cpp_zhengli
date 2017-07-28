//11_3.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int x = 12345;
   cout << "Default is right justified:\n"
        << setw(10) << x << "\n\nUSING MEMBER FUNCTIONS" 
        << "\nUse setf to set ios::left:\n" << setw(10);
   cout.setf( ios::left, ios::adjustfield );
   cout << x << "\nUse unsetf to restore default:\n";
   cout.unsetf( ios::left );
   cout << setw( 10 ) << x 
        << "\n\nUSING PARAMETERIZED STREAM MANIPULATORS"
        << "\nUse setiosflags to set ios::left:\n"
        << setw( 10 ) << setiosflags( ios::left ) << x 
        << "\nUse resetiosflags to restore default:\n"
        << setw( 10 ) << resetiosflags( ios::left ) 
        << x << endl;
   return 0;
}
/*
运行结果：
Default is right justified:
     12345

USING MEMBER FUNCTIONS
Use setf to set ios::left:
12345
Use unsetf to restore default:
     12345

USING PARAMETERIZED STREAM MANIPULATORS
Use setiosflags to set ios::left:
12345
Use resetiosflags to restore default:
     12345
*/