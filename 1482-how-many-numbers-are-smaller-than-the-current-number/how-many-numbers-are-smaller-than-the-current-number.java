class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int []count=new int[nums.length];
        int counter=0;
        for(int i=0;i<nums.length;i++){
            counter=0;
            for(int j=0;j<nums.length;j++){
                if(i!=j){
                    if(nums[i]>nums[j]){
                        counter++;
                    }
                }
            }
            count[i]=counter;
        }
        return count;
    }
}