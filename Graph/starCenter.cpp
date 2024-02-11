/**
 * https://leetcode.com/problems/find-center-of-star-graph/
 * 1791. Find Center of Star Graph
 * Easy
 */

#include <iostream>
#include <vector>
using namespace std;

int findCenter(vector<vector<int>> &edges)
{
    int n = edges.size();
    vector<int> v(n + 2, 0);

    for (int i = 0; i < n; i++)
    {
        for (int num : edges[i])
        {
            v[num]++;
        }
    }

    for (int i = 1; i < n+2; i++)
    {
        if (v[i] == n)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<vector<int>> v({{1, 18}, {18, 2}, {3, 18}, {18, 4}, {18, 5}, {6, 18}, {18, 7}, {18, 8}, {18, 9}, {18, 10}, {18, 11}, {12, 18}, {18, 13}, {18, 14}, {15, 18}, {16, 18}, {17, 18}});

    cout << findCenter(v);
    return 0;
}
