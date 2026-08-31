class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = k%nums.size();
        reverse(nums.begin(), nums.begin()+nums.size()-n);
        reverse (nums.begin()+nums.size()-n, nums.end());
        reverse (nums.begin(), nums.end());
    }
};