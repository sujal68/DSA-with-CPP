#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    long long int accountNumber;
    char accountHolderName[100];
    float balance = 0;

public:
    // setter
    void setAccountDetail()
    {
        cout << endl
             << "Bank System...." << endl;
        cout << "Enter Account Number : ";
        cin >> accountNumber;
        fflush(stdin);
        cout << "Enter Accout Holder Name : ";
        gets(accountHolderName);
    }

    // deposit
    void deposit()
    {
        int amount;
        cout << "Enter Deposit Amount : ";
        cin >> amount;
        balance += amount;
        cout << endl
             << "Amount deposited successfully!" << endl
             << endl;
    }
    // getter
    void displayAccountDetail()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Your Bank Balance : " << (float)balance << endl;
    }
    // withdraw
    void withdraw()
    {
        int amount;
        cout << "Enter Widrawal Amount : ";
        cin >> amount;
        if (amount > balance)
            cout << "Not Innaf balance!" << endl;
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }
};

class SavingAccount : public BankAccount
{
protected:
    float interestRate;

public:
    void setInterestRate()
    {
        cout << "Enter Interest Rate : ";
        cin >> interestRate;
    }

    void addInterest()
    {
        int years;
        cout << "Enter Yaer Of Interest : ";
        cin >> years;
        float interest = (balance * interestRate * years) / 100;
        balance += interest;
        cout << "Interested Success fully and Your Balance Before Interest : " << balance << endl;
    }
};

class CheckingAccount : public SavingAccount
{
protected:
    int overdraftLimit = 10000;

public:
    // withdraw
    void withdraw()
    {
        int amount;
        cout << "Enter Withdrawal Amount : ";
        cin >> amount;
        if (amount > balance + overdraftLimit)
        {
            cout << "Withdrawal exceeds overdraft limit!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }
    void checkOverdraft()
    {
        cout << "Your current balance: " << balance << endl;
        cout << "Your overdraft limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
protected:
    int term; // duration in month

public:
    void setTermData()
    {
        cout << "Enter Term in months : ";
        cin >> term;
    }

    void calculateInterest()
    {
        const float interestRate = 6.0;
        float interest = (balance * interestRate * term) / (100 * 12);
        cout << "Interested Success.. :  " << interest << endl;
        cout << "Total amount after Intersetd : " << balance + interest << endl;
    }
};