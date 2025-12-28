// Q - 2. find missing element in an array.

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    // sum = 18;

    int missing = total - sum; // 21 - 18 = 3;

    cout << "Missing Element = " << missing;
}
