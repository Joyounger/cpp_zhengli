//10_2.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<string> str;
typedef str::iterator sit;
void push(str& v)
{ v.push_back("Japan");
  v.push_back("Italy");
  v.push_back("Spain");
  v.push_back("Egypt");
  v.push_back("Chile");
  v.push_back("Zaire");
  v.push_back("Nepal");
  v.push_back("Kenya");
  v.push_back("India");
  v.push_back("China");
  v.push_back("Malta");
  v.push_back("Syria");
}

void disp(str v)
{ for (sit it=v.begin(); it!=v.end(); it++)
    cout << *it << endl;
  cout << endl;
}

int main()
{ str v;
  push(v);  disp(v);
  sit e1=find(v.begin(),v.end(),"Egypt");
  sit m1=find(v.begin(),v.end(),"Malta");
  sort(e1,m1);
  disp(v);
  return 0;
}
/*
运行结果：
Japan
Italy
Spain
Egypt
Chile
Zaire
Nepal
Kenya
India
China
Malta
Syria

Japan
Italy
Spain
Chile
China
Egypt
India
Kenya
Nepal
Zaire
Malta
Syria
*/