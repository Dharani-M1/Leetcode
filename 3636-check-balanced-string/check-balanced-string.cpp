class Solution {
public:
    bool isBalanced(string num) {
        int evensum=num[0]-'0';
        int oddsum=0;

        for(int i=1;i<num.size();i++){
             int digit = num[i] - '0';
            if(i%2==0){
                evensum+=digit;
            }
            else{
                oddsum+=digit;
            }
        }
        return oddsum==evensum;
    }
};