#include <iostream>
using namespace std;

class Cricket
{
};

class T20Match : public Cricket
{
public:
    void getTotalOverData(int over)
    {
        cout << "T20 In Over : " << over << endl;
    }
};

class TestMatch : public Cricket
{
public:
    void getTotalOverData(int over)
    {
        cout << "Test Match In Over : " << over << endl;
    }
};