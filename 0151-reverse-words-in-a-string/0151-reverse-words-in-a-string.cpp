class Solution {
public:
    string reverseWords(string s) {
    stack<string>words;
    string word;
    stringstream ss(s);

    while(ss>>word){
    words.push(word); 
      }
    string ans;
    while(!words.empty()){
      string curr=words.top();
      words.pop();
      ans+=curr;
      if(!words.empty()) 
      ans+=" "; 
    }
    return ans;
    }
};