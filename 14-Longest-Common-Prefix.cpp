class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0];
        sort(strs.begin(),strs.end());

        for (int i = 1; i < strs.size(); i++) {
            prefix = "";
            for (int j = 0; j < strs[i].length(); j++) {
                if (strs[i][j] == strs[0][j])
                    prefix += strs[i][j];
                else
                    break;
            }
            if (prefix == "")
                return prefix;
        }

        return prefix;
    }
};