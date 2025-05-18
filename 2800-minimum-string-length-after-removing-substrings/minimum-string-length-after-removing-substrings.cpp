class Solution {
public:
    int minLength(string s) {
        stack<char> a;
        for (char c : s) {
            if (!a.empty() && ((a.top() == 'A' && c == 'B') || (a.top() == 'C' && c == 'D'))) {
                a.pop(); 
            } else {
                a.push(c); 
            }
        }
        return a.size();
    }
};
