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
	virtual void Run() {cout << "A vehicle is running!" << endl; }
	virtual void Stop() {cout << "A vehicle has stopped!" << endl; }
};

class bicycle : virtual public vehicle
{ 
private:
	int Height;
public:
	bicycle(){};
	~bicycle(){};
	void Run() {cout << "A bicycle is running!" << endl; }
	void Stop() {cout << "A bicycle has stopped!" << endl; }
};
 
class motorcar : virtual public vehicle
{ 
private:
	int SeatNum;
public:
	motorcar(){};
	~motorcar(){};
	void Run() {cout << "A motorcar is running!" << endl; }
	void Stop() {cout << "A motorcar has stopped!" << endl; }
};

class motorcycle : public bicycle , public motorcar
{ 
public:
	motorcycle (){};
	~motorcycle (){};
	void Run() {cout << "A motorcycle is running!" << endl; }
	void Stop() {cout << "A motorcycle has stopped!" << endl; }
};

int main()
{
	vehicle * ptr;
	vehicle a;
	bicycle b;
	motorcar c;
	motorcycle d;
	a.Run();
	a.Stop();
	b.Run();
	b.Stop();
	c.Run();
	c.Stop();
	d.Run();
	d.Stop();
	ptr = &a;
	ptr->Run();
	ptr = &b;
	ptr->Run();
	ptr = &c;
	ptr->Run();
	ptr = &d;
	ptr->Run();
	
}
