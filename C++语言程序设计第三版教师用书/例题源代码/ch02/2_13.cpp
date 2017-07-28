//2_13.cpp
#include <iostream>
using namespace std;
struct animal 
{
	int weight;
	int feet;
};

int main()
{
	animal dog1, dog2, chicken;
	
	dog1.weight = 15;
	dog2.weight = 37;
	chicken.weight = 3;
	
	dog1.feet = 4;
	dog2.feet = 4;
	chicken.feet = 2;
	
	cout << "The weight of dog1 is " << dog1.weight << "\n";
	cout << "The weight of dog2 is " << dog2.weight << "\n";
	cout << "The weight of chicken is "<< chicken.weight << "\n";
}
