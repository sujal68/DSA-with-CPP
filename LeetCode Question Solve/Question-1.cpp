#include <iostream>
#include <unordered_map>
using namespace std;

int findIndexOfSumOfTwoNum(int array[], int target)
{
   unordered_map<int, int> order;
   for (int i = 0; i < 4; i++)
   {
      int currentNum = array[i];
      int need = target - currentNum;

      if (order.find(need) != order.end())
      {
         cout << order[need] << " " << i << endl;
         return 1;
      }
      order[currentNum] = i;
   }
}
int main()
{
   int array[4] = {2, 7, 11, 15};
   int target = 9;
   findIndexOfSumOfTwoNum(array, target);
}