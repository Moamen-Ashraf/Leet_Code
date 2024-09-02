class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
        int n = 0;
        multiset <int> s(nums.begin(), nums.end());
        while (s.size() >= k) {
            auto it = s.begin();
            int cnt = 0, x = k, val = *it;
            while(x--){
                auto it = s.find(val);
                if(it != s.end()){
                    s.erase(it);
                    cnt++;
                }
                else break;
                val++;
            }
            n = (cnt == k)? n+1:n;
        }
        return (n*k == nums.size());
    }
};