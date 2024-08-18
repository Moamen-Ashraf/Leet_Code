class Solution {
public:
    int isValid(int a, int b, int c){
        if(a < b+c && b < a+c && c < a+b)
            return a+b+c;
        return 0;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxper = 0;
        for(int i = 0; i < nums.size()-2; i++)
            maxper = max(maxper, isValid(nums[i], nums[i+1], nums[i+2]));
        
        return maxper;
    }
};