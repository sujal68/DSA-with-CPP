#include <iostream>
#include <string>
using namespace std;

int main()
{
    char string[100];
    char *ptr;
    int length = 0;

    cout << "Enter Any your string : ";
    gets(string);

    ptr = string;
    for (int i = 0; *ptr != '\0'; i++)
    {
        length++;
        ptr++;
    }

    cout << endl
         << "Your Length Of string : " << length;
}