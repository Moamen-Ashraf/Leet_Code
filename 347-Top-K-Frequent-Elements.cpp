class Solution {
public:
    struct SortBySecond {
        bool operator()(pair<int, int> a, pair<int, int> b) {
            return a.second < b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> freq;
        for (auto i : nums)
            count[i]++;

        priority_queue<pair<int, int>> pq;
        
        for(auto i : count)
            pq.push({i.second , i.first});


        while(k--){
            freq.push_back(pq.top().second);
            pq.pop();
        }

        return freq;
    }
};