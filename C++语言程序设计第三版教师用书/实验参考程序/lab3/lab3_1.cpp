//lab3_1.cpp
#include <iostream>
using namespace std;

float Convert(float);
int main()
{
    float TempFer;
    float TempCel;

    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> TempFer;
    TempCel = Convert(TempFer);
    cout << "\nHere's the temperature in Celsius: ";
    cout << TempCel << endl;
    return 0;
}

float Convert(float TempFer)
{
    float TempCel;
    TempCel = ((TempFer - 32) * 5) / 9;
    return TempCel;
}
