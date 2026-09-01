class Solution {
public:

    bool check(int x) {
        while(x >= 10) {
            int rem1 = x % 10;
            x /= 10;
            int rem2 = x % 10;

            if(rem1 - rem2 != 1) {
                return false;
            }
        }

        return true;
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> num;

        for(int i = 1; i <= 9; i++) {

            int x = i;

            for(int j = i + 1; j <= 9; j++) {

                x = x * 10 + j;

                if(x > high)
                    break;

                if(x >= low && check(x)) {
                    num.push_back(x);
                }
            }
        }
        sort(num.begin(), num.end());

        return num;
    }
};