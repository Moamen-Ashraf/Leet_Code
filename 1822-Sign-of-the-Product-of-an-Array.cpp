class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for(auto i: nums){
            if(!i)  return 0;
            if(i < 0) sign *= -1; 
        }
      return sign;
    }
};