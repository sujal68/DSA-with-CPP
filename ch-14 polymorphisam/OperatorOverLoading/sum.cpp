#include <iostream>
using namespace std;

class ABC
{
protected:
    int num;

public:
    // setter
    void setNumberData()
    {
        cout << "Enter Any Number : ";
        cin >> num;
    }
    void getNumberData()
    {
        cout << endl
             << "Your Number Is : " << num << endl;
    }

    // ABC operator+(ABC obj)
    // {
    //     ABC tmp;
    //     tmp.num = this->num + obj.num;
    //     return tmp;
    // }

    ABC operator++(int)
    {
        ABC tmp;
        tmp.num = ++this->num;
        return tmp;
    }
};