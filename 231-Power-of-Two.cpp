class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0 && int(log2(n)) == log2(n));
    }
};