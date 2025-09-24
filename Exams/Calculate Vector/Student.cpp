#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

template <class T>
class Student
{
private:
    vector<T> id;
    vector<string> name;

public:
    Student()
    {
        T sid;
        char sname[40];

        cout << "Enter Student Id : ";
        cin >> sid;
        cin.ignore();
        cout << "Enter Student Name : ";
        cin.getline(sname, 40);

        id.push_back(sid);
        name.push_back(string(sname));

        cout
            << "Student Added SuccessFully Done..." << endl
            << endl;
    }
    void getStudentData()
    {
        if (id.size() == 0)
        {
            cout << "No students to display!" << endl
                 << endl;
            return;
        }

        cout << "All Students" << endl;
        for (int i = 0; i < id.size(); i++)
        {
            cout << "ID: " << id[i] << " | Name: " << name[i] << endl;
        }
    }
    void AddStudentData(T sid, char sname[40])
    {
        id.push_back(sid);
        name.push_back(string(sname));
    }
    void RemoveStudentData(T sid)
    {
        for (int i = 0; i < id.size(); i++)
        {
            if (id[i] == sid)
            {
                id.erase(id.begin() + i);
                name.erase(name.begin() + i);
                cout << "Student " << sid << " removed successfully doneee bro...." << endl
                     << endl;
                return;
            }
        }
        cout << "Student ID " << sid << " not found!" << endl
             << endl;
    }
    void SearchStudentData(T sid)
    {
        for (int i = 0; i < id.size(); i++)
        {
            if (id[i] == sid)
            {
                cout << "Student Mil Gaya...." << endl;
                cout << "Student ID: " << id[i] << endl;
                cout << "Student Name: " << name[i] << endl
                     << endl;
                return;
            }
        }
        cout << "Student ID " << sid << " not found!" << endl
             << endl;
    }
};