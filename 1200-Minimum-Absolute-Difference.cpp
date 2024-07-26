class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector <vector<int>> v;
        sort(arr.begin(), arr.end());
        int miin = INT_MAX; 
        for(int i = 0; i < arr.size() - 1; i++)
            miin = min(abs(arr[i] - arr[i+1]) ,miin);
                
        for(int i = 0; i < arr.size() - 1; i++){
            if(abs(arr[i + 1] - arr[i]) <= miin)
                v.push_back({arr[i], arr[i+1]});
        }
        return v;
    }
};