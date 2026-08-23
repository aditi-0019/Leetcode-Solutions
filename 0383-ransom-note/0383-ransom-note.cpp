class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=ransomNote.size() ;
        int n=magazine.size() ;
        if(m>n) return false ;

        for(char c :ransomNote) {
            int pos=magazine.find(c) ;

            if(pos==string::npos) 
             return false ;
             magazine.erase(pos,1) ;
        }
        return true ;
    }
};