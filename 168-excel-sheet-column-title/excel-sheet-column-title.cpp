class Solution {
public:
    string convertToTitle(int colNum) {
        string ans;

        while (colNum--) {
            ans += colNum % 26 + 'A';
            colNum /= 26;
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }
};