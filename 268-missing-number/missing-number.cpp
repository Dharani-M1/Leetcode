class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int res = nums.size();
        int asum=res*(res+1)/2;
        int sum=0;

        for(int aa:nums){
            sum+=aa;
        }
        
        return asum-sum;
    }
};