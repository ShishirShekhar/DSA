#include <iostream>
#include <string>
using namespace std;

bool arePermutation(string A, string B)
{
    // your code goes here
    for (char c : B)
    {
        if (A.find(c) == string::npos)
        {
            return false;
        }
    }

    return true;
}

int main() {
    string A = "test";
    string B = "ttes";

    cout << arePermutation(A, B);

    return 0;
}