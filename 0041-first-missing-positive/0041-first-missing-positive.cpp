class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        bool contains1=false ;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                contains1=true;
            }
            if(nums[i]<=0 ||nums[i]>n){ //as we only care about the range [1,n]
                nums[i]=1;
            }
        }
        if(contains1==false) {
            return 1;
        }
        // marking the no negative 
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int idx=num-1;

            if(nums[idx]<0) continue ; //if alreadt marked negative then leave it 
            nums[idx] *=-1; //marked negative 
        }
            for(int i=0;i<n;i++){
                if(nums[i]>0){     //if any no is not marked negatvie it means no greater than it is not present in the array 
                    return i+1;
                }

            }
        
        return n+1;
    }
};