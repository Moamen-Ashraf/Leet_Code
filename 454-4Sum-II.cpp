class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map <int , int> sum;
        for(int i = 0 ; i < nums1.size(); i++){
            for(int j = 0 ; j < nums1.size(); j++){
                int x = nums3[i] + nums4[j];
                sum[x]++;
            }
        }
        int cnt = 0;
         for(int i = 0 ; i < nums1.size(); i++){
            for(int j = 0 ; j < nums1.size(); j++){
                int x = -1 * nums1[i] + nums2[j];
                auto it = sum.find(-1 * (nums1[i] + nums2[j]));
                if(it != sum.end())
                    cnt += it->second; 
            }
         }
            
        return cnt;
    }
};