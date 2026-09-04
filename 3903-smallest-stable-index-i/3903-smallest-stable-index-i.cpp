class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> score;
        if (nums.size() == 1)
            return 0;
        for (int i = 0; i < nums.size(); i++) {
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for (int j = 0; j <= i; j++) {
                maxi = max(maxi, nums[j]);
            }
            for (int j = i; j < nums.size(); j++) {
                mini = min(mini, nums[j]);
            }
            int diff = abs(maxi - mini);
            score.push_back(diff);
        }
        // for(int i=0;i<score.size();i++){
        //     int minimum=INT_MAX;
        //     if(score[i]<=k){
        //         minimum=min(minimum,score[i])
        //     }
        // }
        for (int i = 0; i < score.size(); i++) {
            if (score[i] <= k)
                return i;
        }
    
    return -1;
}
};
