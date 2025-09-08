#include <iostream>
using namespace std;

class Find
{
protected:
    int squre, a, b, c;

public:
    // constactor
    Find()
    {
        cout << "The Find area Of Square...." << endl;
        cout << "Enter Any Value : ";
        cin >> squre;
    }
};

class square : public Find
{
public:
    // getter
    void getSquareData()
    {
        double Squre = squre * squre;
        cout << "The area of Square : " << Squre << endl << endl;
    }
};
class cube : public square
{
public:
    // setter
    void setCubeData()
    {
        cout << "The Find area Of Cube...." << endl;
        cout << "Enter A Value :";
        cin >> a;
        cout << "Enter B Value :";
        cin >> b;
        cout << "Enter C Value :";
        cin >> c;
    }
    // getter
    void getCubeData()
    {
        double cube = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "The area of Cube : " << cube << endl;
    }
};
