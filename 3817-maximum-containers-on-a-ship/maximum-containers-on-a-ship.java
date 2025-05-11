class Solution {
    public int maxContainers(int n, int w, int maxWeight) {
      
        int desk = n * n;  
        int ans = 0; 

     
        for (int i = desk; i >= 0; i--) {
           
            if (desk * w <= maxWeight) {
                ans = desk; 
                break; 
            } else {
                desk--;
            }
        }
        
        return ans;
    }
}