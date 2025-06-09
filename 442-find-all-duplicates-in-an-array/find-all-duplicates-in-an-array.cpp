class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int>ans;
        vector<int>res;
        for(int num:nums){
            if(ans.count(num)){
            res.push_back(num);
            }
            else{
            ans.insert(num);
            }
        }
        return res;
    }
};