#include <iostream>
using namespace std;

class Size
{
protected:
    int height, width;

public:
    // constractor
    Size()
    {
        cout << "Enter Height : ";
        cin >> height;
        cout << "Enter Width : ";
        cin >> width;
    }
};

class triangle : public Size
{
public:
    //  triangle area formaulaa
    // getter formulaah
    void getTringleFomullah()
    {
        float area = 0.5 * height * width;
        cout << endl
             << "The Area Of Triangle : " << area << endl;
    }
};
class Rectangle : public Size
{
public:
    //  triangle area formaulaa
    // getter formulaah
    void getRectangleFomullah()
    {
        float area = height * width;
        cout << endl
             << "The Area Of Rectangle : " << area << endl;
    }
};