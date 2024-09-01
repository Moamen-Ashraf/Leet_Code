class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long nn = n;
        nn = (n < 0) ? nn * -1 : nn;
        
        while (nn) {
            if (nn % 2) {
                ans *= x;
                nn--;
            } else {
                x *= x;
                nn /= 2;
            }
        }
        return (n < 0)? 1/ans : ans;
    }
};