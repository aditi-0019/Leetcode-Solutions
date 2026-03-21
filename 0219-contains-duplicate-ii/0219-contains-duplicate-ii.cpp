#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;  // value → last index

        for(int i = 0; i < nums.size(); i++) {

            // agar element pehle se hai
            if(mp.count(nums[i])) {

                // distance check
                if(i - mp[nums[i]] <= k) {
                    return true;
                }
            }

            // update latest index
            mp[nums[i]] = i;
        }

        return false;
    }
};