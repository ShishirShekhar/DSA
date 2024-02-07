#include <iostream>
#include <utility>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    // your code goes here
    int low = 0;
    int high = arr.size() - 1;
    pair<int, int> ans;
    int minDiff = INT_MAX;

    while (low <= high)
    {
        int currSum = arr[low] + arr[high];
        if (abs(currSum - x) < minDiff)
        {
            minDiff = abs(currSum - x);
            ans.first = low;
            ans.second = high;
        }

        if (currSum > x)
        {
            high--;
        }
        else if (currSum < x)
        {
            low++;
        }
    }

    return ans;
}