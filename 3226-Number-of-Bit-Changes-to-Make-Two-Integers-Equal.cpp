class Solution {
public:
    string Dec2Bin(int num){
        string BinNum = "";
        while(num){
            if(num % 2 == 0)
                BinNum += '0';
            else
                BinNum += '1';
            num/=2;
        }
        
        return BinNum;
    }

    void Append_0(string &s, int len){
        while(s.length() != len)
            s += '0';
        reverse(s.begin(),s.end());
    }

    int minChanges(int n, int k) {
        string s1 = Dec2Bin(n), s2 = Dec2Bin(k);
        int len = max(s1.length(), s2.length());
        Append_0(s1, len);
        Append_0(s2, len);

        int x = 0;
        for(int i=0; i < s1.length(); i++){
            if(s1[i] == '1' && s2[i] == '0')
                x++;
            if(s1[i] == '0' && s2[i] == '1')
                return -1;
        }
        return x;
    }
};