class Solution {
public:
    struct compare {
        bool operator()(pair<vector<int>, int>& a,
                        pair<vector<int>, int>& b) const {
            return a.second > b.second;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int>>, compare> pq;
        for (auto i : points) {
            int distance = pow(i[0], 2) + pow(i[1], 2);
            pq.push({i, distance});
        }

        vector<vector<int>> closest_points;
        while (k--) {
            auto top = pq.top();
            closest_points.push_back(top.first);
            pq.pop();
        }

        return closest_points;
    }
};