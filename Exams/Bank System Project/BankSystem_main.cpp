#include "BankSystem.cpp"
using namespace std;
main()
{
    CheckingAccount bank1;
    FixedDepositAccount bank2;
    bank1.setAccountDetail();
    cout << endl;

    int choice;
    float amount;
    while (true)
    {
        cout << "Press 1 for Diposit... " << endl;
        cout << "Press 2 for Withdraw... " << endl;
        cout << "Press 3 for Display.. " << endl;
        cout << "Press 4 for set Intesets..." << endl;
        cout << "Press 5 for add Intesets..." << endl;
        cout << "Press 6 for Check OverDraft....." << endl;
        cout << "Press 7 for Fixed Deposit....." << endl;
        cout << "Press 0 for Exit... " << endl;
        cout << "Press Any Number : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "Deposit..." << endl
                 << endl;
            bank1.deposit();
            break;
        case 2:
            cout << endl
                 << "Withdraw.." << endl
                 << endl;
            bank1.withdraw();
            break;
        case 3:
            cout << endl
                 << "Display Details..." << endl
                 << endl;
            bank1.displayAccountDetail();
            cout << endl;
            break;
        case 4:
            cout << endl
                 << "Interest..." << endl
                 << endl;
            bank1.setInterestRate();
            cout << endl;
            break;
        case 5:
            cout << endl
                 << "Interest..." << endl
                 << endl;
            bank1.addInterest();
            cout << endl;
            break;
        case 6:
            cout << endl
                 << "Check OverDraft..." << endl
                 << endl;
            bank1.checkOverdraft();
            cout << endl;
            break;
        case 7:
            cout << endl
                 << "Fixed Deposit..." << endl
                 << endl;
            bank2.setAccountDetail();
            bank2.setTermData();
            bank2.deposit();
            bank2.calculateInterest();
            cout << endl;
            break;
        case 0:
            cout << "Exited" << endl
                 << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
}
