#include "ArrayCurd.cpp"
#include "LinkedListCurd.cpp"
#include "StackCurd.cpp"
#include "QueueCurd.cpp"
#include <iostream>
using namespace std;

int main()
{
    ArrayCurd objArray;
    LinkedListCurd objLinkedList;
    int stackSize;
    cout << endl
         << endl
         << "(For Stack) Enter Stack Size: ";
    cin >> stackSize;
    StackCurd objStack(stackSize);
    int QueueSize;
    cout << endl
         << endl
         << "(For Queue) Enter Queue Size: ";
    cin >> QueueSize;
    Queue objQueue(QueueSize);
    int choice, position, element;

    do
    {
        cout << endl
             << "Welcome to DSA Curd Operations.." << endl;
        cout << "1 press for Array CRUD" << endl;
        cout << "2 press for Linked List CRUD" << endl;
        cout << "3 press for Stack CRUD" << endl;
        cout << "4 press for Queue CRUD" << endl;
        cout << "5 press for Searching System" << endl;
        cout << "6 press for Sorting System" << endl;
        cout << "0 press for Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int choiceA;
            do
            {
                cout << endl
                     << endl
                     << "Array CURD Oparation....." << endl;

                cout << endl
                     << "Presss 1 For Insert....." << endl;
                cout << "Presss 2 For Push....." << endl;
                cout << "Presss 3 For Fetch....." << endl;
                cout << "Presss 4 For Update....." << endl;
                cout << "Presss 5 For Detete....." << endl;
                cout << "Presss 6 For Pop....." << endl;
                cout << "Presss 0 For Exits....." << endl;

                cout << "Enter Choice: ";
                cin >> choiceA;

                switch (choiceA)
                {
                case 1:
                    cout << "Enter Position: ";
                    cin >> position;
                    cout << "Enter Element: ";
                    cin >> element;
                    objArray.insertArray(position, element);
                    break;

                case 2:
                    cout << "Enter Element: ";
                    cin >> element;
                    objArray.PushArray(element);
                    break;
                case 3:
                    objArray.ArrayFetch();
                    break;
                case 4:
                    cout << "Enter Position For Updation : ";
                    cin >> position;
                    cout << "Enter Element: ";
                    cin >> element;
                    objArray.UpdateArray(position, element);
                    break;
                case 5:
                    cout << "Enter Position For Updation : ";
                    cin >> position;
                    objArray.DeleteArrayElem(position);
                    break;
                case 6:
                    objArray.PopArray();
                    break;
                case 0:
                    cout << "Exiting Array CRUD...\n";
                    break;
                }
            } while (choiceA != 0);
            break;
        case 2:
            int choiceL;
            do
            {
                cout << endl
                     << endl
                     << "Linked List CURD Oparation....." << endl;

                cout << endl
                     << "Presss 1 For Insert Beginning....." << endl;
                cout << "Presss 2 For Insert Ending....." << endl;
                cout << "Presss 3 For Insert Position Vise....." << endl;
                cout << "Presss 4 For Update....." << endl;
                cout << "Presss 5 For Display....." << endl;
                cout << "Presss 0 For Exits....." << endl;

                cout << "Enter Choice: ";
                cin >> choiceL;

                switch (choiceL)
                {
                case 1:
                    int dataB;
                    cout << "Enter Any Element : ";
                    cin >> dataB;
                    objLinkedList.AddBeginningData(dataB);
                    break;

                case 2:
                    int dataE;
                    cout << "Enter Any Element : ";
                    cin >> dataE;
                    objLinkedList.AddEndingData(dataE);
                    break;
                case 3:
                    int dataP, positionP;
                    cout << "Enter Any Element : ";
                    cin >> dataP;
                    cout << "Enter Position : ";
                    cin >> positionP;
                    objLinkedList.AddPositionviseData(dataP, positionP);
                    break;
                case 4:
                    int dataU, positionU;
                    cout << "Enter Position For Update : ";
                    cin >> positionU;
                    cout << "Enter Element For Update : ";
                    cin >> dataU;
                    objLinkedList.UpdateData(positionU, dataU);
                    break;
                case 5:
                    cout << "Display Data...." << endl;
                    objLinkedList.DisplayData();
                    break;
                case 0:
                    cout << endl
                         << "Exiting Linked List CRUD..." << endl;
                    break;
                }
            } while (choiceL != 0);
            break;
        case 3:
            int choiceS;
            do
            {
                cout << endl
                     << endl
                     << "Stack CURD Oparation....." << endl;

                cout << endl
                     << "Presss 1 For Push....." << endl;
                cout << "Presss 2 For Pop....." << endl;
                cout << "Presss 3 For Display....." << endl;
                cout << "Presss  4 For Length....." << endl;
                cout << "Presss 0 For Exits....." << endl;

                cout << "Enter Choice: ";
                cin >> choiceS;

                switch (choiceS)
                {
                case 1:
                    int elementS;
                    cout << "Enter Element: ";
                    cin >> elementS;
                    objStack.push(elementS);
                    break;

                case 2:
                    objStack.pop();
                    break;
                case 3:
                    objStack.display();
                    break;
                case 4:
                    cout << "Stack Length : " << objStack.getLength() << endl;
                    break;
                case 0:
                    cout << endl
                         << "Exiting Stack CRUD..." << endl;
                    break;
                }
            } while (choiceS != 0);
            break;
        case 4:
            int choiceQ;
            do
            {
                cout << endl
                     << endl
                     << "Queue CURD Oparation....." << endl;

                cout << endl
                     << "Presss 1 For Enqueue....." << endl;
                cout << "Presss 2 For Dequeue....." << endl;
                cout << "Presss 3 For Front....." << endl;
                cout << "Presss 4 For Rear....." << endl;
                cout << "Presss 5 For Display....." << endl;
                cout << "Presss 0 For Exits....." << endl;

                cout << "Enter Choice: ";
                cin >> choiceQ;

                switch (choiceQ)
                {
                case 1:
                    int elementQ;
                    cout << "Enter Element: ";
                    cin >> elementQ;
                    objQueue.enqueue(elementQ);
                    break;

                case 2:
                    objQueue.dequeue();
                    break;
                case 3:
                    objQueue.get_front();
                    break;
                case 4:
                    objQueue.get_rear();
                    break;
                case 5:
                    objQueue.display();
                    break;
                case 0:
                    cout << endl
                         << "Exiting Queue CRUD..." << endl;
                    break;
                }
            } while (choiceQ != 0);
            break;
        case 5:
            int searchChoice;
            do
            {
                cout << endl
                     << "Searching System..." << endl;
                cout << "Press 1 for Linear Search" << endl;
                cout << "Press 2 for Binary Search (Only Array)" << endl;
                cout << "Press 0 for Exit Searching System" << endl;

                cout << "Enter Choice: ";
                cin >> searchChoice;

                switch (searchChoice)
                {
                case 1:
                {
                    int targetChoice, key;
                    cout << endl
                         << "Search using Linear Search in:" << endl;
                    cout << "1 Array" << endl;
                    cout << "2 Linked List" << endl;
                    cout << "3 Stack" << endl;
                    cout << "4 Queue" << endl;
                    cout << "Enter Choice: ";
                    cin >> targetChoice;

                    switch (targetChoice)
                    {
                    case 1:
                        objArray.linearSearch();
                        break;

                    case 2:
                        objLinkedList.searchLinkedList();
                        break;

                    case 3:
                        objStack.searchStack();
                        break;

                    case 4:
                        objQueue.searchQueue();
                        break;
                    }
                    break;
                }

                case 2:
                {
                    int key;
                    cout << "Enter element to search: ";
                    cin >> key;

                    objArray.binarySearch();
                    break;
                }

                case 0:
                    cout << "Exiting Searching System..." << endl;
                    break;

                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            } while (searchChoice != 0);

            break;
        case 6:
            int sortChoice;
            do
            {
                cout << endl
                     << "Sorting System..." << endl;

                cout << "Press 1 to Sort Array" << endl;
                cout << "Press 2 to Sort Linked List" << endl;
                cout << "Press 3 to Sort Stack" << endl;
                cout << "Press 4 to Sort Queue" << endl;
                cout << "Press 0 to Exit Sorting System" << endl;

                cout << "Enter Choice: ";
                cin >> sortChoice;

                switch (sortChoice)
                {
                case 1:
                    objArray.sortArray();
                    break;

                case 2:
                    objLinkedList.sortLinkedList();
                    break;

                case 3:
                    objStack.sortStack();
                    break;

                case 4:
                    objQueue.sortQueue();
                    break;

                case 0:
                    cout << "Exiting Sorting System..." << endl;
                    break;

                default:
                    cout << "Invalid choice! Try again." << endl;
                }

            } while (sortChoice != 0);

            break;
        case 0:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice! Try Again...";
            break;
        }

    } while (choice != 0);

    return 0;
}