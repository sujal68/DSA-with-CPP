#include <iostream>
using namespace std;

class Multilevel
{
protected:
    float temprature;

public:
    // setter
    void setTempratureData()
    {
        cout << "Enter Temprature : ";
        cin >> temprature;
    }
};

class toFehrenheit : public Multilevel
{
public:
    // toFehrenheit
    void getFehrenheitData()
    {
        float fehren = (temprature * 9 / 5) + 32;
        cout << "The Coverted Fehrenheit : " << fehren << endl;
    }
};
class toCelvin : public toFehrenheit
{
public:
    // to celvin
    void getCelvinData()
    {
        float celvin = temprature + 273.15;
        cout << "The Converted Kelvin : " << celvin << endl;
    }
};