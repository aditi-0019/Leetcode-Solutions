#include <cmath>

class Solution {
public:
    bool isHappy(int n)
    {
        while(n != 1 && n != 4) {
            int rem, ans = 0;
            int temp = n;  
            while(temp != 0){
                rem = temp % 10;
                temp /= 10;
                ans = ans + rem * rem;  
            }
            n = ans;  
        }
        
        if(n == 1) return true;  
        return false;  
    }
};
