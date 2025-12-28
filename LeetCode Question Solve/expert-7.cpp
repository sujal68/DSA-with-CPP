// Q - 3. sort colors

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    // 0  1  2  3  4  5
    int n = 6;

    int low = 0, mid = 0, high = n - 1;
    // second iteration me mid = 1 , low = 1, high = 4
    // third iteration me mid = 2 , low = 2, high = 4
    // array[0 , 0 , 2 , 1 , 1 , 2]
    //       0   1   2   3   4   5
    // forth iteration me array[0 , 0 , 1 , 1 , 2 , 2]
    // fifth iteration me mid = 3 , low = 2, high = 3;
    // array [0 , 0 , 1 , 1 , 2 , 2];
    //        0   1   2   3   4   5
    // sixth iteration me mid = 4 , low = 2, high = 3;

    // final output : 0 0 1 1 2 2
    while (mid <= high) // mid = 4 <= high = 3;
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        // first time iteration : mid = 0, high = 2
        // high--;
        // second time iteration : mid = 0 , high = 2;
        // third time iteration : mid = 0 , high = 2;
        // forth time iteration : mid = 1 , high = 2;
        // high --; high = 3;
    }

    // print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
