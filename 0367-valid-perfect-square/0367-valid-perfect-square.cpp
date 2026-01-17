class Solution {
public:
    bool isPerfectSquare(int num) {
     int n ;
     n=pow(num,0.5);

     if((n*n)%num==0)
     return true;
     else 
     return false;
        
    }
};