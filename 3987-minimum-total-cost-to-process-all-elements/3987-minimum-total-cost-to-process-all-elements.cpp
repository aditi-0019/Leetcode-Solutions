class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long MOD=1e9+7;
        long long currentres=k;
        long long totalcost=0;
        for(int i=0;i<nums.size();i++){
            if(currentres>=nums[i]){
                currentres=currentres-nums[i];
            }
            else {
                long long requiredres=nums[i]-currentres;
                long long requiredoper=(requiredres+k-1)/k;
                totalcost=totalcost+requiredoper;
                currentres=currentres+(requiredoper*k)-nums[i];
            }
        }
        return ((totalcost%MOD)*((totalcost+1)%MOD)/2)%MOD;
        
    }
};