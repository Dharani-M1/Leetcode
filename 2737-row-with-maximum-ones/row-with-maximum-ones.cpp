class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>res;
        int row =0;
        int onecount=INT_MIN;

        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>onecount){
                onecount=count;
                row=i;
            }
        }

        
        res.push_back(row);
        res.push_back(onecount);

        return res;
    }
};