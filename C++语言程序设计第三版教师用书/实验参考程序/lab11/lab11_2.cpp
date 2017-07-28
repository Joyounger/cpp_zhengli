//lab11_2.cpp
#include <fstream>
#include <strstream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	
	strstream file1;
	{
		ifstream in(argv[1],ios::binary);
        file1 << in.rdbuf();
	}
	ofstream out(argv[1],ios::binary); 
	
	const int bsz = 100;
	char buf[bsz];
	int line = 0;
	while(file1.getline(buf, bsz)) {
		out.setf(ios::right, ios::adjustfield);
		out.width(1);
		out << ++line << ". " << buf << endl;
	}
}
