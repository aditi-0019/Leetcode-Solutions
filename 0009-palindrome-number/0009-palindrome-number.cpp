class Solution {
public:
    bool isPalindrome(int x)
   {    if(x<0)
         return 0;
        int num=x,ans=0,rem;
        while(num){
            rem=num%10;
            num/=10;
            if(ans>INT_MAX/10 ||ans<INT_MIN/10)
            return 0;
            ans=ans*10+rem;
        }
        if(x==ans)
        return 1;
        else 
         return 0;
   } 
   };