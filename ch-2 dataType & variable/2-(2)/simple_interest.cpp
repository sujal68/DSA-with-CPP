#include<iostream>
using namespace std;

main()
{
    // The Simple Interest
    cout << " Find Simple Interest." << endl << endl ;
    float p , r , n;
    cout << "Enter Principal Amount :";
    cin >> p;
    cout << "Enter Rate :";
    cin >> r;
    cout << "Enter Year :";
    cin >> n;

    cout << endl;
    cout << "Principal Amount\t:" << p << endl;
    cout << "Total Interest of\t: "<< p * r * n / 100 << endl;
    cout << "Total Amount\t\t:" << p + (p * r * n / 100) << endl << endl;
}