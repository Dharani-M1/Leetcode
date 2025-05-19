class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ch1=0,ch2=0,ch3=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ch1++;
            }
             if(nums[i]==1){
                ch2++;
            }
             if(nums[i]==2){
                ch3++;
            }
        }
        int i=0;
        while(ch1>0){
            nums[i]=0;
            i++;
            ch1--;
        }
          while(ch2>0){
            nums[i]=1;
            i++;
            ch2--;
        }
          while(ch3>0){
            nums[i]=2;
            i++;
            ch3--;
        }
    }
};