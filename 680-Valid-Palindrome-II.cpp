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
            else
                return (CheckPalindrome(s, l+1, r) || CheckPalindrome(s, l, r-1));
        }

        return true;
    }
};