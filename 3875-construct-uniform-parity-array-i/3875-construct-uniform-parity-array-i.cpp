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
        if(even && !odd)
            return true;
        if(!even && odd)
            return true;
        if(even && odd)
            return true;

        return false;
    }
};