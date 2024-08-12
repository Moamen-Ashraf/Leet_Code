class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string str;
        unordered_map<string, int> mp;
        vector<string> RepeatedSeq;

        for (int i = 0; i < 10; i++)
            str += s[i];

        mp.insert({str, 1});

        for (int i = 10; i < s.length(); i++) {
            str += s[i];
            str.erase(str.begin());

            auto it = mp.find(str);
            
            if (it != mp.end()) {
                if (it->second == 1)
                    RepeatedSeq.push_back(str);

                it->second++;
            } else
                mp.insert({str, 1});              
        }

        return RepeatedSeq;
    }
};