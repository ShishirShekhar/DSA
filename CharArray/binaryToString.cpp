#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string s)
{
    // your code goes here
    int ans = 0;
    int power = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * pow(2, power);
        power++;
    }

    return ans;
}