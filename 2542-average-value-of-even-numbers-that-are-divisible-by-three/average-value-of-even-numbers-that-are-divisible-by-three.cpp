class Solution {
public:
    int averageValue(vector<int>& nums) {
    int ans=0;
    int count=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            if(nums[i]%3==0){
                ans+=nums[i];
                count++;
            }
        }
    }
    if(count==0){
        return ans;
    }
        return ans/count;
    }
};