class Solution {
public:
    void square(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i]; 
        }
    }

    vector<int> sortedSquares(vector<int>& nums) {
        square(nums);     
        sort(nums.begin(), nums.end());
        return nums;
    }
};
