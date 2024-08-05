class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rem = 1, sum = 10;

        for (int i = digits.size() - 1; i >= 0 && sum >= 10; i--){
            sum = rem + digits[i];
            digits[i] = sum % 10;
            rem = (sum >= 10)?  1 : 0; 
        }
     
       if(rem)
            digits.insert(digits.begin(), 1);

        return digits;   
    }
};