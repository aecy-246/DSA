class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pos = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pos = i;
                break;
            }
        }
        if(pos==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>pos;i--){
            if(nums[i]>nums[pos]){
                int temp = nums[i];
                nums[i] = nums[pos];
                nums[pos] = temp;
                break;
            }
        }
        reverse(nums.begin()+pos+1,nums.end());
    }
};