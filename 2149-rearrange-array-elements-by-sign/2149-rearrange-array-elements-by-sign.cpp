class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        int j=0;
        for(int k=0;k<nums.size()/2;k++){
            while(i<nums.size()&& nums[i]<0){
                i++;
            }
            ans.push_back(nums[i]);
            i++;
            while( j<nums.size()&&nums[j]>0){
                j++;
            }
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};