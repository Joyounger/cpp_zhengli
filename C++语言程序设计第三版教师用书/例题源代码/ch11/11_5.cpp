//11_5.cpp
#include <fstream>
using namespace std;
//11_5.cpp
#include <fstream>
using namespace std;
struct Date
{ 
    int mo,da,yr;  
};
int main()  
{
    Date dt = {6,10,92};
    ofstream tfile("date.dat",ios_base::binary);
    tfile.write((char *) &dt,sizeof dt);
	tfile.close();
}
