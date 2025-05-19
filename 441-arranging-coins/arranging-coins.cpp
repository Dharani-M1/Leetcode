class Solution {
public:
    int arrangeCoins(int n) {
    int i=1;
   while(n>=i)
   {
    n=n-i;
    i=i+1;
   } 
   return i-1;
        
    }
};

