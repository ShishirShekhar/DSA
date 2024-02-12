#include <iostream>
#include <vector>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    vector<int> v;
    int rowStart = 0;
    int colStart = n - 1;

    int rowEnd = m - 1;
    int colEnd = 0;

    while (colStart >= colEnd)
    {
        v.push_back(arr[rowStart][colStart]);
        if (colStart % 2)
        {
            rowStart++;
            if (rowStart > rowEnd)
            {
                rowStart = m - 1;
                rowEnd = 0;
                colStart--;
            }
        }
        else
        {
            rowStart--;
            if (rowStart < rowEnd) {
                rowStart = 0;
                rowEnd = m -1;
                colStart--;
            }
        }
    }

    return v;
}

int main()
{
    vector<vector<int>> v({{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12},
                           {13, 14, 15, 16}});
    vector<int> ans;

    ans = WavePrint(4, 4, v);

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
