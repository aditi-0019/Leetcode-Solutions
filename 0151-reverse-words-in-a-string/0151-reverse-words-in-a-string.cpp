class Solution {
public:
    

    string reverseWords(string s) {
    vector<string>words;
    string word;
    stringstream ss(s);
    // Extracting the words
    while(ss>>word) {
        words.push_back(word) ;
    }
    // Join words 
    string result="";
    for(int i=words.size()-1;i>=0;i--){
        result+=words[i];
        if(i!=0){
            result+=" ";
        }
    }
    return result;
    }
};