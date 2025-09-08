#include <iostream>
#include <string.h>
using namespace std;

class Field
{

protected:
    int id;
    char name[20];
    char role[20];
    double salary;
    int exprience;
    char companyName[20];
    char address[20];
    char email[50];
    double contact;

public:
    // setter
    void setEmployeeData()
    {
        cout << "Enter Your Id : ";
        cin >> id;
        cin.ignore();
        cout << "Enter Your Name : ";
        cin.getline(name, 20);
        cout << "Enter Your Role : ";
        cin.getline(role, 20);
    }
};

class Field2 : public Field
{
public:
    // setter
    void setEmployeeData2()
    {
        cout << "Enter Your Salary : ";
        cin >> salary;
        cout << "Enter Your Exprience : ";
        cin >> exprience;
        cin.ignore();
    }
};

class Field3 : public Field2
{
public:
    // setter
    void setEmployeeData3()
    {
        cout << "Enter Your Company Name : ";
        cin.getline(companyName, 30);
        cout << "Enter Your Address : ";
        cin.getline(address, 50);
    }

    // getter
    void getEmployeeData()
    {
        cout << endl
             << "Your Name : " << name;
        cout << "Your Role : " << role;
        cout << "Your salary : " << salary;
    }
};

class Field4 : public Field3
{
public:
    // setter
    void setEmployeeData4()
    {
        cout << "Enter your Email Address : ";
        cin.getline(email, 50); 
        cout
            << "Enter your Contact Number : ";
        cin >> contact;
    }

    // getter
    void getEmployeeData()
    {
        cout << endl
             << "Employeee Data....";
        cout << endl
             << "Your Id : " << id << endl;
        cout << "Your Name : " << name << endl;
        cout << "Your Role : " << role << endl;
        cout << "Your salary : " << salary << endl;
        cout << "Your Exprience : " << exprience << endl;
        cout << "Your Company Name : " << companyName << endl;
        cout << "Your address : " << address << endl;
        cout << "Your Email id : " << email << endl;
        cout << "Your Contact Number : " << contact << endl;
    }
};