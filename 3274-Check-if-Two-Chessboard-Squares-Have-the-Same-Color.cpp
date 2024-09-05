class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        bool sq1 = (coordinate1[0] - 'a') % 2 == coordinate1[1] % 2;
        bool sq2 = (coordinate2[0] - 'a') % 2 == coordinate2[1] % 2;
        return (sq1 == sq2);
    }
};