#include <iostream>
using namespace std;

class Animal
{
public:
	int age;
public:
    Animal(){};
	~Animal(){};
};

class Dog : private Animal
{ 
public:
	Dog(){};
	~Dog(){};
	void SetAge(int n){ age = n;}
};

int main()
{
	Dog a;
	a.SetAge(10);
}
