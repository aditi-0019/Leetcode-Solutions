class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        int maximum=-1; //arr[i] is always positive else you have to take INT_MIN
        // if(n==1)
        //  return arr[-1];
        for(int i=n-1;i>=0;i--){
          ans.push_back(maximum);
          if(arr[i]>=maximum){
            maximum=max(maximum,arr[i]);
          }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};