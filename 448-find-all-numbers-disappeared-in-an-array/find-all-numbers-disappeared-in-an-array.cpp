class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> ans;
        vector<int> res;
        for (int num : nums) {
        ans.insert(num);
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (ans.count(i) == 0) {
            res.push_back(i);
            }
        }
        return res;
    }
};