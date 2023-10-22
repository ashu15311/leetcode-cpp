class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid,n=nums.size();

        while(s<=e){
            mid=s+(e-s)/2;
            
            // //peak
            // if((mid==0 || nums[mid]>nums[mid-1]) && 
            //    (mid==n-1 || nums[mid]>nums[mid+1])){
            //     return mid;
            // }

            //left
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }

            //right
            else if(nums[mid]>nums[mid+1])
                e=mid-1;
        }
        return s;
    }
};