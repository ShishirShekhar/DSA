#include <iostream>
#include <vector>
#include <utility>
using namespace std;

bool sortWidth(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

bool sortHeight(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    int n = position.size();
    int maxW = INT_MIN;
    int maxH = INT_MIN;

    sort(position.begin(), position.end(), sortWidth);
    for (int i = 0; i < n - 1; i++)
    {
        int diff = position[i].first - position[i + 1].first - 1;
        maxW = max(maxW, diff);
    }
    maxW = max(maxW, W - position[n - 1].first);

    sort(position.begin(), position.end(), sortHeight);
    for (int i = 0; i < n - 1; i++)
    {
        int diff = position[i].second - position[i + 1].second - 1;
        maxH = max(maxH, diff);
    }
    maxH = max(maxH, H - position[n - 1].second);

    return maxW * maxH;
}