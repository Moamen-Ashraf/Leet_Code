class Solution {
public:
    vector <int> PrefixSum(vector <int> nums){
        vector <int> prefix(nums.size() + 1);
        prefix[0] = 0;

        for(int i = 0; i < nums.size(); i++)
            prefix[i + 1] = prefix[i] + nums[i];

        return prefix;
    }

    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        vector <int> prefix_sum = PrefixSum(nums);

        for(int i = 1; i <= nums.size(); i++){
            if (prefix_sum[i] % k == 0 && i > 1) return true;
            auto it = mp.find(prefix_sum[i] % k);
            if(it != mp.end() && it->second + 1 < i) return true;
            mp.insert({prefix_sum[i] % k , i});
        }

        return false;
    }
};