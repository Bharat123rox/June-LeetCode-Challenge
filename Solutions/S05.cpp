class Solution {
public:
    vector<int> sum;
    Solution(vector<int>& w) {
        int s = 0;
        for(auto val: w) {
            sum.push_back(s += val);
        }
    }
    
    int pickIndex() {
        int m = sum.back();
        int idx = rand() % m;
        return upper_bound(sum.begin(), sum.end(), idx) - sum.begin();
    }
};