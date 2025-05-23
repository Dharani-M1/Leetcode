class Solution {
public:
    static bool compare(const vector<int>& a, const vector<int>& b) {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units = 0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        for (int i = 0; i < boxTypes.size(); i++) {
            int load = min(boxTypes[i][0], truckSize);
            units += load * boxTypes[i][1];
            truckSize -= load;
            if (truckSize == 0)
                break;
        }
        return units;
    }
};
