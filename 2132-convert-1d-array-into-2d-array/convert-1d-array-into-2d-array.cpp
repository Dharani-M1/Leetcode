class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       vector<vector<int>> ans(m, vector<int>(n));
        if (original.size() != m * n) return {};
        int f=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            ans[i][j]=original[f++];
            }
        }
        return ans;
        
    }
};