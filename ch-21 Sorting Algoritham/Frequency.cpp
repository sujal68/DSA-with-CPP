#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Frequency of each element : ";
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        int flag = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        cout << arr[i] << " -> " << count << " times" << endl;
    }

    return 0;
}
