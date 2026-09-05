// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
        class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>minarr(n);
        minarr[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            minarr[i]=min(nums[i],minarr[i+1]);
        }
       int maxi=nums[0];
       for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
        if(maxi-minarr[i]<=k)
        return i;
       } 
       return -1;
    }
};