class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int temp=1;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1]+1){
                temp++;
            }
            else{
                temp = 1;
            }
            ans = max(ans, temp);
        }
        return ans;
    }
};