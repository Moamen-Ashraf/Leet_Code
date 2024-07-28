class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = 0, r = 0;
        string str = "";
        while(l < word1.length() || r < word2.length()){
            if(l < word1.length()){
                str += word1[l];
                l++;
            } 
            if(r < word2.length()){
                str += word2[r];
                r++;
            } 
        }
        return str;
    }
};