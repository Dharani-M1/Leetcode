#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int num : nums) {
            if(set.count(num)) return num;
            set.insert(num);
        }
        return -1; 
    }
};
