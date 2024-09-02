class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st;
        vector<int> output(*max_element(nums2.begin(), nums2.end()) + 1, -1), res;

        for(int i = 0; i < nums2.size(); i++){
            while(!st.empty() && st.top() < nums2[i]){
                output[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        for(int i : nums1)
            res.push_back(output[i]);

        return res;
    }
};