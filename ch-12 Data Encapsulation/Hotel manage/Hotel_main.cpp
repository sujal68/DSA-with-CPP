#include <iostream>
#include "Hotel.cpp"
using namespace std;

main()
{
    int size;
    cout << "Enter Array Of Index : ";
    cin >> size;
    Hotel hotel[size];

    for (int i = 0; i < size; i++)
    {
        hotel[i].setHotelData();
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        hotel[i].getHotelData();
    }
}