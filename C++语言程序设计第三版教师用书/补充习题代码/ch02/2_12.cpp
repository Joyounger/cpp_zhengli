//2_12.cpp
#include <iostream>
using namespace std;
struct student 
{
	int number;
	int score;
};

int main()
{
	student stu1, stu2, stu3, stu4;
	
	stu1.number = 100;
	stu2.number = 101;
	stu3.number = 102;
	stu4.number = 103;
	
	stu1.score = 75;
	stu2.score = 80;
	stu3.score = 63;
	stu4.score = 90;
	
	cout<<"The number of stu1 is "<< stu1.number<<"The score of stu1 is "<<stu1.score <<"\n";
	cout << "The number of stu2 is " << stu2.number << "The score of stu2 is " << stu2.score << "\n";
	cout << "The number of stu3 is " << stu3.number << "The score of stu3 is " << stu3.score << "\n";
	cout << "The number of stu4 is " << stu4.number << "The score of stu4 is " << stu4.score << "\n";
	return 0;
}
/*
程序运行结果为：
The number of stu1 is 100The score of stu1 is 75
The number of stu2 is 101The score of stu2 is 80
The number of stu3 is 102The score of stu3 is 63
The number of stu4 is 103The score of stu4 is 90
*/