class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x), n = s;
        reverse(s.begin(), s.end());
        return s == n;
    }
};