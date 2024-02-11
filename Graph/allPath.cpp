/**
 * https://leetcode.com/problems/all-paths-from-source-to-target/
 * 797. All Paths From Source to Target
 * Medium
 */

#include <iostream>
#include <vector>
using namespace std;

void findPath(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> curr, int src)
{
    curr.push_back(src);
    for (int nbr : graph[src])
    {
        findPath(graph, ans, curr, nbr);
    }

    if (src == graph.size() - 1)
    {
        ans.push_back(curr);
    }

    return;
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
{
    // your code goes here
    vector<vector<int>> ans;
    vector<int> curr;

    findPath(graph, ans, curr, 0);

    return ans;
}

int main()
{
    vector<vector<int>> graph({{1, 2}, {3}, {3}, {}});
    vector<vector<int>> ans;
    ans = allPathsSourceTarget(graph);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int num : ans[i])
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
