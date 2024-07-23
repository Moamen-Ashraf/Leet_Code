class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> s;
        for (auto i : operations){
            if (i == "D")
                s.push(2 * s.top());
            else if (i == "C")
                s.pop();
            else if (i == "+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x+y);
            }
            else
                s.push(stoi(i));
        }
        int tot = 0;
        while(!s.empty()){
            tot += s.top();
            s.pop();
        }
        return tot;
    }
};