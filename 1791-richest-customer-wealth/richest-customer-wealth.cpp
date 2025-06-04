class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int sum=0;
        for(int i=0;i<accounts.size();i++){
             int ans=0; 
            for(int j=0;j<accounts[i].size();j++){
                ans+=accounts[i][j];
            }
            sum=max(sum,ans);
        }
        return sum;
    }
};