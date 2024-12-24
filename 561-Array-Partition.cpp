class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size() / 2, maxsum = 0;
        sort(nums.begin(), nums.end());
        for(int i = n*2 - 1; i > -1; i-=2)
            maxsum += min(nums[i], nums[i-1]);
        
        return maxsum;
    }
};