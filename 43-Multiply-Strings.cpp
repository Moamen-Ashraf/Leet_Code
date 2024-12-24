class Solution {
public:
    string SumString(string s1, string s2) {
        string sum = "";
        int l = s1.length() - 1, r = s2.length() - 1, carry = 0;

        while (l >= 0 || r >= 0 || carry > 0) {
            int x = (l >= 0) ? s1[l] - '0' : 0;
            int z = (r >= 0) ? s2[r] - '0' : 0;

            int currentSum = x + z + carry;
            carry = currentSum / 10;
            sum += to_string(currentSum % 10);

            l--, r--;
        }

        reverse(sum.begin(), sum.end());
        return sum;
    }

    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";

        int n = num1.size(), m = num2.size();
        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string resultStr = "";
        bool leadingZero = true;
        for (int num : result) {
            if (leadingZero && num == 0) continue;
            leadingZero = false;
            resultStr += to_string(num);
        }

        return resultStr.empty() ? "0" : resultStr;
    }
};
