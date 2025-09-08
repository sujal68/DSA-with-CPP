#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate;
    float amount;

public:
    RBI()
    {
        rate = 7.3;
    }
};

class SBI : public RBI
{
public:
    void setAmount()
    {
        cout << "Enter Amount for SBI : ";
        cin >> amount;
    }

    void getRate()
    {
        float interest = (amount * rate) / 100;
        cout << "SBI Interest = " << interest << endl;
    }
};

class BOB : public RBI
{
public:
    void setAmount()
    {
        cout << "Enter Amount for BOB : ";
        cin >> amount;
    }

    void getRate()
    {
        float interest = (amount * rate) / 100;
        cout << "BOB Rate amount = " << interest << endl;
    }
};

class ICICI : public RBI
{
public:
    void setAmount()
    {
        cout << "Enter Amount for ICICI : ";
        cin >> amount;
    }

    void getRate()
    {
        float interest = (amount * rate) / 100;
        cout << "ICICI Rate amount = " << interest << endl;
    }
};