#include <iostream>
using namespace std;

class Max
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
             << "This Is Max Number : " << num << endl;
    }

    Max operator>(Max obj)
    {
        Max tmp;
        if (this->num > obj.num)
        {
            tmp.num = this->num;
        }
        else
        {
            tmp.num = obj.num;
        }
        return tmp;
    }
};