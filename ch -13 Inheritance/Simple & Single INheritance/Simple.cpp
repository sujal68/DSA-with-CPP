#include <iostream>
using namespace std;

class SimpleX
{
protected:
    int a, b, c;
};
class SimpleY : public SimpleX
{
public:
    // setter
    void setSimpleData()
    {
        cout << "Enter A Value :";
        cin >> a;
        cout << "Enter B Value :";
        cin >> b;
        cout << "Enter C Value :";
        cin >> c;
    }

    // getter
    void getSimpleData()
    {
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << endl
             << "Sum Of Cube : "
             << sum << endl;
    }
};
