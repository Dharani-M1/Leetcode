class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> ma;
        for (int i = 0; i < nums.size(); i++) {
            if (ma.count(nums[i])) {
                return nums[i]; 
            }
            ma[nums[i]] = 1; 
        }
        return -1; 
    }
};
