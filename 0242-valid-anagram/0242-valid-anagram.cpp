/*class Solution {
public:
    bool isAnagram(string s, string t) {
        int i=0,j=0,count=0;
        if(s.length()!=t.length()) return false;
        vector<bool>visit(t.length(),false);
        for(i=0;i<s.length();i++){
            for(j=0;j<t.length();j++){
                if(s[i]==t[j]&&!visit[j]){
                visit[j]=true;
                count++;
                break;
            }
        }
        } 
        if(count==s.length()) return true ;
        else return false;
    }
}; */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
