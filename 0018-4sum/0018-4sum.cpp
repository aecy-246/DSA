class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-2;j++){
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum<target){
                        k++;
                        while(k<l && nums[k-1]==nums[k]){
                            k++;
                        }
                    }
                    else if(sum>target){
                        l--;
                        while(k<l && nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                    else{
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        st.insert(temp);
                        k++;
                        l--;
                        while(k<l && nums[k-1] == nums[k]) k++;
                        while(k<l && nums[l+1] == nums[l]) l--;
                    }
                }
            }
        }
        
        vector<vector<int>> ans(st.begin(), st.end());

        return ans;
    }
};