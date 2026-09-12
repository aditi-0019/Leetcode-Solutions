class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        int minindex=0;
        int maxindex=0;
        for(int i=0;i<nums.size();i++){
            if(mini==nums[i]){
                minindex=i;
            }
            if(maxi==nums[i]){
                maxindex=i;
            }
        }
        int less=min(minindex,maxindex);
        int more=max(minindex,maxindex);
        int answer = min(min(more + 1, n - less),less + 1 + n - more);
        return answer;
    }  
};