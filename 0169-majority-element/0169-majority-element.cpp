class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = 0;
        int flag = 0;
        int answer;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                flag=1;
            }
        }
        if(flag==0){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    temp++;
                }
            }
            if(temp>nums.size()/2){
                answer = nums[i];
            }
            temp=0;
        }
        return answer;
    }
};