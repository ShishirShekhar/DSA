/**
 * https://leetcode.com/problems/maximum-subarray/
 * 53. Maximum Subarray
 * Medium
 */

#include <iostream>
#include <vector>
using namespace std;

// Max of a sub array
int maxSubArray(vector<int> &nums)
{
    // Check if size if 1
    if (nums.size() == 1)
        return nums[0];

    // Check if all the elements are negative
    bool allNeg = true;
    int largest = INT_MIN;

    for (int num : nums)
    {
        if (num > 0)
            allNeg = false;
        largest = max(largest, num);
    }

    if (allNeg)
        return largest;

    // If array is not all negative
    // use kadane's algorithm
    int currSum = 0;
    int ans = INT_MIN;

    for (int num : nums)
    {
        currSum = currSum + num;
        // If current sum if less than 0, set it to 0
        if (currSum < 0)
        {
            currSum = 0;
        }

        ans = max(ans, currSum);
    }

    return ans;
}
