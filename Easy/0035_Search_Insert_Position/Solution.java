class Solution {
    public int searchInsert(int[] nums, int target) {
        
        int left = 0;
        boolean targetFound = true;
        int right = nums.length - 1;

        while(left <= right){
            int mid =left + (right - left)/2;
            if (nums[mid] == target){
                targetFound = true;
                return mid;
            }
            else if(nums[mid] < target){
                left = mid + 1 ;
            }
            else if (nums[mid] > target ){
                right = mid - 1;
            }

        }
        
            return left;
        
    }
}