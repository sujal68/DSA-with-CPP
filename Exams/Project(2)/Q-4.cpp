#include <iostream>
using namespace std;

main()
{
    char first, second;
    cout << "Enter Frist Alphabet : " << endl;
    cin >> first;
    cout << "Enter Second Alphabet : " << endl;
    cin >> second;

    do
    {
        cout << first << " ";
        first++;
    } while (first <= second);
}