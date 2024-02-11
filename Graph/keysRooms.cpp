/**
 * https://leetcode.com/problems/keys-and-rooms/
 * 841. Keys and Rooms
 * Medium
 */

#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &rooms, vector<bool> &visited, int src)
{
    if (!visited[src])
    {
        visited[src] = true;

        for (int key : rooms[src])
        {
            dfs(rooms, visited, key);
        }
    }
}

bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    int n = rooms.size();
    vector<bool> visited(n, false);

    dfs(rooms, visited, 0);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            return false;
        }
    }

    return true;
}