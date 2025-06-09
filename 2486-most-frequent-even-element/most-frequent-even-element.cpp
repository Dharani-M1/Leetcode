class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       unordered_map<int, int> ans;

        for (int num : nums) {
            if (num % 2 == 0) {
                ans[num]++;
            }
        }

             int maxFreq = 0;
        int result = -1;

        for (auto& pair : ans) {
            int number = pair.first;
            int count = pair.second;

            if (count > maxFreq || (count == maxFreq && number < result)) {
                maxFreq = count;
                result = number;
            }
        }

        return result;

    }
};