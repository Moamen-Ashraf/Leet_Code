class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        if (!k)
            return false;
        for (int i = 0; i < k && i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end())
                return true;
            cout << nums[i] << endl;
            s.insert(nums[i]);
        }
        for (int i = k; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end())
                return true;
            s.erase(nums[i - k]);
            s.insert(nums[i]);
        }
        return false;
    }
};