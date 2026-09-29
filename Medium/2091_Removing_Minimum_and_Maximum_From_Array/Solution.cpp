#include <bits/stdc++.h>
using namespace std;



    int mnimumDeletions(vector<int>& nums) {
        int mn = 0;
        int mx = 0;
        int n = nums.size();
        if(n==1) return 1;
        
        for(int i =1;i < n;i++){
            if (nums[i] < nums[mn]){
                mn = i;
            }
            else if(nums[i] > nums[mx]){
                mx = i;
            }
        }


        if(mn>mx){
            swap(mn,mx);
        }
        // 1. Remove both from the left
        int left = mx + 1;

        // 2. Remove both from the right
        int right = n - mn;

        // 3. Remove mn from left and mx from right
        int both = (mn + 1) + (n - mx);

        return min({left, right, both});
    }



int main() {

    vector<int> nums = {2,10,7,5,4,1,8,6};

    cout<<mnimumDeletions(nums);
    

    return 0;
}