class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        long long sum = 0;
        while (x != 0) {
            int rem = x % 10;
            sum = sum * 10 + rem;
            x = x / 10;
        }
        if(sum<0){
            return false;
        }
       

        if(sum==a){
            return true;
        }
        return false;
    }
};