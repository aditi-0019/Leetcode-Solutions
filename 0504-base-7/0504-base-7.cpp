class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string res = "";

        while(num > 0) {
            int rem = num % 7;
            res += (rem + '0');  // convert int to char
            num /= 7;
        }

        reverse(res.begin(), res.end());

        if(isNegative) res = "-" + res;

        return res;
    }
};