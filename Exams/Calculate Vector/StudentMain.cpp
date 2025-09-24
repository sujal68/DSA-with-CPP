#include "Student.cpp"
#include <string.h>
using namespace std;

int main()
{
    Student<int> s1;
    int choice, id;
    char name[40];
    do
    {
        cout << "Press (1) Add for Student : " << endl;
        cout << "Press (2) Display All Student : " << endl;
        cout << "Press (3) Remove a Student by ID : " << endl;
        cout << "Press (4) Search For a Student by ID : " << endl;
        cout << "Press (5) Five For Exit : " << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Student Id : ";
            cin >> id;
            cin.ignore();
            cout << "Enter Student Name : ";
            cin.getline(name, 40);
            s1.AddStudentData(id, name);
            cout
                << "Student Added...." << endl
                << endl;
            break;
        case 2:
            s1.getStudentData();
            cout << endl
                 << endl;
            break;
        case 3:
            cout << "Enter Student ID To remove: ";
            cin >> id;
            s1.RemoveStudentData(id);
            break;
        case 4:
            cout << "Enter Student ID To search: ";
            cin >> id;
            s1.SearchStudentData(id);
            break;
        case 5:
            cout << "You Are Exiteded...." << endl;
            break;
        default:
            cout << "Invalid Choice !!!!!!!!" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}