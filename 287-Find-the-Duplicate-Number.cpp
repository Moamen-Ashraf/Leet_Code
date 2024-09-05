class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);
        for(auto i : nums){
            if(freq[i] == 1) return i;
            freq[i]++;
        }
        return 0;
    }
};