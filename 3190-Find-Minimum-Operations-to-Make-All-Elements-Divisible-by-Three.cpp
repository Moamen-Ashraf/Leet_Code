class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation = 0;
        for(auto i :nums)
            operation += min(3 - (i % 3), i % 3);
        
        return operation;
    }
};