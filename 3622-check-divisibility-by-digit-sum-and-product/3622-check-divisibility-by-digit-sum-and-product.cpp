class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0, prod = 1;
        while(n > 0) {
            int d = n % 10;
            sum += d;
            prod *= d;
            n = n / 10;
        }
        if(original % (sum + prod) == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};