class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            long long res = 1;
            temp.push_back(res);
            for(int j=0;j<i;j++){
                res = res*(i-j);
                res = res/(j+1);
                temp.push_back(res);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};