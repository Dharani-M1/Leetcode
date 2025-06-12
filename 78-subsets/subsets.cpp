class Solution {
public:


    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int temp = n;
        int digit = 0;
        while(temp--){
            digit = (digit<<1) | 1;
        }
        vector<vector<int>> check;
        for(int i = 0; i<=digit; i++){
            int p = i;
            int j = n-1;
            vector<int> ans;
            while(p){
                if(p&1){
                    ans.push_back(nums[j]);
                }
                p = p>>1;
                j--;
            }
            check.push_back(ans);
        }
        return check;
    }
};