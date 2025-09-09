#include "Result.cpp"
using namespace std;
main()
{
    Result sci, math, eng, guj, ss, com, total;

    sci.setSubjectData();
    math = sci - 3;
    eng = sci - 1;
    guj = sci + 1;
    ss = sci - 2;
    com = sci + 2;

    sci.getSubjectData();
    math.getMathData();
    eng.getEngData();
    guj.getGujData();
    ss.getSsData();
    com.getComData();

    total = sci + math + eng + guj + ss + com;
    total.getTotalData();

    float avg = (float)total.getMarks() / 6;
    cout << endl
         << "Average : " << avg << endl;

    char grade;
    if (avg >= 90)
        grade = 'A';
    else if (avg >= 75)
        grade = 'B';
    else if (avg >= 50)
        grade = 'C';
    else
        grade = 'F';

    cout << "Grade : " << grade << endl;
}