class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] - a[0] < b[1] - b[0];
    }

    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size(), tot = 0;
        sort(costs.begin(), costs.end(), cmp);
        for(int i = 0; i < n; i++) tot += costs[i][0];
        for(int i = 0; i < n/2; i++) {
            tot += (costs[i][1] - costs[i][0]);
        }
        return tot;
    }
};