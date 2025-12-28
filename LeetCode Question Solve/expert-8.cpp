// Q - 4. single number
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;
    // debugging steps
    // first iteration : result = 0 ^ 4 = 4
    // second iteration : result = 4 ^ 1 = 5
    // third iteration : result = 5 ^ 2 = 7
    // forth iteration : result = 7 ^ 1 = 6
    // fifth iteration : result = 6 ^ 2 = 4

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    cout << "The single number is: " << result;
}
