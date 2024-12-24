class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        for(int i = 0; i < dist.size(); i++){
            float x = dist[i], z = speed[i];
            dist[i] = ceil(x/z);
        }
        
        sort(dist.begin(), dist.end());

        int cnt = 0;
        for(int i = 0; i < dist.size(); i++){
            if(dist[i] >= i+1)
                cnt++;
            else
                return cnt;
        }
        return cnt;
    }
};