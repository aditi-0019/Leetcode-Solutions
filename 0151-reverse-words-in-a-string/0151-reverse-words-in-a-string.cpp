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
    // Reverse words 
    reverse(words.begin(),words.end());
    // Join words 
    string result="";
    for(int i=0;i<words.size();i++){
        result+=words[i];
        if(i!=words.size()-1){
            result+=" ";
        }
    }
    return result;
    }
};