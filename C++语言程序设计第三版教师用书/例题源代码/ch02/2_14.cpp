//2_14.cpp
#include <iostream>
using namespace std;
struct aircraft 
{
	int wingspan;	// 翼幅
	int passengers; 	//乘客
	union 	//无名联合作为结构体的内嵌成员
	{
		float fuel_load; 	// 战斗机装载的燃料
		float bomb_load; 	// 轰炸机装载的炸弹
		int pallets; 	// 运输机的货盘
	};
} fighter, bomber, transport;

int main()
{
	fighter.wingspan = 40;
	fighter.passengers = 1;
	fighter.fuel_load = 12000.0;
	
	bomber.wingspan = 90;
	bomber.passengers = 12;
	bomber.bomb_load = 14000.0;
	
	transport.wingspan = 106;
	transport.passengers = 4;
	transport.pallets = 42;
	
	transport.fuel_load = 18000.0;
	fighter.pallets = 4;
	
	cout << "The fighter carries "<< fighter.pallets << " pallets.\n";
	cout << "The bomber bomb load is " << bomber.bomb_load << "\n";
}
