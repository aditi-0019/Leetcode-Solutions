class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                m[nums[i]] = m[nums[i]] + 1;
            }
        }
        if (m.size() == 0)
            return -1;
        int maxfreq = 0;
       int maxkey=INT_MIN;
       int minkey=INT_MAX;
        bool tie;
        // int minkey;
        for (auto it : m) {
            if (maxfreq < it.second) {
                maxfreq = max(maxfreq, it.second);
                maxkey = it.first;
                minkey = it.first;
                tie = false;
            }
            if (maxfreq == it.second) {
                tie = true;
                minkey = min(minkey, it.first);
            }
        }
        if(tie==true) return minkey;
        else
        return maxkey; 
    }
};