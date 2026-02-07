class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        unsigned int n = num;   // handle negative numbers
        string s = "";

        while (n > 0) {
            int rem = n % 16;

            if (rem < 10)
                s.push_back('0' + rem);
            else
                s.push_back('a' + (rem - 10));

            n = n / 16;
        }

        reverse(s.begin(), s.end());
        return s;
    }
};
