#include <iostream>
#include <string.h>
using namespace std;

class Railway
{
protected:
    int trainNo;
    char train_Name[20], source[20], destination[20], train_Time[20];

public:
    // default constactor
    Railway()
    {
        cout << endl
             << "Enter Your Train Data ...." << endl;
        cout << "Enter Train Number : ";
        cin >> trainNo;
        fflush(stdin);
        cout << "Enter Train Name : ";
        gets(train_Name);
        cout << "Enter Train Source : ";
        gets(source);
        cout << "Enter Train Destination : ";
        gets(destination);
        cout << "Enter Train Time : ";
        gets(train_Time);
    }

    // getter
    void getRailwayData()
    {
        cout << endl
             << "Your RailWay Data...." << endl
             << endl;
        cout << "Train Number\t\t: " << this->trainNo << endl;
        cout << "Train Name\t\t: " << this->train_Name << endl;
        cout << "Train Source\t\t: " << this->source << endl;
        cout << "Train Destination\t: " << this->destination << endl;
        cout << "Train Time\t\t: " << this->train_Time << endl;
    }
};
class RailwaySystem : public Railway
{
public:
    void searchTrain(int no)
    {
        // if (trainNo == no)
        // {
        //     cout << endl
        //          << "Train Found Successfully...." << endl;
        //     getRailwayData();
        // }
        // else
        // {
        //     cout << endl
        //          << "Train Not Found...." << endl;
        // }

        switch (no)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
    }
};