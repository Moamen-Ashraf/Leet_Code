class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {

        for (int i = -1000; i <= 1000; i++) {
            unordered_map<int, int> mp;
            for (auto i : nums2)
                mp[i]++;
            int cnt = 0;
            for (auto j : nums1) {
                auto it = mp.find(j + i);
                if (it != mp.end() && it->second > 0) {
                    it->second--;
                    cnt++;
                }
            }
            if (cnt == nums2.size())
                return i;
        }
        return 0;
    }
};