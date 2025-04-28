class Solution {
    public char findTheDifference(String s, String t) {
        int sums = 0, summ = 0;

    
        for (char c : s.toCharArray()) {
            sums += c;
        }

        for (char c : t.toCharArray()) {
            summ += c;
        }

        
        return (char)(summ - sums);
    }
}