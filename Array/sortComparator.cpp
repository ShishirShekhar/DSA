#include <iostream>
#include <vector>
using namespace std;

bool acc(int a, int b)
{
    return a < b;
}

bool des(int a, int b)
{
    return a > b;
}

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    if (flag)
    {
        sort(a.begin(), a.end(), acc);
    }
    else
    {
        sort(a.begin(), a.end(), des);
    }

    return a;
}