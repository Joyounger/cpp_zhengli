#include <iostream>
using namespace std;

class vehicle
{
private:
	int MaxSpeed;
	int Weight;
public:
    vehicle(){MaxSpeed=0; Weight=0;};
	~vehicle(){};
	void Run() {cout << "Now it is running!" << endl; }
	void Stop() {cout << "Now it has stopped!" << endl; }
};

class bicycle : virtual public vehicle
{ 
private:
	int Height;
public:
	bicycle(){};
	~bicycle(){};
};
 
class motorcar : virtual public vehicle
{ 
private:
	int SeatNum;
public:
	motorcar(){};
	~motorcar(){};
};

class motorcycle : public bicycle , public motorcar
{ 
public:
	motorcycle (){};
	~motorcycle (){};
};

int main()
{
	motorcycle a;
	a.Run();
	a.Stop();
}
