#include <iostream>
using namespace std;

bool isVowel(char c)
{
    bool state = c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    return state;
}

string vowel(string S)
{
    // your code goes here
    string ans;

    for (char c : S)
    {
        if (isVowel(c))
        {
            ans += c;
        }
    }

    return ans;
}