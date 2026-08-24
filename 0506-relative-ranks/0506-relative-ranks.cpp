class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size() ;
        vector<int>index(n) ;
        
        for(int i=0;i<n;i++){
            index[i]=i;  //original address 
        }
        // sorting in decreasing order 
       sort(index.begin(),index.end(),[&](int a,int b){
        return score[a]>score[b] ;
       }) ;
       vector<string> ans(n) ;
       for(int i=0;i<n;i++) {
        int originalIndex=index[i] ;
        if(i==0) 
        ans[originalIndex]="Gold Medal" ;
        else if(i==1)
         ans[originalIndex]="Silver Medal";
        else if(i==2) 
         ans[originalIndex]="Bronze Medal" ;

        else 
        ans[originalIndex]=to_string(i+1) ; 
       }
        return ans ;
    }
};