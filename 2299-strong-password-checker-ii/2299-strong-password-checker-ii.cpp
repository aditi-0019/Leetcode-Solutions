class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool digit = false;
        bool lower = false;
        bool upper = false;
        bool special = false;
        if(password.length() < 8)
            return false;
        for(char c : password) {
            if(isupper(c))
                upper = true;
            if(islower(c))
                lower = true;
            if(isdigit(c))
                digit = true;
            if(!isalnum(c))
                special = true;
        }
        for(int i = 0; i < password.size() - 1; i++) {
            if(password[i] == password[i + 1])
                return false;
        }
        return digit && lower && upper && special;
    }
};