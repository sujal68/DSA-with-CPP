#include "CRUD.cpp"
using namespace std;

int main()
{
    LinkedList l1;
    int choice, data, position;
    do
    {
        cout << "Press (1) One For Insert Begining : " << endl;
        cout << "Press (2) Two For Insert Ending : " << endl;
        cout << "Press (3) Three For Insert Position Vise : " << endl;
        cout << "Press (4) Four For Update : " << endl;
        cout << "Press (5) Five For Display : " << endl;
        cout << "Press (0) Zero For Exit : " << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Any Element : ";
            cin >> data;
            l1.AddBeginningData(data);
            break;

        case 2:
            cout << "Enter Any Element : ";
            cin >> data;
            l1.AddEndingData(data);
            break;
        case 3:

            cout << "Enter Any Element : ";
            cin >> data;
            cout << "Enter Position : ";
            cin >> position;
            l1.AddPositionviseData(data, position);
            break;

        case 4:
            cout << "Enter Position For Update : ";
            cin >> position;
            cout << "Enter Element For Update : ";
            cin >> data;
            l1.UpdateData(position, data);
            break;
        case 5:
            cout << "Display Data...." << endl;
            l1.DisplayData();
            break;

        case 0:
            cout << endl
                 << "Exited..." << endl;
            break;

        default:
            cout << "Invalid Data...." << endl;
            break;
        }
    } while (choice != 0);

    return 1;
}