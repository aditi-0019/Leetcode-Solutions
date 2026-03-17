class Solution {
public:
    bool wordPattern(string pattern, string s) {
         vector<string>words;
         string word;
         stringstream ss(s); // ss is an object used to initialise s  

        //  Split the string by spaces
        while(ss >> word){
            words.push_back(word);
        }

        if(pattern.size()!=words.size()){
            return false;
        }

        unordered_map<char,string>m1;
        unordered_map<string,char>n1;

       for(int i=0;i<pattern.size();i++){
           char ch=pattern[i];
           string s=words[i];

           if (m1.count(ch)) {
                if (m1[ch] != s) return false;
            } else {
                m1[ch] = s ;
            }

            if (n1.count(s)) {
                if (n1[s] != ch) return false;
            } else {
                n1[s] = ch;
            }
        }

        return true;
    
    }
};