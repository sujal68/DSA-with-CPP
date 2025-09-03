#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[20];
    char car_colour[10];
    char car_model[20];
    int car_release_year;
};
int main()
{
    Car car1;
    Car car2;
    Car car3;
    Car car4;

    // input----------------------------------------------------
    cout << endl
         << "Car-1 Input..." << endl
         << endl;

    cout << "Enter Car Id : ";
    cin >> car1.car_id;
    cout << "Enter Car company name : ";
    cin >> car1.car_company_name;
    cout << "Enter Car colour : ";
    cin >> car1.car_colour;
    cout << "Enter Car Model : ";
    cin >> car1.car_model;
    cout << "Enter Car release year : ";
    cin >> car1.car_release_year;

    cout << endl
         << "Car-2 Input..." << endl
         << endl;

    cout << "Enter Car Id : ";
    cin >> car2.car_id;
    cout << "Enter Car company name : ";
    cin >> car2.car_company_name;
    cout << "Enter Car colour : ";
    cin >> car2.car_colour;
    cout << "Enter Car Model : ";
    cin >> car2.car_model;
    cout << "Enter Car release year : ";
    cin >> car2.car_release_year;

    cout << endl
         << "Car-3 Input..." << endl
         << endl;

    cout << "Enter Car Id : ";
    cin >> car3.car_id;
    cout << "Enter Car company name : ";
    cin >> car3.car_company_name;
    cout << "Enter Car colour : ";
    cin >> car3.car_colour;
    cout << "Enter Car Model : ";
    cin >> car3.car_model;
    cout << "Enter Car release year : ";
    cin >> car3.car_release_year;

    cout << endl
         << "Car-4 Input..." << endl
         << endl;

    cout << "Enter Car Id : ";
    cin >> car4.car_id;
    cout << "Enter Car company name : ";
    cin >> car4.car_company_name;
    cout << "Enter Car colour : ";
    cin >> car4.car_colour;
    cout << "Enter Car Model : ";
    cin >> car4.car_model;
    cout << "Enter Car release year : ";
    cin >> car4.car_release_year;

    //  output-----------------------------
    cout << endl
         << endl
         << "Car-1 Output..." << endl
         << endl;

    cout << "car Id\t:" << car1.car_id << endl;
    cout << "car company name\t:" << car1.car_company_name << endl;
    cout << "car colour\t:" << car1.car_colour << endl;
    cout << "car model\t:" << car1.car_model << endl;
    cout << "car realease\t:" << car1.car_release_year << endl;

    cout << endl
         << "Car-2 Output..." << endl
         << endl;

    cout << "car Id\t:" << car2.car_id << endl;
    cout << "car company name\t:" << car2.car_company_name << endl;
    cout << "car colour\t:" << car2.car_colour << endl;
    cout << "car model\t:" << car2.car_model << endl;
    cout << "car realease\t:" << car2.car_release_year << endl;

    cout << endl
         << "Car-3 Output..." << endl
         << endl;

    cout << "car Id\t:" << car3.car_id << endl;
    cout << "car company name\t:" << car3.car_company_name << endl;
    cout << "car colour\t:" << car3.car_colour << endl;
    cout << "car model\t:" << car3.car_model << endl;
    cout << "car realease\t:" << car3.car_release_year << endl;

    cout << endl
         << "Car-4 Output..." << endl
         << endl;

    cout << "car Id\t:" << car4.car_id << endl;
    cout << "car company name\t:" << car4.car_company_name << endl;
    cout << "car colour\t:" << car4.car_colour << endl;
    cout << "car model\t:" << car4.car_model << endl;
    cout << "car realease\t:" << car4.car_release_year << endl;
    return 0;
}