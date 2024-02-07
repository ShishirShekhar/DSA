/**
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
 * 167. Two Sum II - Input Array Is Sorted
 * Medium
 */


#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int low = 0;
    int high = numbers.size() - 1;
    int minDiff = INT_MAX;
    vector<int> ans(2);

    while (low <= high)
    {
        int currSum = numbers[low] + numbers[high];
        if (abs(currSum - target) < minDiff)
        {
            minDiff = abs(currSum - target);
            ans[0] = low + 1;
            ans[1] = high + 1;
        }

        if (currSum > target)
        {
            high--;
        }
        else if (currSum < target)
        {
            low++;
        } else {
            break;
        }
    }

    return ans;
}
