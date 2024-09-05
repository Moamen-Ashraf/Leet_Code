class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> s;
        int sz = nums.size() * 2;
        nums.insert(nums.end(), nums.begin(), nums.end());
        vector <int> output(sz, -1);

        for(int i = 0; i < sz; i++){
            while(!s.empty() && nums[s.top()] < nums[i]){
                output[s.top()] = nums[i];
                s.pop();
            }
            s.push(i);
        }
        sz /= 2;
        while(sz--)
            output.pop_back();

        return output;
    }
};