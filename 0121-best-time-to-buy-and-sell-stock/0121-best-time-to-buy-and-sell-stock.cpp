class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minprice=prices[0];
        for (int i=1;i<prices.size();i++){
            if(minprice <prices[i]){
                maxprofit=max(maxprofit,prices[i]-minprice);
            }
            minprice=min(minprice,prices[i]);
        }  
        return maxprofit;     
    } 
};