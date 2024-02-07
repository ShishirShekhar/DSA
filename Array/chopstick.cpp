#include <iostream>
#include <vector>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(), length.end());

    int pair = 0;
    int low = 0;
    int high = length.size() - 1;

    while (low <= high)
    {
        if (high - low <= D)
        {
            pair++;
            low++;
            high--;
        }
        else
        {
            high--;
        }
    }

    return pair;
}