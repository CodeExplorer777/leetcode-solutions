// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include <bits/stdc++.h>
using namespace std;
int findByBrute(vector<int> &arr, int n)
{
    int max1 = 0;
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ctr++;
            if (ctr > max1)
            {
                max1 = ctr;
            }
        }
        else ctr=0;
    }

    return max1;
}
int main()
{

    vector<int> arr = {1, 1, 0, 1, 1, 1};
    cout << findByBrute(arr, 6);

    return 0;
}