class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sz = nums.size();
        vector<int> prefix_sum(sz);
        prefix_sum[0] = nums[0];

        for (int i = 1; i < sz; i++)
            prefix_sum[i] += prefix_sum[i - 1] + nums[i];

        for (int i = sz - 2; i >= 0; i--)
            nums[i] += nums[i + 1];

        for (int i = 0; i < sz; i++)
            if(prefix_sum[i] == nums[i]) 
                return i;

        return -1;
    }
};