class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int N = nums1.size();
        bool even = false;
        bool odd = false;
        for(int i = 0; i < N; i++) {
            if(nums1[i] % 2 == 0)
                even = true;
            else
                odd = true;
        }
        if(even == false || odd == false)
            return true;
        int mini = INT_MAX;
        for(int i = 0; i < N; i++) {
            mini = min(mini, nums1[i]);
        }
        if(mini % 2 != 0)
            return true;
        return false;
    }
};