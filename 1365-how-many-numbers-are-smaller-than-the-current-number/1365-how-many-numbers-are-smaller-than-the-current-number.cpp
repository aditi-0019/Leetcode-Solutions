class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>freq;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                // if(i==j) continue;
                if(nums[i]>nums[j]){
                    count++ ;
                }

            }
            freq.push_back(count);
        }
        return freq;
    }
};