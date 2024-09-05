class Solution {
public:
    bool CheckPalindrome(string s, int l , int r){
        while(l <= r){
            if(s[l] != s[r])
                return false;
            l++, r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int len = s.length(), l = 0, r = len - 1;

        while (l <= r) {
            if(s[l] == s[r])
                l++, r--;
            else{
               bool _1 = CheckPalindrome(s, l+1, r);
               bool _2 = CheckPalindrome(s, l, r-1);
               if(!_1 && !_2) return false;
               else return true;
            }
        }

        return true;
    }
};