#include <bits/stdc++.h>
using namespace std;
// OPTIMAL SOLUTION
int missingMultiple(vector<int> &nums, int k)
{
    unordered_set<int> st(nums.begin(), nums.end());
    int x = k;
    while (st.count(x))
    {
        x += k;
    }
    return x;
}

// BRUTE FORCE SOLUTION
int missingMultipleBrute(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 1;
    int ctr = 1;
    while (ctr <= n)
    {
        bool found = false;
        int c = k * i;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == c)
            {
                found = true;
                break;
            }
        }
        if (!found)
            return k * i;
        i++;
        ctr++;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 4, 7, 10, 15};
    cout << endl
         << missingMultiple(arr, 5);

    return 0;
}
