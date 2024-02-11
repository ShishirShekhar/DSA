#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    int low = 0;
    int high = str.length() - 1;

    while (low <= high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }

    return true;
}