class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid = (low+high)/2;
        while(low<=high){
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high = mid-1;
            else low = low+1;
            mid = (low+high)/2;
        }
        if(nums[mid]>target){
            if(mid==0) return 0;
            else return mid-1;
        }
        else{
            // if (mid==nums.size()-1) return nums.size()-1;
            return mid+1;
        }
    }
};