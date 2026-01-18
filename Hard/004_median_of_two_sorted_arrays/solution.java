class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        int sort[]=new int [n1+n2];
        int i = 0, j = 0;
        int k = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                sort[k++] = nums1[i++];
            } else {
                sort[k++] = nums2[j++];
            }
        }
        while(i<n1){
            sort[k++]=nums1[i++];
        }
        while(j<n2){
            sort[k++]=nums2[j++];
        }   
        if((n1+n2)%2==0){
            return (sort[(n1+n2)/2]+sort[(n1+n2)/2-1])/2.0;
        }
        else{
            return sort[(n1+n2)/2];
        }
                

    }
}