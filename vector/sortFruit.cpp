#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool sortName(pair<string, int> a, pair<string, int> b)
{
    return a.first < b.first;
}

bool sortPrice(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    // your code  goes here
    if (S == "price")
    {
        sort(v.begin(), v.end(), sortPrice);
    }
    else
    {
        sort(v.begin(), v.end(), sortName);
    }

    return v;
}