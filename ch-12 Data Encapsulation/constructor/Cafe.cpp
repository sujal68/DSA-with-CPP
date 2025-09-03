#include <iostream>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
    {
        cafe_id;
        cafe_name;
        cafe_type;
        cafe_rating;
        cafe_location;
        cafe_establish_year;
        cafe_staff_quantity;
    }

    void setData()
    {
        cout << "Enter Cafe ID: ";
        cin >> cafe_id;
        cout << "Enter Cafe Name: ";
        cin >> cafe_name;
        cout << "Enter Cafe Type: ";
        cin >> cafe_type;
        cout << "Enter Cafe Rating: ";
        cin >> cafe_rating;
        cout << "Enter Cafe Location: ";
        cin >> cafe_location;
        cout << "Enter Cafe Establish Year: ";
        cin >> cafe_establish_year;
        cout << "Enter Cafe Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    void getData()
    {
        cout << "Cafe Information....";
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << " Star" << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Cafe Establish Year: " << cafe_establish_year << endl;
        cout << "Cafe Staff Quantity: " << cafe_staff_quantity << endl;
    }
};
