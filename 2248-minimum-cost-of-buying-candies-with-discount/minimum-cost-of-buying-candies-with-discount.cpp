class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n = cost.size(), minCost = 0;
        int i = 0;
        while (i++ < n) {
            if (i % 3 == 0) {
                continue;
            }
            minCost += cost[n - i];
        }
        return minCost;
    }
};