class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int n= matrix.size();
    int m=matrix[0].size();
    int top=0,right=m-1;
    int left=0,bottom=n-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
    // towards right 
    for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]) ;
    }
    top++;
    // towards bottom 
    for(int i=top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);
    }
    right--;
    // towards left check the condition first whether bottom is greater than top or not 
    if(top<=bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
       }
       bottom--;
    }
    // towards top check the condition first 
    if(left<=right){
        for(int i =bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }

    }
    return ans; 
    }
};