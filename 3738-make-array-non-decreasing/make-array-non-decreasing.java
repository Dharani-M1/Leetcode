class Solution {
    public int maximumPossibleSize(int[] nums) {

        int count = 0, prev = -1;

        for(int num : nums) {
            if(num >= prev) {
                prev = num;
                count++;
            }
        }

        return count;
    }
}