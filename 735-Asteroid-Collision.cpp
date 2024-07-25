class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s;
        for (auto i : asteroids) {
            s.push_back(i);         
            while (s.size() > 1 && s.back() * s[s.size() - 2] < 0 && abs(s.back()) != s.back()) {
                if (s.back() + s[s.size() - 2] == 0)
                    s.pop_back(), s.pop_back();
                else {
                    int mx = max(abs(s.back()), abs(s[s.size() - 2]));
                    int x = (abs(s.back()) == mx) ? s.back() : s[s.size() - 2];
                    s.pop_back(), s.pop_back();
                    s.push_back(x);
                }
            }
        }

        return s;
    }
};