/**
 * https://leetcode.com/problems/rotate-array/
 * 189. Rotate Array
 * Medium
 */

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();

    if (n <= 1)
    {
        return;
    }
    k = k % n;
    if (k > n)
    {
        return;
    }

    vector<int> ans;

    for (int i = n - k; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < n - k; i++)
    {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = ans[i];
    }
}
