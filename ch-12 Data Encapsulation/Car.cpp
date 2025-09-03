#include <iostream>
#include <string.h>
using namespace std;

class Car
{
private:
    char name[20];
    char model[20];
    int price;
    int speed;

public:
    void setCarInput()
    {
        cout << "Enter Car Name : ";
        gets(name);
        cout << "Enter Car Model : ";
        gets(model);
        cout << "Enter Car Price : ";
        cin >> price;
        cout << "Enter Car Speed: ";
        cin >> speed;
    }
    
    void getCarOutput()
    {
        cout << name << "\t" << model << "\t" << price << "\t" << speed << "\t" << endl;
    }

};
int main()
{
    Car car1;
    Car car2;

    car1.setCarInput();
    car1.getCarOutput();

    return 0;
}