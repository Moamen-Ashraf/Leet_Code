class Solution {
public:
    bool isHappy(int n) {
        long long sum = n, totsum = 0;
        unordered_set <int> s;
        while(totsum != 1 && s.find(totsum) == s.end()){
            s.insert(totsum);
            totsum = 0;
            while(sum){
                int digit = sum % 10;
                sum /= 10;
                totsum += pow(digit,2);
            }
            sum = totsum;
        }

        return (totsum == 1 || s.find(totsum) == s.end());
    }
};