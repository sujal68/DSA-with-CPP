    #include <iostream>
    using namespace std;

    main()
{
    float marks;
    cout << "Enter Your Marks :";
    cin >> marks;

    if (marks >= 91 && marks <= 100)
    {
        cout << endl
             << "Your Grade A+";
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << endl
             << "Your Grade A";
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << endl
             << "Your Grade B+";
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << endl
             << "Your Grade B";
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << endl
             << "Your Grade C+";
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << endl
             << "Your Grade C";
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << endl
             << "Your Grade D";
    }
    else if (marks >= 0 && marks <= 32)
    {
        cout << endl
             << "You Are Failed..!";
    }
    else
    {
        cout << endl
             << "Invalid Numbers!! (0 t0 100)..";
    }
}