class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); ) {
            int j = i;
            while(j + 1 < nums.size() && nums[j] == nums[j + 1]) {
                j++;
            }
            bool special = true;
            for(int k = 0; k < i; k++) {
                if(nums[k] == nums[i]) {
                    special = false;
                    break;
                }
            }
            if(special) {
                for(int k = j + 1; k < nums.size(); k++) {
                    if(nums[k] == nums[i]) {
                        special = false;
                        break;
                    }
                }
            }
            if(special)
                count++;
            i = j + 1;
        }
        return count;
    }
};