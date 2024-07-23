class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector <pair <int, int>> v;
        for(int i = 0; i < heights.size(); i++)
            v.push_back({heights[i],i});       

        sort(v.rbegin(), v.rend());

        vector <string> sorted_names;
        for(int i = 0; i < v.size(); i++)
            sorted_names.push_back(names[v[i].second]);
        
          return sorted_names;
    }
};