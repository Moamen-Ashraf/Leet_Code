class Solution {
public:
    bool isValid(string s) {
        stack<char> in,out;

        for (auto i : s)
            in.push(i);

        while(!in.empty()){
            if(in.top() == ']' || in.top() == ')' || in.top() == '}'){
                out.push(in.top());
                in.pop();
            }
            else if (!out.empty() && (in.top() + 1 == out.top() || in.top() + 2 == out.top())){
                in.pop();
                out.pop();
            }
            else
                return false;
        }
            return (in.empty() && out.empty());
    }
};