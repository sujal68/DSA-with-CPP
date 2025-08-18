#include <iostream>
using namespace std;

main()
{
    // length finder
    // char name[30];
    // cout << "Enter Your Name : ";
    // cin.getline(name, 30);

    // int length = 0;
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     length++;
    // }
    // cout << length;
    //--------------------------------------------

    // upper case \ lower case
    // char name[50];
    // cout << "Enter Your Name : ";
    // cin.getline(name, 30);

    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     if (name[i] >= 'A' && name[i] <= 'Z')
    //     {
    //         name[i] = name[i] + 32;
    //     }
    // }
    // cout << name;
    //---------------------------------------

    // Toggle Case
    char name[50];
    cout << "Enter Your Name : ";
    cin.getline(name, 30);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
        else if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    cout << name;
}