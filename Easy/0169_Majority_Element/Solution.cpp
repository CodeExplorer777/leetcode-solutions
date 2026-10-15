#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int ctr = 0, elem = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == elem)
        {
            ctr++;
        }
        else
        {
            ctr--;
        }
        if (ctr == 0)
        {
            elem = nums[i + 1];
        }
    }
    return elem;
}
int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;
    return 0;
}