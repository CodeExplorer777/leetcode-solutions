#include <bits/stdc++.h>
using namespace std;
string shortestBeautifulSubstring(string s, int k)
{
    int n = s.length();

    int i = 0;
    int j = 0, ctr = 0;
    string result = "";

    while (j < n)
    {
        if (s[j] == '1')
        {
            ctr++;
        }
        while (ctr > k || s[i] == '0')
        {
            if (s[i] == '1')
            {
                ctr--;
            }

            i++;
        }
        if (ctr == k)
        {
            string temp = s.substr(i, j - i + 1);
            if (result.empty() || result.length() > j - i + 1 || (temp.length() == result.length() && temp < result))
            {
                result = temp;
            }
        }
        j++;
    }
    return result;
}
int main()
{

    string s = "1011";
    cout << shortestBeautifulSubstring(s, 2);

    return 0;
}