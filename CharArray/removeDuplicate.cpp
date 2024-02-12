#include <iostream>
#include <string>
#include <set>
using namespace std;

string removeDuplicate(string s)
{
    // your code goes here
    set<int> mySet;
    string ans;

    for (char c : s)
    {
        mySet.insert(c);
    }

    for (char c : mySet)
    {
        ans += c;
    }

    return ans;
}