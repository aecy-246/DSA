class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long temp = 1;
        ans.push_back(temp);
        for(int i=0;i<rowIndex;i++){
            temp = temp*(rowIndex-i);
            temp =  temp/(i+1);
            ans.push_back(temp);
        }
        return ans;
    }
};