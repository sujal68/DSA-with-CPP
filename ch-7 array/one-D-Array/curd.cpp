#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter Number Of Index : ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Any Number of array : " << "[" << i << "] : ";
        cin >> array[i];
    }

    cout << system("cls");

    int n;
    int position, element;
    do
    {
        cout << endl
             << endl
             << "CURD Oparation....." << endl;

        cout << endl
             << "Presss 1 For Insert....." << endl;
        cout << "Presss 2 For Push....." << endl;
        cout << "Presss 3 For Fetch....." << endl;
        cout << "Presss 4 For Update....." << endl;
        cout << "Presss 5 For Detete....." << endl;
        cout << "Presss 6 For Pop....." << endl;
        cout << "Presss 0 For Exits....." << endl;

        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            cout << endl
                 << "Insert..." << endl;

            cout << "Enter Your Index Of Position : ";
            cin >> position;
            cout << "Enter Your Changes Element : ";
            cin >> element;

            if (position < size && position >= 0)
            {
                for (int i = size - 1; i >= position; i--)
                {
                    array[i + 1] = array[i];
                }
                array[position] = element;
                size++;
            }
            break;
        case 2:
            system("cls");
            cout << endl
                 << "Push..." << endl;
            cout << "Enter Element : ";
            cin >> element;
            array[size] = element;
            size++;
            break;
        case 3:
            system("cls");
            cout << endl
                 << "Fetch..." << endl;
            for (int i = 0; i < size; i++)
            {
                cout
                    << array[i] << "\t";
            }
            break;
        case 4:
            system("cls");
            cout << endl
                 << "Update..." << endl;
            cout << "Enter Your Index Of Position : ";
            cin >> position;
            cout << "Enter Your Changes Element : ";
            cin >> element;

            if (position < size && position > 0)
            {
                array[position] = element;
            }
            break;
        case 5:
            system("cls");
            cout << endl
                 << "Delete..." << endl;
            cout << "Enter Your Index Of Position : ";
            cin >> position;

            if (position < size && position >= 0)
            {
                for (int i = position - 1; i < size; i++)
                {
                    array[i] = array[i + 1];
                }
                size--;
            }
            break;
        case 6:
            system("cls");
            cout << endl
                 << "Pop..." << endl;
            size--;
            break;
        case 0:
            system("cls");
            cout << endl
                 << "Exits..." << endl;
            break;

        default:
            if (n > size)
            {
                cout << "Invalid Choice broooooooooooooo!!!!!!!!!!!!!!! Retry..." << endl;
            }
        }

    } while (n != 0);
}