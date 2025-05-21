class Solution {
public:
struct people{
    string name;
    int height;
};
static bool cmp(const people& a, const people& b) {
        return a.height > b.height; 
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<people>people(n);
        for (int i = 0; i < n; ++i) {
            people[i] = {names[i], heights[i]};
        }
        sort(people.begin(),people.end(),cmp);
        vector<string> sortedNames;
        for (const auto& p : people) {
            sortedNames.push_back(p.name);
        }
        return sortedNames;
    }
};
