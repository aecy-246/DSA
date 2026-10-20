class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int ans = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<nums.size();i++){
            // sum+=nums[i];
            // if(sum==k){
            //     ans++;
            //     for(auto itr:mp){
            //         if(itr.second == sum-k){
            //             ans++;
            //         }
            //     }
            //     // mp[i] = sum;
            // }
            // else{
            //     for(auto itr:mp){
            //         if(itr.second == sum-k){
            //             ans++;
            //         }
            //     }
            // }
            //     mp[i] = sum;


            sum+=nums[i];
            ans+=mp[sum-k];
            mp[sum] ++;
        }

        return ans;
    }
};