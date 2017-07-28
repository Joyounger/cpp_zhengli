//10_1.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> str;

void push(str& v)
{ v.push_back("JJJJJ");
  v.push_back("IIIII");
  v.push_back("SSSSS");
  v.push_back("EEEEE");
  v.push_back("CCCCC");
  v.push_back("ZZZZZ");
  v.push_back("NNNNN");
  v.push_back("KKKKK");
}

void disp(str v)
{ for (int i=0; i<v.size(); i++)
    cout << v[i] << endl;
  cout << endl;
}

int main() 
{ str v;
  push(v);  disp(v);
  return 0;
}

/*
运行结果：
JJJJJ
IIIII
SSSSS
EEEEE
CCCCC
ZZZZZ
NNNNN
KKKKK
*/