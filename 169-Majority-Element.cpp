class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        pair <int, int> mx;
        for (auto i : nums) {
            if (!mp.count(i))
                mp.insert({i, 1});
            else
                mp[i]++;
            if(mp[i] > mx.second){
                mx.first = i;
                mx.second = mp[i];
            }
        }
        return mx.first;
    }
};