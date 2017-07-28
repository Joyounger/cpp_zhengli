//2_11.cpp
#include <iostream>
using namespace std;
enum game_result {WIN, LOSE, TIE, CANCEL};
int main()
{
	game_result result;                  //声明变量时,可以不写关键字enum
	enum game_result omit = CANCEL;      //也可以在类型名前写enum
	int count;
	for (count = WIN ; count <= CANCEL ; count++) 
	{
		result = (game_result)count;
		if (result == omit)
		{ 
			cout << "The game was cancelled\n";
		}
		else 
		{
			cout << "The game was played ";
			if (result == WIN)
				cout << "and we won!";
			if (result == LOSE)
				cout << "and we lost.";
			cout << "\n";
		}
	}
}
