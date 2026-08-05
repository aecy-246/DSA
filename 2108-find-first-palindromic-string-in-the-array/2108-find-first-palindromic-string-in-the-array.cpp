class Solution {
public:
    bool Palindrome(string s, int i,int j){
        if(s[i]!=s[j]){
            return false;
        }
        if(i>=j){
            return true;
        }
        return Palindrome(s,++i,--j);
    }

    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(Palindrome(words[i],0,words[i].size()-1)){
                return words[i];
            }
        }
        return "";
    }
};