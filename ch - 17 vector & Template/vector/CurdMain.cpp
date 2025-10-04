#include "Curd.cpp"

int main()
{
    Collection c1;
    int choice, element, index;
    do
    {
        cout << "Press (1) One For Insert : " << endl;
        cout << "Press (2) Two For Display : " << endl;
        cout << "Press (3) Three For Update : " << endl;
        cout << "Press (4) Four For Delete : " << endl;
        cout << "Press (5) Five For Exit : " << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Any Element : ";
            cin >> element;
            c1.addDataElement(element);
            cout << "Element " << element << " Are Addedd.........." << endl
                 << endl;
            break;
        case 2:
            c1.displayDataElement();
            cout << endl
                 << endl;
            break;
        case 3:
            cout << "Update Value..." << endl;
            cout << "Enter Index : ";
            cin >> index;
            cout << "Enter Element : ";
            cin >> element;
            c1.updateDataElement(index, element);
            cout << endl
                 << "Updated Successfuly done..." << endl
                 << endl;
            break;
        case 4:
            cout << "Delete Value..." << endl;
            cout << "Enter Index : ";
            cin >> index;
            c1.deleteDataElement(index);
            cout << endl
                 << "Deleted Successfuly done..." << endl
                 << endl;
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