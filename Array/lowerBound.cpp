#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int low = 0;
    int high = A.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid] > Val)
        {
            high = mid - 1;
        }
        else if (A[mid] < Val)
        {
            ans = A[mid];
            low = mid + 1;
        }
        else
        {
            ans = A[mid];
            break;
        }
    }

    return ans;
}