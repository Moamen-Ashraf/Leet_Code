class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = 0;
        while (l < nums.size() - 1) {
            if (nums[l] == 0 && nums[l] != nums[r])
                swap(nums[l], nums[r]);
            else {
                r++;
                if(r < nums.size())                  
                   continue;
            }

            l++;
            r = l + 1;
        }
    }
};