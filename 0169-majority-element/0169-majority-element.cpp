class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto x:umap){
            if(x.second>=((nums.size()+1)/2)){
                ans= x.first;
            }
        }
        return ans;
    }
};