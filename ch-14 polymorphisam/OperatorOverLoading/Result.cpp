#include <iostream>
using namespace std;

class Result
{
protected:
    char sub[20];
    int mark;

public:
    // setter
    void setSubjectData()
    {
        cout << "Enter Subject Name : ";
        cin >> sub;
        cout << "Enter This " << sub << " Marks : ";
        cin >> mark;
    }
    // getter
    void getSubjectData()
    {
        cout << sub << " : " << mark << endl;
    }
    Result operator-(int num)
    {
        Result tmp;
        tmp.mark = this->mark - num;
        return tmp;
    }
    void getMathData()
    {
        cout << "Math : " << mark << endl;
    }
    void getEngData()
    {
        cout << "Eng : " << mark << endl;
    }
    Result operator+(int num)
    {
        Result tmp;
        tmp.mark = this->mark + num;
        return tmp;
    }
    void getGujData()
    {
        cout << "Guj : " << mark << endl;
    }
    void getSsData()
    {
        cout << "SS : " << mark << endl;
    }
    void getComData()
    {
        cout << "Com : " << mark << endl;
    }

    Result operator+(Result other)
    {
        Result tmp;
        tmp.mark = this->mark + other.mark;
        return tmp;
    }
    void getTotalData()
    {
        cout << endl
             << "Total Of Subject Marks : " << mark;
    }
    int getMarks()
    {
        return mark;
    }
};