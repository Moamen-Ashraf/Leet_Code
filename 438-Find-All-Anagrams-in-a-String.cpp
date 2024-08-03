class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> indx;
        multiset <char> setp (p.begin(), p.end()), Windowset;
        for(int i = 0; i < p.size(); i++)
            Windowset.insert(s[i]);
        
        for(int i = p.size(); i <= s.size(); i++){
            if(Windowset == setp)
                indx.push_back(i - p.size());
                
            auto it = Windowset.find(s[i - p.size()]);
            Windowset.erase(it);
            Windowset.insert(s[i]);
        }
        
        return indx;
    }
};