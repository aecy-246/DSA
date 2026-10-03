class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int lowest = target - (nums[0]+ nums[1]+ nums[2]);
        int ans = nums[1]+nums[2]+nums[0];
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                long long sum = (long long)nums[i]+nums[j]+nums[k];
                if(sum<target){
                    j++;
                    if(target - sum<lowest){
                        lowest = target-sum;
                        ans = sum;
                    }
                    while(j<k && nums[j-1] == nums[j]) j++;
                }
                else if(sum>target){
                    k--;
                    if(sum-target < lowest){
                        lowest = sum-target;
                        ans = sum;
                    }
                    while(j<k && nums[k+1]==nums[k]) k--;
                }
                else{
                    return target;
                }
            }
        }
        return ans;
    }
};