class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> um;
        int ans;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto key:um){
            if(key.second==1){
                ans = key.first;
            }
        }
        return ans;
    }   
};