/**
 * https://leetcode.com/problems/string-compression/
 * 443. String Compression
 * Medium
 */

#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    vector<char> v;
    int n = chars.size();
    int count = 1;

    v.push_back(chars[0]);
    for (int i = 1; i < n; i++)
    {
        if (chars[i] == chars[i - 1])
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                string s = to_string(count);
                for (char c : s)
                {
                    v.push_back(c);
                }
            }
            count = 1;
            v.push_back(chars[i]);
        }
    }

    if (count > 1)
    {
        string s = to_string(count);
        cout << s;
        for (char c : s)
        {
            v.push_back(c);
        }
    }
    chars = v;

    return v.size();
}

int main()
{
    vector<char> v({'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'});
    int n = compress(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}
