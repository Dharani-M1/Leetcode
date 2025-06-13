class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> maga;
        for (char ch : magazine) {
            maga[ch]++;
        }
        for (char ch : ransomNote) {
            if (maga[ch] == 0) {
            return false;
            }
            maga[ch]--;
        }
        return true;
    }
};