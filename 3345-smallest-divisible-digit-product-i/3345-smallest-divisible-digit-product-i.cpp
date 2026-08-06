class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int prod=1;
            int copy=n;
            while(copy){
                int d=copy%10;
                prod=prod*d;
                copy/=10;
            }
            if(prod%t==0) return n;
            n++;
        }
        return 1;
    }
};