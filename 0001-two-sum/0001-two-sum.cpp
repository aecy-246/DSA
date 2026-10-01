class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        vector<int> ans;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp.insert({i,nums[i]});
        }

        sort(nums.begin(), nums.end());

        while(left<right){
            if(nums[left]+nums[right]<target){
                left++;
            }

            else if(nums[left]+nums[right]>target){
                right--;
            }

            else {
                int first = -1;

                for (auto c : mp) {
                   if (c.second == nums[left]) {
                        first = c.first;
                        ans.push_back(first);
                        break;
                    }
                }

                for (auto c : mp) {
                    if (c.second == nums[right] && c.first != first) {
                        ans.push_back(c.first);
                        break;
                    }
                }   
                break;
            }

        }
        return ans;
    }
};