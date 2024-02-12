#include <iostream>
#include <vector>
using namespace std;

bool handleSort(pair<int, int> a, pair<int, int> b)
{
    int first = (a.first * a.first) + (a.second * a.second);
    int second = (b.first * b.first) + (b.second * b.second);
    return first < second;
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    // your code  goes here
    sort(v.begin(), v.end(), handleSort);
    return v;
}